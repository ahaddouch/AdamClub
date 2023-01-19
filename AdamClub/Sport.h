#pragma once
using namespace System::Data;
using namespace System;
using namespace std;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
ref class Sport
{

private:
	int id;
	String^ nom;

public:
	Sport(int id, String^ nom ) {
		this->id = id;
		this->nom = nom;
		

	}
	Sport(int id) {
		this->id = id;
	}
	String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
	void uploadSport() {
		try {

			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO sport  VALUES (@id, @nom);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@nom", nom);

			

			command.ExecuteNonQuery();


			MessageBox::Show("sport ajouter avec succes",
				"Inscription reussie", MessageBoxButtons::OK);
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel sport",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
		}
	}

	void UpdateSport() {



		try {

			SqlConnection^ connection = gcnew SqlConnection(connString);

			connection->Open();

			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "UPDATE sport SET nom = @nom  WHERE Id = @id";

			command->Parameters->AddWithValue("@id", id);
			command->Parameters->AddWithValue("@nom", nom);


			command->ExecuteNonQuery();

			connection->Close();

			MessageBox::Show(" demodifier  sport avec secces",
				"Échec de modifier", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {

			MessageBox::Show("Échec de modifier sport",
				"Échec de modifier", MessageBoxButtons::OK);
		}
	}
	void rmvSport() {
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
			connection->Open();

			SqlCommand^ command = connection->CreateCommand();

			command->CommandText = "DELETE FROM sport WHERE Id = @id";
			command->Parameters->AddWithValue("@id", id);

			command->ExecuteNonQuery();

			connection->Close();
			MessageBox::Show(" Suprimer sport avec secces",
				"succes", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de supresion Sport",
				"Échec de supresion", MessageBoxButtons::OK);
		}

	}
};

