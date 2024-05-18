#include <iostream>
#include <Windows.h>
#include <OleDB.h>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;
using namespace System::Drawing;
using namespace msclr::interop;

class Users {

public:
	int id(String^ log, String^ pas) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Test\\Test\\TestBase.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Выполнение запроса с параметром Name
			String^ query = "SELECT ID FROM Users WHERE log = ? AND pas = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@log", log));
			command->Parameters->Add(gcnew OleDbParameter("@pas", pas));

			int id = -1; // Инициализируем id значением по умолчанию

			// Выполнение запроса и получение значения ID
			Object^ result = command->ExecuteScalar();
			if (result != nullptr && Int32::TryParse(result->ToString(), id))
			{
				// Вывод полученного ID в консоль
				return id;
			}
			else
			{
				return id = -1;
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	String^ UserLog(int ID){
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Test\\Test\\TestBase.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Выполнение запроса
			String^ query = "SELECT log FROM Users WHERE ID = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ reader = command->ExecuteReader();
			String^ data = "";
			while (reader->Read())
			{
				String^ data = "";
				for (int i = 0; i < reader->FieldCount; i++)
				{
					data += reader->GetValue(i)->ToString() + " ";
				}
				return data;
			}

			// Закрытие соединения и отображение формы
			reader->Close();
			connection->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	String^ UserPas(int ID) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Test\\Test\\TestBase.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Выполнение запроса
			String^ query = "SELECT pas FROM Users WHERE ID = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@ID", ID));
			OleDbDataReader^ reader = command->ExecuteReader();
			String^ data = "";
			while (reader->Read())
			{
				String^ data = "";
				for (int i = 0; i < reader->FieldCount; i++)
				{
					data += reader->GetValue(i)->ToString() + " ";
				}
				return data;
			}

			// Закрытие соединения и отображение формы
			reader->Close();
			connection->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
	}

	int Choise(String^ log, String^ pas, int id) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Test\\Test\\TestBase.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// Открытие соединения
			connection->Open();

			// Выполнение запроса с параметром Name
			String^ query = "SELECT choise FROM Users WHERE log = ? AND pas = ? AND id = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@log", log));
			command->Parameters->Add(gcnew OleDbParameter("@pas", pas));
			command->Parameters->Add(gcnew OleDbParameter("@id", id));

			int choise = -1; // Инициализируем id значением по умолчанию

			// Выполнение запроса и получение значения ID
			Object^ result = command->ExecuteScalar();
			if (result != nullptr && Int32::TryParse(result->ToString(), choise))
			{
				// Вывод полученного ID в консоль
				return choise;
			}
			else
			{
				return choise = -1;
			}

			// Закрытие соединения
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
	}

};