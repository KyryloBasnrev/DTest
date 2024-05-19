#pragma once


namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreateTestForm
	/// </summary>
	public ref class CreateTestForm : public System::Windows::Forms::Form
	{
	public:
		CreateTestForm(void)
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
		~CreateTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Назва тесту";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(224, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Далі";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateTestForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(368, 29);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Адреса тесту";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(368, 29);
			this->textBox2->TabIndex = 4;
			// 
			// CreateTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 235);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"CreateTestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreateTestForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool toCreateTest2 = false;
	public: String^ NameTest;
	public: String^ AdresTest;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		NameTest = this->textBox1->Text;
		AdresTest = this->textBox2->Text;

		this->toCreateTest2 = true;
		this->Close();
	}
	};
}
