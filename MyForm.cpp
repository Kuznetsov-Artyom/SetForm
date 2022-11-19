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



// Преобразование String^ в std::string
void MarshalString(String^ s, std::string& str) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	str = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
// Заполняет вектор значениями из строки
void fillVector(const std::string& str, std::vector<size_t>& arr)
{

	std::stringstream iss(str);

	size_t number;
	while (iss >> number)
		arr.emplace_back(number);
}
// Добавляет элементы в множество
void addElemsSet(std::vector<size_t> arr, TSet* (&set))
{
	size_t sizeUn = set->sizeUniverse();

	for (const auto& elem : arr)
		if (elem <= sizeUn)
			if (!set->checkElem(elem))
				set->add(elem);
}


// Нужно реализовать функцию, которая исправит нарушение принципа DRY (мой костыль)


// Установка размера универса
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


// Добавляет элемент в первое множество
System::Void FormsLR1::MyForm::buttonAddSetA_Click(System::Object^ sender, System::EventArgs^ e)
{
	//

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

	size_t sizeUn = setA->sizeUniverse();

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());

	//

	size_t value = System::Convert::ToUInt64(numericUpDownSetA->Value);
	
	if (setA->checkElem(value)) return;

	setA->add(value);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
}
// Добавляет элемент во второе множество
System::Void FormsLR1::MyForm::buttonAddSetB_Click(System::Object^ sender, System::EventArgs^ e)
{
	//

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

	size_t sizeUn = setA->sizeUniverse();

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());

	//

	size_t value = System::Convert::ToUInt64(numericUpDownSetB->Value);

	if (setB->checkElem(value)) return;

	setB->add(value);

	textBoxSetB->Text = gcnew String(setB->getString().c_str());
}


// Удаляет элемент из первого множества
System::Void FormsLR1::MyForm::buttonDelSetA_Click(System::Object^ sender, System::EventArgs^ e)
{
	//

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

	size_t sizeUn = setA->sizeUniverse();

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());

	//

	size_t value = System::Convert::ToUInt64(numericUpDownSetA->Value);

	if (!setA->checkElem(value)) return;

	setA->del(value);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
}
// Удаляет элемент из второго множества
System::Void FormsLR1::MyForm::buttonDelSetB_Click(System::Object^ sender, System::EventArgs^ e)
{
	//

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

	size_t sizeUn = setA->sizeUniverse();

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());

	//

	size_t value = System::Convert::ToUInt64(numericUpDownSetB->Value);

	if (!setB->checkElem(value)) return;

	setB->del(value);

	textBoxSetB->Text = gcnew String(setB->getString().c_str());
}


// Объединение множеств
System::Void FormsLR1::MyForm::buttonUnionSets_Click(System::Object^ sender, System::EventArgs^ e)
{
	//

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

	size_t sizeUn = setA->sizeUniverse();

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());
	//
	textBoxResult->Text = gcnew String(setA->unionSets(*setB).getString().c_str());
}
// Пересечение множеств
System::Void FormsLR1::MyForm::buttonIntersectionSets_Click(System::Object^ sender, System::EventArgs^ e)
{
	//

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

	size_t sizeUn = setA->sizeUniverse();

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());

	//
	textBoxResult->Text = gcnew String(setA->intersectionSets(*setB).getString().c_str());
}
// Отрицание первого множества
System::Void FormsLR1::MyForm::buttonNegationA_Click(System::Object^ sender, System::EventArgs^ e)
{
	//

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

	size_t sizeUn = setA->sizeUniverse();

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());

	//
	textBoxResult->Text = gcnew String(setA->negation().getString().c_str());
}
// Отрицание второго множества
System::Void FormsLR1::MyForm::buttonNegationB_Click(System::Object^ sender, System::EventArgs^ e)
{
	//

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

	size_t sizeUn = setA->sizeUniverse();

	addElemsSet(setOne, setA);
	addElemsSet(setTwo, setB);

	textBoxSetA->Text = gcnew String(setA->getString().c_str());
	textBoxSetB->Text = gcnew String(setB->getString().c_str());

	//
	textBoxResult->Text = gcnew String(setB->negation().getString().c_str());
}



