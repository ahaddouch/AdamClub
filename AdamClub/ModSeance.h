#pragma once
#include "Seance.h"

namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModSeance
	/// </summary>
	public ref class ModSeance : public System::Windows::Forms::Form
	{
	public:
		ModSeance(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModSeance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lb;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cbe;
	private: System::Windows::Forms::ComboBox^ cbs;
	private: System::Windows::Forms::DateTimePicker^ dts;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lb = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbe = (gcnew System::Windows::Forms::ComboBox());
			this->cbs = (gcnew System::Windows::Forms::ComboBox());
			this->dts = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lb
			// 
			this->lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lb->FormattingEnabled = true;
			this->lb->ItemHeight = 31;
			this->lb->Location = System::Drawing::Point(606, 81);
			this->lb->Name = L"lb";
			this->lb->Size = System::Drawing::Size(250, 66);
			this->lb->TabIndex = 67;
			this->lb->SelectedIndexChanged += gcnew System::EventHandler(this, &ModSeance::lb_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(316, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 31);
			this->label1->TabIndex = 66;
			this->label1->Text = L"ID";
			// 
			// cbe
			// 
			this->cbe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->cbe->FormattingEnabled = true;
			this->cbe->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->cbe->Location = System::Drawing::Point(606, 173);
			this->cbe->Margin = System::Windows::Forms::Padding(2);
			this->cbe->Name = L"cbe";
			this->cbe->Size = System::Drawing::Size(250, 39);
			this->cbe->TabIndex = 74;
			// 
			// cbs
			// 
			this->cbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->cbs->FormattingEnabled = true;
			this->cbs->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->cbs->Location = System::Drawing::Point(606, 234);
			this->cbs->Margin = System::Windows::Forms::Padding(2);
			this->cbs->Name = L"cbs";
			this->cbs->Size = System::Drawing::Size(250, 39);
			this->cbs->TabIndex = 75;
			// 
			// dts
			// 
			this->dts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->dts->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dts->Location = System::Drawing::Point(606, 295);
			this->dts->Margin = System::Windows::Forms::Padding(2);
			this->dts->Name = L"dts";
			this->dts->Size = System::Drawing::Size(250, 38);
			this->dts->TabIndex = 73;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(995, 491);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 51);
			this->button2->TabIndex = 71;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModSeance::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(808, 491);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModSeance::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(316, 301);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 31);
			this->label4->TabIndex = 68;
			this->label4->Text = L"Date de Seance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(316, 178);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 31);
			this->label3->TabIndex = 69;
			this->label3->Text = L"Equipe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(316, 239);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 31);
			this->label2->TabIndex = 70;
			this->label2->Text = L"Salle";
			// 
			// ModSeance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1284, 608);
			this->Controls->Add(this->cbe);
			this->Controls->Add(this->cbs);
			this->Controls->Add(this->dts);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lb);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ModSeance";
			this->Text = L"ModSeance";
			this->Load += gcnew System::EventHandler(this, &ModSeance::ModSeance_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public:
		String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
		int eqp;
private: System::Void ModSeance_Load(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {

		connection->Open();


		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT nom FROM equipe ;";

		SqlDataReader^ reader = command->ExecuteReader();

		cbe->Items->Clear();

		while (reader->Read()) {
			cbe->Items->Add(reader->GetString(0));
		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Échec de connection equipe",
			"erroooor", MessageBoxButtons::OK);
	}

	try {

		connection->Open();


		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT id FROM seance";

		SqlDataReader^ reader = command->ExecuteReader();

		lb->Items->Clear();

		while (reader->Read()) {
			lb->Items->Add(reader->GetInt32(0));
		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Échec de connection",
			"erroooor", MessageBoxButtons::OK);
	}
}
private: System::Void lb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();
		int id = Convert::ToInt64(lb->Text);
		command->CommandText = "SELECT  idequipe,salle,date  FROM seance WHERE Id = @id";
		command->Parameters->AddWithValue("@id", id);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			dts->Value = reader->GetDateTime(2);
			eqp = reader->GetInt32(0);
			cbs->Text =Convert::ToString( reader->GetInt32(1));
		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"erroooor", MessageBoxButtons::OK);
	}
	//////////////////////////////////////////////////////
	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();
		int id = Convert::ToInt64(lb->Text);
		command->CommandText = "SELECT  nom  FROM equipe WHERE Id = @id";
		command->Parameters->AddWithValue("@id", eqp);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			cbe->Text = reader->GetString(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"erroooor", MessageBoxButtons::OK);
	}
	////////////////////////////////////////////////////
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	SqlConnection^ connection = gcnew SqlConnection(connString);
	int id = Convert::ToInt32(lb->Text);

	String^ eqp = cbe->Text;
	int sle = Convert::ToInt32(cbs->Text);
	DateTime dates = dts->Value;
	int equipe = 0;


	try {
		connection->Open();

		SqlCommand^ command = connection->CreateCommand();

		command->CommandText = "SELECT  Id  FROM equipe WHERE nom = @nom";
		command->Parameters->AddWithValue("@nom", eqp);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read()) {
			equipe = reader->GetInt32(0);

		}

		reader->Close();

		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"error", MessageBoxButtons::OK);
	}
	////////////////////

	Seance se(id, equipe, sle, dates);
	se.UpdateSeance();
	lb->SelectedValue = -1;
	dts->Value = DateTime::Now;
	cbe->SelectedValue = -1;
	cbs->SelectedValue = -1;
}
};
}
