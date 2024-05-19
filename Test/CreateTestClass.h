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

class CreateTest {

	public:

		int LastId() {

			String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Test\\Test\\TestBase.accdb;";
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			try
			{
				// Відкриваємо з'єднання
				OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
				connection->Open();

				// Вибираємо останнє значення з колонки ID
				String^ query = "SELECT TOP 1 ID FROM Tests ORDER BY ID DESC";
				OleDbCommand^ command = gcnew OleDbCommand(query, connection);
				Object^ result = command->ExecuteScalar();

				if (result != nullptr)
				{
					return Convert::ToInt32(result);
				}
				else
				{
					MessageBox::Show("No data found.", "Error");
				}

				// Закриваємо з'єднання
				connection->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message);
			}

		}

		void SaveNewTestData(String^ id, String^ adres, String^ name, String^ question, String^ answer, String^ numberofq) {

			String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Test\\Test\\TestBase.accdb";
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			try
			{
				OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

				connection->Open();

				String^ insertQuery = "INSERT INTO Tests VALUES ('" + id + "', '" + adres + "', '" + name + "', '" + question + "', '" + answer + "', '" + numberofq + "')";
				OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, connection);

				int affectedRows = insertCommand->ExecuteNonQuery();
				if (affectedRows > 0)
				{
					MessageBox::Show("Питання додано.");
				}
				else
				{
					MessageBox::Show("Failed to insert data.");
				}

				connection->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message);
			}

		}

};