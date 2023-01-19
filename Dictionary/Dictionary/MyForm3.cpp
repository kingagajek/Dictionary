#include "MyForm3.h"

System::Void Dictionary::MyForm3::buttonBack_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm3::Close();
}

System::Void Dictionary::MyForm3::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Add the parameter and set the value
	String^ text1 = this->textBox1->Text;
	String^ text2 = this->textBox2->Text;

	//Create a connection to the database
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Kinia\\OneDrive\\Pulpit\\Dictionary\\Dictionary\\DataDictionary.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
	connection->Open();

	//Creating the OleDBCommand object
	OleDbCommand^ command = gcnew OleDbCommand("SELECT Word, Definition FROM Table1 WHERE Word = @Word OR Definition = @Definition", connection);

	//Add the text from the textbox as a parameter to the query
	command->Parameters->AddWithValue("@Word", text1);
	command->Parameters->AddWithValue("@Definition", text2);

	//Executing the command and storing the data
	OleDbDataReader^ reader = command->ExecuteReader();

	if (textBox1->Text->Length > 0 && textBox2->Text->Length > 0)
	{
		if (reader->HasRows)
		{
			MessageBox::Show("The word already exists in the dictionary!");
		}
		else
		{
			//Create a cmd object and specify the SQL query
			OleDbCommand^ cmd = gcnew OleDbCommand("INSERT INTO Table1 (Word, Definition) VALUES (@Word, @Definiton)", connection);
			//Add the text from the textbox as a parameter to the query
			cmd->Parameters->AddWithValue("@Word", text1);
			cmd->Parameters->AddWithValue("@Definition", text2);
			//Execute the query
			cmd->ExecuteNonQuery();
			String^ successDialog = "'" + text1 + "' successfully added to dictionary!";
			MessageBox::Show(successDialog, "Success");
		}
	}
	else
	{
		MessageBox::Show("Empty textbox! Enter a word and definiton.");
	}

	//Close the connection
	connection->Close();

}

System::Void Dictionary::MyForm3::button1Clean_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Clear();
}
System::Void Dictionary::MyForm3::button2Clean_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox2->Clear();
}