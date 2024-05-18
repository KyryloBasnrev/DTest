#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>
#include "StartForm.h"
#include "RegisterForm.h"
#include "StudentForm.h"
#include "TitherForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;
using namespace System::Drawing;
using namespace msclr::interop;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Test::StartForm startform;
	Test::RegisterForm registerform;
	Test::StudentForm studentform;
	Test::TitherForm titherform;

	while (true) {
		startform.ShowDialog();
		if (startform.toRegisterForm) {
			registerform.ShowDialog();
			break;
		}
		if (startform.toStydent) {
			studentform.ShowDialog();
			break;
		}
		else {
			if (startform.toTither) {
				titherform.ShowDialog();
				break;
			}
		}
		break;
	}

}