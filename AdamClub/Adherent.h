#pragma once
#include <iostream>
//#include <vector>
using namespace System::Data;
using namespace System;
using namespace std;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;
ref class Adherent
{
private:
	int id;
	String^ nom;
	String^ tel;
	DateTime^ dn;
	DateTime^ da;

public:
	
	Adherent(int id, String^ nom, String^ tel, DateTime^ dn, DateTime^ da) {
		this->id = id;
		this->nom = nom;
		this->tel =tel;
		this->dn = dn;
	}

	void SetValues(int id, String^ nom, String^ tel, DateTime^ dn, DateTime^ da) {
		this->id = id;
		this->nom = nom;
		this->tel = tel;
		this->dn = dn;
	}
	void upload() {
		try {
			String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO adherent  VALUES (@id, @nom, @tel, @dn, @da);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@nom", nom);
			command.Parameters->AddWithValue("@tel", tel);
			command.Parameters->AddWithValue("@dn", dn);
			command.Parameters->AddWithValue("@da", da);

			command.ExecuteNonQuery();


			MessageBox::Show("Adherent ajouter avec succes",
				"Inscription reussie", MessageBoxButtons::OK);
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de l'enregistrement d'un nouvel adhérent",
				"Échec de l'enregistrement", MessageBoxButtons::OK);
		}
	}
	
	
};



