#pragma once

using namespace System::Data;
using namespace System;
using namespace std;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
ref class Seance
{
private:
	int id;
	int idequipe;
	int salle;
	DateTime date;
public:
	String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
	Seance(int id, int idequipe,  int salle,DateTime date) {
		this->id = id;
		this->idequipe = idequipe;
		this->salle = salle;
		this->date = date;

	}
	Seance(int id) {
		this->id = id;
	}

	void uploadSeance() {
		try {

			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO seance (id,idequipe,salle, date) VALUES (@id, @idequipe, @salle, @date);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@idequipe", idequipe);
			command.Parameters->AddWithValue("@salle", salle);
			command.Parameters->AddWithValue("@date", date);

			command.ExecuteNonQuery();


			MessageBox::Show("Seance ajouter avec succes",
				"Inscription reussie", MessageBoxButtons::OK);
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel Seance",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
		}
	}
	void UpdateSeance() {



		try {

			SqlConnection^ connection = gcnew SqlConnection(connString);

			connection->Open();


			SqlCommand^ command = connection->CreateCommand();


			command->CommandText = "UPDATE seance SET idequipe = @idequipe , salle=@salle , date = @date  WHERE Id = @id";

			command->Parameters->AddWithValue("@id", id);
			command->Parameters->AddWithValue("@idequipe", idequipe);
			command->Parameters->AddWithValue("@salle", salle);
			command->Parameters->AddWithValue("@date", date);

			command->ExecuteNonQuery();


			connection->Close();

			MessageBox::Show(" demodifier  Seance avec secces",
				" secces !!!!!", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {

			MessageBox::Show("Échec de modifier  l'Seance",
				"Échec de modifier", MessageBoxButtons::OK);
		}
	}
	void rmvSeance() {
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {

			connection->Open();


			SqlCommand^ command = connection->CreateCommand();


			command->CommandText = "DELETE FROM seance WHERE Id = @id";
			command->Parameters->AddWithValue("@id", id);


			command->ExecuteNonQuery();

			connection->Close();
			MessageBox::Show(" Suprimer  seance avec secces",
				"succes", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de supresion  l'Seance",
				"Échec de supresion", MessageBoxButtons::OK);
		}

	}
};

