#pragma once
#include "StudentClass.h"

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		StudentForm(void)
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
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonF;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::TextBox^ textBoxQ;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxAdres;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Button^ buttonN;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	protected:





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
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQ = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdres = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->buttonN = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonF
			// 
			this->buttonF->Location = System::Drawing::Point(12, 279);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(113, 35);
			this->buttonF->TabIndex = 19;
			this->buttonF->Text = L"Знайти";
			this->buttonF->UseVisualStyleBackColor = true;
			this->buttonF->Click += gcnew System::EventHandler(this, &StudentForm::buttonF_Click);
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(112, 204);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->ReadOnly = true;
			this->textBoxA->Size = System::Drawing::Size(826, 29);
			this->textBoxA->TabIndex = 18;
			// 
			// textBoxQ
			// 
			this->textBoxQ->Location = System::Drawing::Point(102, 130);
			this->textBoxQ->Name = L"textBoxQ";
			this->textBoxQ->ReadOnly = true;
			this->textBoxQ->Size = System::Drawing::Size(836, 29);
			this->textBoxQ->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 21);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Відповідь";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 21);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Питання";
			// 
			// textBoxAdres
			// 
			this->textBoxAdres->Location = System::Drawing::Point(139, 65);
			this->textBoxAdres->Name = L"textBoxAdres";
			this->textBoxAdres->Size = System::Drawing::Size(799, 29);
			this->textBoxAdres->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 21);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Адреса тесту";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(139, 25);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(799, 29);
			this->textBoxName->TabIndex = 12;
			// 
			// buttonN
			// 
			this->buttonN->Location = System::Drawing::Point(800, 279);
			this->buttonN->Name = L"buttonN";
			this->buttonN->Size = System::Drawing::Size(168, 35);
			this->buttonN->TabIndex = 11;
			this->buttonN->Text = L"Наступне питання";
			this->buttonN->UseVisualStyleBackColor = true;
			this->buttonN->Click += gcnew System::EventHandler(this, &StudentForm::buttonN_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Назва тесту";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(428, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 35);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Відповісти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentForm::button1_Click);
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 338);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->textBoxA);
			this->Controls->Add(this->textBoxQ);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxAdres);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->buttonN);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"StudentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int score = 0;
	private: System::Void buttonF_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ name = this->textBoxName->Text;
		String^ adres = this->textBoxAdres->Text;
		int number = 1;

		Student s;

		String^ q = s.TestQ(adres, name, Convert::ToString(number));

		this->textBoxQ->Text = q;

		this->textBoxName->ReadOnly = true;
		this->textBoxAdres->ReadOnly = true;

		this->textBoxA->ReadOnly = false;
		this->textBoxQ->ReadOnly = false;

	}
	private: System::Void buttonN_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ name = this->textBoxName->Text;
		String^ adres = this->textBoxAdres->Text;
		int number = 0;

		Student s;

		String^ a = Convert::ToString(s.TestA(adres, name, Convert::ToString(number + 1)));

		String^ au = this->textBoxA->Text;

		MessageBox::Show(a);
		MessageBox::Show(au);

		int r = s.Check(a, au);

		if (r == 1) {
			MessageBox::Show("+");
		}
		else {
			MessageBox::Show("-");
		}

	}
};
}
