#pragma once
#include "StartClass.h"

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логін";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(98, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(312, 29);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 87);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(297, 29);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(190, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 36);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Війти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StartForm::button1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(361, 241);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(143, 21);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Зарееструватися";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &StartForm::linkLabel1_LinkClicked);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 271);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool toStydent = false;
	public: bool toTither = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Users us;
		String^ log = this->textBox1->Text;
		String^ pas = this->textBox2->Text;
		int choise = -1;

		int id = us.id(log, pas);
		String^ logdata = us.UserLog(id);
		String^ pasdata = us.UserPas(id);
		if ((log = logdata) && (pas = pasdata)) {
			choise = us.Choise(log, pas, id);
			if (choise == 0) {
				this->toStydent = true;
				this->Close();
			}
			else {
				if (choise == 1) {
					this->toTither = true;
					this->Close();
				}
				else {
					MessageBox::Show("Не вірний режим роботи", "Помилка");
				}
			}
		}
		else {
			MessageBox::Show("Не вірні дані", "Помилка");
		}
	}
	public: bool toRegisterForm = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		toRegisterForm = true;
		this->Close();
	}
};
}
