#pragma once
#include "RegisterClass.h"

namespace Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxPass;


	private: System::Windows::Forms::RadioButton^ radioButtonS;
	private: System::Windows::Forms::RadioButton^ radioButtonT;





	private: System::Windows::Forms::Button^ button1;


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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonS = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonT = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логін";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Режим роботи";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(102, 20);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(366, 29);
			this->textBoxLogin->TabIndex = 4;
			// 
			// textBoxPass
			// 
			this->textBoxPass->Location = System::Drawing::Point(116, 64);
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->Size = System::Drawing::Size(352, 29);
			this->textBoxPass->TabIndex = 5;
			// 
			// radioButtonS
			// 
			this->radioButtonS->AutoSize = true;
			this->radioButtonS->Location = System::Drawing::Point(174, 117);
			this->radioButtonS->Name = L"radioButtonS";
			this->radioButtonS->Size = System::Drawing::Size(93, 25);
			this->radioButtonS->TabIndex = 7;
			this->radioButtonS->TabStop = true;
			this->radioButtonS->Text = L"Студент";
			this->radioButtonS->UseVisualStyleBackColor = true;
			// 
			// radioButtonT
			// 
			this->radioButtonT->AutoSize = true;
			this->radioButtonT->Location = System::Drawing::Point(273, 117);
			this->radioButtonT->Name = L"radioButtonT";
			this->radioButtonT->Size = System::Drawing::Size(103, 25);
			this->radioButtonT->TabIndex = 8;
			this->radioButtonT->TabStop = true;
			this->radioButtonT->Text = L"Викладач";
			this->radioButtonT->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(173, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 34);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Зарееструватись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 251);
			this->Controls->Add(this->radioButtonT);
			this->Controls->Add(this->radioButtonS);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxPass);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->textBoxLogin->Text;
		String^ pas = this->textBoxPass->Text;
		int id = 0;
		int Choise = -1;
		Register reg;
		if (radioButtonS->Checked) {
			Choise = 0;
			id = reg.LastId() + 1;
			reg.SaveUsersData(Convert::ToString(id), login, pas, Convert::ToString(Choise));
		}
		else {
			if (radioButtonT->Checked) {
				Choise = 1;
				id = reg.LastId() + 1;
				reg.SaveUsersData(Convert::ToString(id), login, pas, Convert::ToString(Choise));
			}
		}
	}
};
}
