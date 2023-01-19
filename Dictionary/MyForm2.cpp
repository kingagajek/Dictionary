#include "MyForm2.h"

System::Void Dictionary::MyForm2::buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm2::Close();
}

System::Void Dictionary::MyForm2::buttonSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ textSearch = this->textBox1->Text;

	//Create a connection to the database
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Kinia\\OneDrive\\Pulpit\\Dictionary\\Dictionary\\DataDictionary.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
	connection->Open();

	//Creating the OleDBCommand object
	OleDbCommand^ command = gcnew OleDbCommand("SELECT Word, Definition FROM Table1 WHERE Word = @Word OR Definition = @Definition", connection);

	//Adding parameters to the command
	command->Parameters->AddWithValue("@Word", textSearch);
	command->Parameters->AddWithValue("@Definiton", textSearch);

	//Executing the command and storing the data
	OleDbDataReader^ reader = command->ExecuteReader();

	if (reader->HasRows)
	{
		// Read the record
		reader->Read();

		if (reader["Word"]->ToString() == textSearch)
		{
			// If the word exists, write the definition in the text box
			textBox2->Text = reader["Definition"]->ToString();
		}
		else
		{
			textBox2->Text = reader["Word"]->ToString();
		}
	}
	else
	{
		// If the word doesn't exist, display a message
		MessageBox::Show("No matching words!");
	}

	//Closing the connection
	connection->Close();
}

System::Void Dictionary::MyForm2::button1Clear_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Clear();
}