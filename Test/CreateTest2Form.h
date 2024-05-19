#pragma once
#include "CreateTestClass.h"
#include "CreateTestForm.h"

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreateTest2Form
	/// </summary>
	public ref class CreateTest2Form : public System::Windows::Forms::Form
	{
	public:
		CreateTest2Form(void)
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
		~CreateTest2Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonEnd;
	private: System::Windows::Forms::Button^ buttonNext;
	private: System::Windows::Forms::TextBox^ textBoxQ;
	private: System::Windows::Forms::TextBox^ textBoxA;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonEnd = (gcnew System::Windows::Forms::Button());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->textBoxQ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Питання";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Відповідь";
			// 
			// buttonEnd
			// 
			this->buttonEnd->Location = System::Drawing::Point(12, 396);
			this->buttonEnd->Name = L"buttonEnd";
			this->buttonEnd->Size = System::Drawing::Size(108, 29);
			this->buttonEnd->TabIndex = 2;
			this->buttonEnd->Text = L"Завершити";
			this->buttonEnd->UseVisualStyleBackColor = true;
			// 
			// buttonNext
			// 
			this->buttonNext->Location = System::Drawing::Point(747, 396);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(153, 29);
			this->buttonNext->TabIndex = 3;
			this->buttonNext->Text = L"Додати питання";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &CreateTest2Form::buttonNext_Click);
			// 
			// textBoxQ
			// 
			this->textBoxQ->Location = System::Drawing::Point(101, 37);
			this->textBoxQ->Multiline = true;
			this->textBoxQ->Name = L"textBoxQ";
			this->textBoxQ->Size = System::Drawing::Size(760, 140);
			this->textBoxQ->TabIndex = 4;
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(101, 195);
			this->textBoxA->Multiline = true;
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(760, 144);
			this->textBoxA->TabIndex = 5;
			// 
			// CreateTest2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(912, 437);
			this->Controls->Add(this->textBoxA);
			this->Controls->Add(this->textBoxQ);
			this->Controls->Add(this->buttonNext);
			this->Controls->Add(this->buttonEnd);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"CreateTest2Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreateTest2Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: String^ name;
	public: String^ adres;
	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ q = this->textBoxQ->Text;
		String^ a = this->textBoxA->Text;

		//String^ name = ctf.NameTest;
		//String^ adres = ctf.AdresTest;

		CreateTest ct2;

		MessageBox::Show(Convert::ToString(ct2.LastId()));
		MessageBox::Show(adres);

		int nofq = 0;


		ct2.SaveNewTestData("3", adres, name, q, a, Convert::ToString(nofq));

	}
};
}
