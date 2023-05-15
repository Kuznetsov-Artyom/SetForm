#include "MyForm.h"
#include "TSet.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FormsLR1::MyForm form;
	Application::Run(% form);

	return 0;
}


TSet* setA = nullptr;
TSet* setB = nullptr;



// Converts String^ to std::string
void MarshalString(String^ s, std::string& str) {
	using namespace Runtime::InteropServices;

	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();

	str = chars;

	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
// Fills a vector with values from a string
void fillVector(const std::string& str, std::vector<size_t>& arr)
{

	std::stringstream iss(str);

	size_t number;
	while (iss >> number)
		arr.emplace_back(number);
}
// Adds elements to the set
void addElemsSet(std::vector<size_t> arr, TSet* (&set))
{
	size_t sizeUn = set->sizeUniverse();

	for (const auto& elem : arr)
		if (elem <= sizeUn)
			if (!set->checkElem(elem))
				set->add(elem);
}




// Sets the size of the universe
System::Void FormsLR1::MyForm::numericUpDownSizeUnivers_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	textBoxSetA->Clear();
	textBoxSetB->Clear();
	textBoxResult->Clear();

	numericUpDownSetA->Value = 1;
	numericUpDownSetB->Value = 1;

	if (setA != nullptr)
	{
		delete setA;
		setA = nullptr;

		delete setB;
		setB = nullptr;
	}

	if (numericUpDownSizeUnivers->Value == 0) { groupBoxAll->Hide(); }
	else
	{
		groupBoxAll->Show();

		size_t value = System::Convert::ToUInt64(numericUpDownSizeUnivers->Value);

		setA = new TSet(value, value);
		setB = new TSet(value, value);

		numericUpDownSetA->Maximum = numericUpDownSizeUnivers->Value;
		numericUpDownSetB->Maximum = numericUpDownSizeUnivers->Value;
	}
}




// Adds an element to the first set
System::Void FormsLR1::MyForm::buttonAddSetA_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveChanges();

	size_t value = System::Convert::ToUInt64(numericUpDownSetA->Value);
	
	if (setA->checkElem(value)) return;

	setA->add(value);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
}
// Adds an element to the second set
System::Void FormsLR1::MyForm::buttonAddSetB_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveChanges();

	size_t value = System::Convert::ToUInt64(numericUpDownSetB->Value);

	if (setB->checkElem(value)) return;

	setB->add(value);

	textBoxSetB->Text = gcnew String(setB->getString().c_str());
}




// Removes an element from the first set
System::Void FormsLR1::MyForm::buttonDelSetA_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveChanges();

	size_t value = System::Convert::ToUInt64(numericUpDownSetA->Value);

	if (!setA->checkElem(value)) return;

	setA->del(value);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
}
// Removes an element from the second set
System::Void FormsLR1::MyForm::buttonDelSetB_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveChanges();

	size_t value = System::Convert::ToUInt64(numericUpDownSetB->Value);

	if (!setB->checkElem(value)) return;

	setB->del(value);

	textBoxSetB->Text = gcnew String(setB->getString().c_str());
}




// Combining sets
System::Void FormsLR1::MyForm::buttonUnionSets_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveChanges();
	textBoxResult->Text = gcnew String(setA->unionSets(*setB).getString().c_str());
}
// Intersection of sets
System::Void FormsLR1::MyForm::buttonIntersectionSets_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveChanges();
	textBoxResult->Text = gcnew String(setA->intersectionSets(*setB).getString().c_str());
}
// Negation of the first set
System::Void FormsLR1::MyForm::buttonNegationA_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveChanges();
	textBoxResult->Text = gcnew String(setA->negation().getString().c_str());
}
// Negation of the second set
System::Void FormsLR1::MyForm::buttonNegationB_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveChanges();
	textBoxResult->Text = gcnew String(setB->negation().getString().c_str());
}




// Saves changes when dynamically adding/removing elements
System::Void FormsLR1::MyForm::saveChanges()
{
	setA->clear();
	setB->clear();

	std::string strSetA{};
	std::string strSetB{};

	MarshalString(textBoxSetA->Text, strSetA);
	MarshalString(textBoxSetB->Text, strSetB);

	std::vector<size_t> setOne;
	std::vector<size_t> setTwo;

	fillVector(strSetA, setOne);
	fillVector(strSetB, setTwo);

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());
}
