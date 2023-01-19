#pragma once
#include "Personne.h"

using namespace System::Data;
using namespace System;
using namespace std;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
ref class Entraineur:public Personne
{protected:
	float prixH;
	float salaire;
	DateTime^ de;
	bool type;
public:
	String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
	Entraineur(int id, String^ nom, String^ tel, DateTime^ dn, DateTime^ de,float salaire) {
		this->id = id;
		this->nom = nom;
		this->tel = tel;
		this->dn = dn;
		this->de = de;
		this->salaire = salaire;
		this->type = 0;
		this->prixH = 0;
	}
	Entraineur(int id, String^ nom, String^ tel, DateTime^ dn,float prixH) {
		this->id = id;
		this->nom = nom;
		this->tel = tel;
		this->dn = dn;
		this->prixH = prixH;
		this->type = 1;
		this->de=DateTime::Now;
		this->salaire = 0;
	}
	Entraineur(int id) {
		this->id = id;
	}
	Entraineur(int id,String^ nom) {
		this->id = id;
		this->nom = nom;
	}
	void uploadE() {
		try {

			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO entraineur (id, nom, tele, dn, de,salaire,type,prixH) VALUES (@id, @nom, @tel, @dn, @de,@salaire,@type,@prixH);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@nom", nom);
			command.Parameters->AddWithValue("@tel", tel);
			command.Parameters->AddWithValue("@dn", dn);
			command.Parameters->AddWithValue("@de", de);
			command.Parameters->AddWithValue("@salaire", salaire);
			command.Parameters->AddWithValue("@type", type);
			command.Parameters->AddWithValue("@prixH", prixH);
			command.ExecuteNonQuery();


			MessageBox::Show("Entaineur ajouter avec succes",
				"Inscription reussie", MessageBoxButtons::OK);
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel Entaineur",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
		}
	}
	void UpdateE() {



		try {

			SqlConnection^ connection = gcnew SqlConnection(connString);

			connection->Open();

			
			SqlCommand^ command = connection->CreateCommand();


			command->CommandText = "UPDATE entraineur SET nom = @nom , tele=@tel , dn = @dn ,de=@de , salaire=@salaire ,type=@type,prixH=@prixH WHERE Id = @id";

			command->Parameters->AddWithValue("@id", id);
			command->Parameters->AddWithValue("@nom", nom);
			command->Parameters->AddWithValue("@tel", tel);
			command->Parameters->AddWithValue("@dn", dn);
			command->Parameters->AddWithValue("@de", de);
			command->Parameters->AddWithValue("@salaire", salaire);
			command->Parameters->AddWithValue("@type", type);
			command->Parameters->AddWithValue("@prixH", prixH);
			command->ExecuteNonQuery();

			
			connection->Close();

			MessageBox::Show(" demodifier  entraineur avec secces",
				" secces !!!!!", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {

			MessageBox::Show("Échec de modifier  l'entraineur",
				"Échec de modifier", MessageBoxButtons::OK);
		}
	}
	void rmvE() {
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
			
			connection->Open();

			 
			SqlCommand^ command = connection->CreateCommand();

			 
			command->CommandText = "DELETE FROM entraineur WHERE Id = @id";
			command->Parameters->AddWithValue("@id", id);

			 
			command->ExecuteNonQuery();
 
			connection->Close();
			MessageBox::Show(" Suprimer  entraineur avec secces",
				"succes", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de supresion  l'entraineur",
				"Échec de supresion", MessageBoxButtons::OK);
		}

	}

};

