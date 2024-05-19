#pragma once
#include "CreateTestClass.h"

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
	private: System::Windows::Forms::Button^ buttonNext;
	private: System::Windows::Forms::TextBox^ textBoxName;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxAdres;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxQ;
	private: System::Windows::Forms::TextBox^ textBoxA;


	private: System::Windows::Forms::Button^ buttonEnd;


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
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdres = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxQ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->buttonEnd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Назва тесту";
			// 
			// buttonNext
			// 
			this->buttonNext->Location = System::Drawing::Point(820, 279);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(148, 35);
			this->buttonNext->TabIndex = 1;
			this->buttonNext->Text = L"Додати питання";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &CreateTestForm::buttonNext_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(139, 25);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(799, 29);
			this->textBoxName->TabIndex = 2;
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
			// textBoxAdres
			// 
			this->textBoxAdres->Location = System::Drawing::Point(139, 65);
			this->textBoxAdres->Name = L"textBoxAdres";
			this->textBoxAdres->Size = System::Drawing::Size(799, 29);
			this->textBoxAdres->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 21);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Питання";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 21);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Відповідь";
			// 
			// textBoxQ
			// 
			this->textBoxQ->Location = System::Drawing::Point(102, 130);
			this->textBoxQ->Name = L"textBoxQ";
			this->textBoxQ->Size = System::Drawing::Size(836, 29);
			this->textBoxQ->TabIndex = 7;
			// 
			// textBoxA
			// 
			this->textBoxA->Location = System::Drawing::Point(112, 204);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(826, 29);
			this->textBoxA->TabIndex = 8;
			// 
			// buttonEnd
			// 
			this->buttonEnd->Location = System::Drawing::Point(12, 279);
			this->buttonEnd->Name = L"buttonEnd";
			this->buttonEnd->Size = System::Drawing::Size(113, 35);
			this->buttonEnd->TabIndex = 9;
			this->buttonEnd->Text = L"Завершити";
			this->buttonEnd->UseVisualStyleBackColor = true;
			this->buttonEnd->Click += gcnew System::EventHandler(this, &CreateTestForm::buttonEnd_Click);
			// 
			// CreateTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 338);
			this->Controls->Add(this->buttonEnd);
			this->Controls->Add(this->textBoxA);
			this->Controls->Add(this->textBoxQ);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxAdres);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->buttonNext);
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
	public: int qnum = 0;
	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ q = this->textBoxQ->Text;
		String^ a = this->textBoxA->Text;
		String^ n = this->textBoxName->Text;
		String^ adres = this->textBoxAdres->Text;

		CreateTest ct;

		int id = ct.LastId() + 1;

		ct.SaveNewTestData(Convert::ToString(id), adres, n, q, a, Convert::ToString(qnum + 1));

		this->qnum = qnum++;

		this->textBoxA->Text = "";
		this->textBoxQ->Text = "";

	}
	private: System::Void buttonEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((this->textBoxName->Text != "") && (this->textBoxAdres->Text != "") && (this->textBoxQ->Text != "") && (this->textBoxA->Text != "")) {
			String^ q = this->textBoxQ->Text;
			String^ a = this->textBoxA->Text;
			String^ n = this->textBoxName->Text;
			String^ adres = this->textBoxAdres->Text;

			CreateTest ct;

			int id = ct.LastId() + 1;

			ct.SaveNewTestData(Convert::ToString(id), adres, n, q, a, Convert::ToString(qnum + 1));

			this->qnum = qnum++;

			MessageBox::Show("Тест створено");

		}
		else {
			MessageBox::Show("Тест створено");
		}
	}
};
}
