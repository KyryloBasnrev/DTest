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

class Register {

public: 
	void SaveUsersData(String^ id, String^ log, String^ pas, String^ choise) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Test\\Test\\TestBase.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			connection->Open();

			String^ insertQuery = "INSERT INTO Users VALUES ('" + id + "', '" + log + "', '" + pas + "', '" + choise + "')";
			OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, connection);

			int affectedRows = insertCommand->ExecuteNonQuery();
			if (affectedRows > 0)
			{
				MessageBox::Show("Data inserted successfully.");
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

	int LastId() {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=D:\\C++_Proj\\Test\\Test\\TestBase.accdb;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			// ³�������� �'�������
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
			connection->Open();

			// �������� ������ �������� � ������� ID
			String^ query = "SELECT TOP 1 ID FROM Users ORDER BY ID DESC";
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

			// ��������� �'�������
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}

	}

};