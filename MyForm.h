#pragma once

namespace FormsLR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelSizeUnivers;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSizeUnivers;
	private: System::Windows::Forms::Label^ labelSetA;
	private: System::Windows::Forms::TextBox^ textBoxSetA;
	private: System::Windows::Forms::TextBox^ textBoxSetB;
	private: System::Windows::Forms::Label^ labelSetB;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSetA;

	private: System::Windows::Forms::Button^ buttonAddSetA;
	private: System::Windows::Forms::Button^ buttonDelSetA;
	private: System::Windows::Forms::Button^ buttonUnionSets;




	private: System::Windows::Forms::TextBox^ textBoxResult;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonDelSetB;
	private: System::Windows::Forms::Button^ buttonAddSetB;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSetB;
	private: System::Windows::Forms::Button^ buttonIntersectionSets;
	private: System::Windows::Forms::Button^ buttonNegationA;
	private: System::Windows::Forms::Button^ buttonNegationB;





	private: System::Windows::Forms::GroupBox^ groupBoxAll;
	private: System::Windows::Forms::ToolTip^ toolTipSizeUnivers;
	private: System::Windows::Forms::ToolTip^ toolTipNumericSetB;
	private: System::Windows::Forms::ToolTip^ toolTipNumericSetA;
	private: System::Windows::Forms::ToolTip^ toolTipButtonAddSetA;
	private: System::Windows::Forms::ToolTip^ toolTipButtonDelSetA;
	private: System::Windows::Forms::ToolTip^ toolTipButtonAddSetB;
	private: System::Windows::Forms::ToolTip^ toolTipButtonDelSetB;
	private: System::Windows::Forms::ToolTip^ toolTipButtonUnionSets;
	private: System::Windows::Forms::ToolTip^ toolTipButtonIntersectionSets;
	private: System::Windows::Forms::ToolTip^ toolTipButtonNegationSetA;
	private: System::Windows::Forms::ToolTip^ toolTipButtonNegationSetB;


	private: System::ComponentModel::IContainer^ components;












	protected:

	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
                        this->components =
                            (gcnew System::ComponentModel::Container());
                        this->labelSizeUnivers =
                            (gcnew System::Windows::Forms::Label());
                        this->numericUpDownSizeUnivers =
                            (gcnew System::Windows::Forms::NumericUpDown());
                        this->labelSetA =
                            (gcnew System::Windows::Forms::Label());
                        this->textBoxSetA =
                            (gcnew System::Windows::Forms::TextBox());
                        this->textBoxSetB =
                            (gcnew System::Windows::Forms::TextBox());
                        this->labelSetB =
                            (gcnew System::Windows::Forms::Label());
                        this->numericUpDownSetA =
                            (gcnew System::Windows::Forms::NumericUpDown());
                        this->buttonAddSetA =
                            (gcnew System::Windows::Forms::Button());
                        this->buttonDelSetA =
                            (gcnew System::Windows::Forms::Button());
                        this->buttonUnionSets =
                            (gcnew System::Windows::Forms::Button());
                        this->textBoxResult =
                            (gcnew System::Windows::Forms::TextBox());
                        this->label1 = (gcnew System::Windows::Forms::Label());
                        this->buttonDelSetB =
                            (gcnew System::Windows::Forms::Button());
                        this->buttonAddSetB =
                            (gcnew System::Windows::Forms::Button());
                        this->numericUpDownSetB =
                            (gcnew System::Windows::Forms::NumericUpDown());
                        this->buttonIntersectionSets =
                            (gcnew System::Windows::Forms::Button());
                        this->buttonNegationA =
                            (gcnew System::Windows::Forms::Button());
                        this->buttonNegationB =
                            (gcnew System::Windows::Forms::Button());
                        this->groupBoxAll =
                            (gcnew System::Windows::Forms::GroupBox());
                        this->toolTipSizeUnivers =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipNumericSetA =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipButtonAddSetA =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipButtonDelSetA =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipNumericSetB =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipButtonAddSetB =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipButtonDelSetB =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipButtonUnionSets =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipButtonIntersectionSets =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipButtonNegationSetA =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        this->toolTipButtonNegationSetB =
                            (gcnew System::Windows::Forms::ToolTip(
                                this->components));
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->numericUpDownSizeUnivers))
                            ->BeginInit();
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->numericUpDownSetA))
                            ->BeginInit();
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->numericUpDownSetB))
                            ->BeginInit();
                        this->groupBoxAll->SuspendLayout();
                        this->SuspendLayout();
                        //
                        // labelSizeUnivers
                        //
                        this->labelSizeUnivers->AutoSize = true;
                        this->labelSizeUnivers->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                18,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->labelSizeUnivers->Location =
                            System::Drawing::Point(12, 9);
                        this->labelSizeUnivers->Name = L"labelSizeUnivers";
                        this->labelSizeUnivers->Size =
                            System::Drawing::Size(189, 36);
                        this->labelSizeUnivers->TabIndex = 0;
                        this->labelSizeUnivers->Text     = L"Size universe";
                        //
                        // numericUpDownSizeUnivers
                        //
                        this->numericUpDownSizeUnivers->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->numericUpDownSizeUnivers->Font =
                            (gcnew System::Drawing::Font(
                                L"Microsoft Sans Serif",
                                10.2F,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->numericUpDownSizeUnivers->Location =
                            System::Drawing::Point(207, 18);
                        this->numericUpDownSizeUnivers->Maximum =
                            System::Decimal(gcnew cli::array<System::Int32>(4){
                                100000000, 0, 0, 0});
                        this->numericUpDownSizeUnivers->Name =
                            L"numericUpDownSizeUnivers";
                        this->numericUpDownSizeUnivers->Size =
                            System::Drawing::Size(139, 27);
                        this->numericUpDownSizeUnivers->TabIndex = 1;
                        this->numericUpDownSizeUnivers->TabStop  = false;
                        this->numericUpDownSizeUnivers->TextAlign =
                            System::Windows::Forms::HorizontalAlignment::Center;
                        this->numericUpDownSizeUnivers->ThousandsSeparator =
                            true;
                        this->toolTipSizeUnivers->SetToolTip(
                            this->numericUpDownSizeUnivers,
                            L"Изменяет размер универса");
                        this->numericUpDownSizeUnivers->ValueChanged +=
                            gcnew System::EventHandler(
                                this,
                                &MyForm::numericUpDownSizeUnivers_ValueChanged);
                        //
                        // labelSetA
                        //
                        this->labelSetA->AutoSize = true;
                        this->labelSetA->Font = (gcnew System::Drawing::Font(
                            L"Tahoma",
                            18,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->labelSetA->Location =
                            System::Drawing::Point(18, 22);
                        this->labelSetA->Name = L"labelSetA";
                        this->labelSetA->Size = System::Drawing::Size(44, 36);
                        this->labelSetA->TabIndex = 2;
                        this->labelSetA->Text     = L"A:";
                        //
                        // textBoxSetA
                        //
                        this->textBoxSetA->Cursor =
                            System::Windows::Forms::Cursors::IBeam;
                        this->textBoxSetA->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif",
                            10.2F,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBoxSetA->Location =
                            System::Drawing::Point(58, 31);
                        this->textBoxSetA->Name = L"textBoxSetA";
                        this->textBoxSetA->Size =
                            System::Drawing::Size(330, 27);
                        this->textBoxSetA->TabIndex = 3;
                        this->textBoxSetA->TabStop  = false;
                        //
                        // textBoxSetB
                        //
                        this->textBoxSetB->Cursor =
                            System::Windows::Forms::Cursors::IBeam;
                        this->textBoxSetB->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif",
                            10.2F,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBoxSetB->Location =
                            System::Drawing::Point(58, 161);
                        this->textBoxSetB->Name = L"textBoxSetB";
                        this->textBoxSetB->Size =
                            System::Drawing::Size(330, 27);
                        this->textBoxSetB->TabIndex = 5;
                        this->textBoxSetB->TabStop  = false;
                        //
                        // labelSetB
                        //
                        this->labelSetB->AutoSize = true;
                        this->labelSetB->Font = (gcnew System::Drawing::Font(
                            L"Tahoma",
                            18,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->labelSetB->Location =
                            System::Drawing::Point(18, 153);
                        this->labelSetB->Name = L"labelSetB";
                        this->labelSetB->Size = System::Drawing::Size(44, 36);
                        this->labelSetB->TabIndex = 4;
                        this->labelSetB->Text     = L"B:";
                        //
                        // numericUpDownSetA
                        //
                        this->numericUpDownSetA->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->numericUpDownSetA->Font =
                            (gcnew System::Drawing::Font(
                                L"Microsoft Sans Serif",
                                10.2F,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->numericUpDownSetA->Location =
                            System::Drawing::Point(9, 79);
                        this->numericUpDownSetA->Maximum =
                            System::Decimal(gcnew cli::array<System::Int32>(4){
                                100000, 0, 0, 0});
                        this->numericUpDownSetA->Minimum = System::Decimal(
                            gcnew cli::array<System::Int32>(4){1, 0, 0, 0});
                        this->numericUpDownSetA->Name = L"numericUpDownSetA";
                        this->numericUpDownSetA->Size =
                            System::Drawing::Size(99, 27);
                        this->numericUpDownSetA->TabIndex = 6;
                        this->numericUpDownSetA->TabStop  = false;
                        this->numericUpDownSetA->TextAlign =
                            System::Windows::Forms::HorizontalAlignment::Center;
                        this->toolTipNumericSetA->SetToolTip(
                            this->numericUpDownSetA,
                            L"Изменяет значение множества A");
                        this->numericUpDownSetA->Value = System::Decimal(
                            gcnew cli::array<System::Int32>(4){1, 0, 0, 0});
                        //
                        // buttonAddSetA
                        //
                        this->buttonAddSetA->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->buttonAddSetA->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                12,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->buttonAddSetA->Location =
                            System::Drawing::Point(114, 64);
                        this->buttonAddSetA->Name = L"buttonAddSetA";
                        this->buttonAddSetA->Size =
                            System::Drawing::Size(134, 57);
                        this->buttonAddSetA->TabIndex = 7;
                        this->buttonAddSetA->TabStop  = false;
                        this->buttonAddSetA->Text     = L"Add";
                        this->toolTipButtonAddSetA->SetToolTip(
                            this->buttonAddSetA,
                            L"Добавляет элемент в множество A");
                        this->buttonAddSetA->UseVisualStyleBackColor = true;
                        this->buttonAddSetA->Click +=
                            gcnew System::EventHandler(
                                this, &MyForm::buttonAddSetA_Click);
                        //
                        // buttonDelSetA
                        //
                        this->buttonDelSetA->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->buttonDelSetA->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                12,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->buttonDelSetA->Location =
                            System::Drawing::Point(254, 64);
                        this->buttonDelSetA->Name = L"buttonDelSetA";
                        this->buttonDelSetA->Size =
                            System::Drawing::Size(134, 57);
                        this->buttonDelSetA->TabIndex = 8;
                        this->buttonDelSetA->TabStop  = false;
                        this->buttonDelSetA->Text     = L"Delete";
                        this->toolTipButtonDelSetA->SetToolTip(
                            this->buttonDelSetA,
                            L"Удаляет элемент из множества A");
                        this->buttonDelSetA->UseVisualStyleBackColor = true;
                        this->buttonDelSetA->Click +=
                            gcnew System::EventHandler(
                                this, &MyForm::buttonDelSetA_Click);
                        //
                        // buttonUnionSets
                        //
                        this->buttonUnionSets->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->buttonUnionSets->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                12,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->buttonUnionSets->Location =
                            System::Drawing::Point(415, 161);
                        this->buttonUnionSets->Name = L"buttonUnionSets";
                        this->buttonUnionSets->Size =
                            System::Drawing::Size(169, 90);
                        this->buttonUnionSets->TabIndex = 12;
                        this->buttonUnionSets->TabStop  = false;
                        this->buttonUnionSets->Text     = L"Union";
                        this->toolTipButtonUnionSets->SetToolTip(
                            this->buttonUnionSets,
                            L"Выводит все элементы двух множеств");
                        this->buttonUnionSets->UseVisualStyleBackColor = true;
                        this->buttonUnionSets->Click +=
                            gcnew System::EventHandler(
                                this, &MyForm::buttonUnionSets_Click);
                        //
                        // textBoxResult
                        //
                        this->textBoxResult->Cursor =
                            System::Windows::Forms::Cursors::No;
                        this->textBoxResult->Font =
                            (gcnew System::Drawing::Font(
                                L"Microsoft Sans Serif",
                                10.2F,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->textBoxResult->Location =
                            System::Drawing::Point(620, 64);
                        this->textBoxResult->Name     = L"textBoxResult";
                        this->textBoxResult->ReadOnly = true;
                        this->textBoxResult->Size =
                            System::Drawing::Size(398, 27);
                        this->textBoxResult->TabIndex = 16;
                        this->textBoxResult->TabStop  = false;
                        //
                        // label1
                        //
                        this->label1->AutoSize = true;
                        this->label1->Font     = (gcnew System::Drawing::Font(
                            L"Tahoma",
                            18,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->label1->Location =
                            System::Drawing::Point(513, 56);
                        this->label1->Name     = L"label1";
                        this->label1->Size     = System::Drawing::Size(108, 36);
                        this->label1->TabIndex = 17;
                        this->label1->Text     = L"Result:";
                        //
                        // buttonDelSetB
                        //
                        this->buttonDelSetB->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->buttonDelSetB->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                12,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->buttonDelSetB->Location =
                            System::Drawing::Point(254, 194);
                        this->buttonDelSetB->Name = L"buttonDelSetB";
                        this->buttonDelSetB->Size =
                            System::Drawing::Size(134, 57);
                        this->buttonDelSetB->TabIndex = 20;
                        this->buttonDelSetB->TabStop  = false;
                        this->buttonDelSetB->Text     = L"Delete";
                        this->toolTipButtonDelSetB->SetToolTip(
                            this->buttonDelSetB,
                            L"Удаляет элемент из множества B");
                        this->buttonDelSetB->UseVisualStyleBackColor = true;
                        this->buttonDelSetB->Click +=
                            gcnew System::EventHandler(
                                this, &MyForm::buttonDelSetB_Click);
                        //
                        // buttonAddSetB
                        //
                        this->buttonAddSetB->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->buttonAddSetB->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                12,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->buttonAddSetB->Location =
                            System::Drawing::Point(114, 194);
                        this->buttonAddSetB->Name = L"buttonAddSetB";
                        this->buttonAddSetB->Size =
                            System::Drawing::Size(134, 57);
                        this->buttonAddSetB->TabIndex = 19;
                        this->buttonAddSetB->TabStop  = false;
                        this->buttonAddSetB->Text     = L"Add";
                        this->toolTipButtonAddSetB->SetToolTip(
                            this->buttonAddSetB,
                            L"Добавляет элемент в множество B");
                        this->buttonAddSetB->UseVisualStyleBackColor = true;
                        this->buttonAddSetB->Click +=
                            gcnew System::EventHandler(
                                this, &MyForm::buttonAddSetB_Click);
                        //
                        // numericUpDownSetB
                        //
                        this->numericUpDownSetB->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->numericUpDownSetB->Font =
                            (gcnew System::Drawing::Font(
                                L"Microsoft Sans Serif",
                                10.2F,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->numericUpDownSetB->Location =
                            System::Drawing::Point(9, 210);
                        this->numericUpDownSetB->Maximum =
                            System::Decimal(gcnew cli::array<System::Int32>(4){
                                100000, 0, 0, 0});
                        this->numericUpDownSetB->Minimum = System::Decimal(
                            gcnew cli::array<System::Int32>(4){1, 0, 0, 0});
                        this->numericUpDownSetB->Name = L"numericUpDownSetB";
                        this->numericUpDownSetB->Size =
                            System::Drawing::Size(99, 27);
                        this->numericUpDownSetB->TabIndex = 18;
                        this->numericUpDownSetB->TabStop  = false;
                        this->numericUpDownSetB->TextAlign =
                            System::Windows::Forms::HorizontalAlignment::Center;
                        this->toolTipNumericSetB->SetToolTip(
                            this->numericUpDownSetB,
                            L"Изменяет значение множества B");
                        this->numericUpDownSetB->Value = System::Decimal(
                            gcnew cli::array<System::Int32>(4){1, 0, 0, 0});
                        //
                        // buttonIntersectionSets
                        //
                        this->buttonIntersectionSets->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->buttonIntersectionSets->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                12,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->buttonIntersectionSets->Location =
                            System::Drawing::Point(590, 161);
                        this->buttonIntersectionSets->Name =
                            L"buttonIntersectionSets";
                        this->buttonIntersectionSets->Size =
                            System::Drawing::Size(169, 90);
                        this->buttonIntersectionSets->TabIndex = 21;
                        this->buttonIntersectionSets->TabStop  = false;
                        this->buttonIntersectionSets->Text = L"Intersection";
                        this->toolTipButtonIntersectionSets->SetToolTip(
                            this->buttonIntersectionSets,
                            L"Выводит общие элементы двух множеств");
                        this->buttonIntersectionSets->UseVisualStyleBackColor =
                            true;
                        this->buttonIntersectionSets->Click +=
                            gcnew System::EventHandler(
                                this, &MyForm::buttonIntersectionSets_Click);
                        //
                        // buttonNegationA
                        //
                        this->buttonNegationA->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->buttonNegationA->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                12,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->buttonNegationA->Location =
                            System::Drawing::Point(765, 161);
                        this->buttonNegationA->Name = L"buttonNegationA";
                        this->buttonNegationA->Size =
                            System::Drawing::Size(169, 90);
                        this->buttonNegationA->TabIndex = 22;
                        this->buttonNegationA->TabStop  = false;
                        this->buttonNegationA->Text     = L"Negation A";
                        this->toolTipButtonNegationSetA->SetToolTip(
                            this->buttonNegationA,
                            L"Выводит все элементы, которые не содержатся в "
                            L"множестве A");
                        this->buttonNegationA->UseVisualStyleBackColor = true;
                        this->buttonNegationA->Click +=
                            gcnew System::EventHandler(
                                this, &MyForm::buttonNegationA_Click);
                        //
                        // buttonNegationB
                        //
                        this->buttonNegationB->Cursor =
                            System::Windows::Forms::Cursors::Hand;
                        this->buttonNegationB->Font =
                            (gcnew System::Drawing::Font(
                                L"Tahoma",
                                12,
                                System::Drawing::FontStyle::Regular,
                                System::Drawing::GraphicsUnit::Point,
                                static_cast<System::Byte>(204)));
                        this->buttonNegationB->Location =
                            System::Drawing::Point(940, 161);
                        this->buttonNegationB->Name = L"buttonNegationB";
                        this->buttonNegationB->Size =
                            System::Drawing::Size(169, 90);
                        this->buttonNegationB->TabIndex = 23;
                        this->buttonNegationB->TabStop  = false;
                        this->buttonNegationB->Text     = L"Negation B";
                        this->toolTipButtonNegationSetB->SetToolTip(
                            this->buttonNegationB,
                            L"Выводит все элементы, которые не содержатся в "
                            L"множестве B");
                        this->buttonNegationB->UseVisualStyleBackColor = true;
                        this->buttonNegationB->Click +=
                            gcnew System::EventHandler(
                                this, &MyForm::buttonNegationB_Click);
                        //
                        // groupBoxAll
                        //
                        this->groupBoxAll->Controls->Add(this->buttonNegationB);
                        this->groupBoxAll->Controls->Add(this->buttonNegationA);
                        this->groupBoxAll->Controls->Add(
                            this->buttonIntersectionSets);
                        this->groupBoxAll->Controls->Add(this->textBoxResult);
                        this->groupBoxAll->Controls->Add(this->label1);
                        this->groupBoxAll->Controls->Add(this->buttonDelSetB);
                        this->groupBoxAll->Controls->Add(this->buttonAddSetB);
                        this->groupBoxAll->Controls->Add(
                            this->numericUpDownSetB);
                        this->groupBoxAll->Controls->Add(this->buttonUnionSets);
                        this->groupBoxAll->Controls->Add(this->buttonDelSetA);
                        this->groupBoxAll->Controls->Add(this->buttonAddSetA);
                        this->groupBoxAll->Controls->Add(
                            this->numericUpDownSetA);
                        this->groupBoxAll->Controls->Add(this->textBoxSetB);
                        this->groupBoxAll->Controls->Add(this->labelSetB);
                        this->groupBoxAll->Controls->Add(this->textBoxSetA);
                        this->groupBoxAll->Controls->Add(this->labelSetA);
                        this->groupBoxAll->Location =
                            System::Drawing::Point(19, 64);
                        this->groupBoxAll->Name = L"groupBoxAll";
                        this->groupBoxAll->Size =
                            System::Drawing::Size(1132, 284);
                        this->groupBoxAll->TabIndex = 24;
                        this->groupBoxAll->TabStop  = false;
                        this->groupBoxAll->Visible  = false;
                        //
                        // toolTipSizeUnivers
                        //
                        this->toolTipSizeUnivers->AutoPopDelay = 5000;
                        this->toolTipSizeUnivers->InitialDelay = 1000;
                        this->toolTipSizeUnivers->ReshowDelay  = 100;
                        //
                        // toolTipNumericSetA
                        //
                        this->toolTipNumericSetA->AutoPopDelay = 5000;
                        this->toolTipNumericSetA->InitialDelay = 1000;
                        this->toolTipNumericSetA->ReshowDelay  = 100;
                        //
                        // toolTipButtonAddSetA
                        //
                        this->toolTipButtonAddSetA->AutoPopDelay = 5000;
                        this->toolTipButtonAddSetA->InitialDelay = 1000;
                        this->toolTipButtonAddSetA->ReshowDelay  = 100;
                        //
                        // toolTipButtonDelSetA
                        //
                        this->toolTipButtonDelSetA->AutoPopDelay = 5000;
                        this->toolTipButtonDelSetA->InitialDelay = 1000;
                        this->toolTipButtonDelSetA->ReshowDelay  = 100;
                        //
                        // toolTipNumericSetB
                        //
                        this->toolTipNumericSetB->AutoPopDelay = 5000;
                        this->toolTipNumericSetB->InitialDelay = 1000;
                        this->toolTipNumericSetB->ReshowDelay  = 100;
                        //
                        // toolTipButtonAddSetB
                        //
                        this->toolTipButtonAddSetB->AutoPopDelay = 5000;
                        this->toolTipButtonAddSetB->InitialDelay = 1000;
                        this->toolTipButtonAddSetB->ReshowDelay  = 100;
                        //
                        // toolTipButtonDelSetB
                        //
                        this->toolTipButtonDelSetB->AutoPopDelay = 5000;
                        this->toolTipButtonDelSetB->InitialDelay = 1000;
                        this->toolTipButtonDelSetB->ReshowDelay  = 100;
                        //
                        // toolTipButtonUnionSets
                        //
                        this->toolTipButtonUnionSets->AutoPopDelay = 5000;
                        this->toolTipButtonUnionSets->InitialDelay = 1000;
                        this->toolTipButtonUnionSets->ReshowDelay  = 100;
                        //
                        // toolTipButtonIntersectionSets
                        //
                        this->toolTipButtonIntersectionSets->AutoPopDelay =
                            5000;
                        this->toolTipButtonIntersectionSets->InitialDelay =
                            1000;
                        this->toolTipButtonIntersectionSets->ReshowDelay = 100;
                        //
                        // toolTipButtonNegationSetA
                        //
                        this->toolTipButtonNegationSetA->AutoPopDelay = 5000;
                        this->toolTipButtonNegationSetA->InitialDelay = 1000;
                        this->toolTipButtonNegationSetA->ReshowDelay  = 100;
                        //
                        // toolTipButtonNegationSetB
                        //
                        this->toolTipButtonNegationSetB->AutoPopDelay = 5000;
                        this->toolTipButtonNegationSetB->InitialDelay = 1000;
                        this->toolTipButtonNegationSetB->ReshowDelay  = 100;
                        //
                        // MyForm
                        //
                        this->AutoScaleDimensions =
                            System::Drawing::SizeF(120, 120);
                        this->AutoScaleMode =
                            System::Windows::Forms::AutoScaleMode::Dpi;
                        this->BackColor =
                            System::Drawing::SystemColors::ActiveCaption;
                        this->ClientSize = System::Drawing::Size(1168, 373);
                        this->Controls->Add(this->groupBoxAll);
                        this->Controls->Add(this->numericUpDownSizeUnivers);
                        this->Controls->Add(this->labelSizeUnivers);
                        this->FormBorderStyle =
                            System::Windows::Forms::FormBorderStyle::Fixed3D;
                        this->MaximizeBox   = false;
                        this->Name          = L"MyForm";
                        this->StartPosition = System::Windows::Forms::
                            FormStartPosition::CenterScreen;
                        this->Text = L"Operations on sets";
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->numericUpDownSizeUnivers))
                            ->EndInit();
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->numericUpDownSetA))
                            ->EndInit();
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->numericUpDownSetB))
                            ->EndInit();
                        this->groupBoxAll->ResumeLayout(false);
                        this->groupBoxAll->PerformLayout();
                        this->ResumeLayout(false);
                        this->PerformLayout();
          }
#pragma endregion

// Sets the size of the universe
              private: System::Void numericUpDownSizeUnivers_ValueChanged(System::Object^ sender, System::EventArgs^ e);




// Adds an element to the first set
private: System::Void buttonAddSetA_Click(System::Object^ sender, System::EventArgs^ e);
// Adds an element to the second set
private: System::Void buttonAddSetB_Click(System::Object^ sender, System::EventArgs^ e);




// Removes an element from the first set
private: System::Void buttonDelSetA_Click(System::Object^ sender, System::EventArgs^ e);
// Removes an element from the second set
private: System::Void buttonDelSetB_Click(System::Object^ sender, System::EventArgs^ e);
	   



// Combining sets
private: System::Void buttonUnionSets_Click(System::Object^ sender, System::EventArgs^ e);
// Intersection of sets
private: System::Void buttonIntersectionSets_Click(System::Object^ sender, System::EventArgs^ e);
// Negation of the first set
private: System::Void buttonNegationA_Click(System::Object^ sender, System::EventArgs^ e);
// Negation of the second set
private: System::Void buttonNegationB_Click(System::Object^ sender, System::EventArgs^ e);




// Saves changes when dynamically adding/removing elements
private: System::Void saveChanges();
};
}
