#pragma once
#include "Adherent.h"
namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SuprAdherent
	/// </summary>
	public ref class SuprAdherent : public System::Windows::Forms::Form
	{
	public:
		SuprAdherent(void)
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
		~SuprAdherent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lb;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dtn;
	private: System::Windows::Forms::DateTimePicker^ dta;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_tel;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SuprAdherent::typeid));
			this->lb = (gcnew System::Windows::Forms::ListBox());
			this->dtn = (gcnew System::Windows::Forms::DateTimePicker());
			this->dta = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_tel = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lb
			// 
			this->lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lb->FormattingEnabled = true;
			this->lb->ItemHeight = 25;
			this->lb->Location = System::Drawing::Point(631, 144);
			this->lb->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->lb->Name = L"lb";
			this->lb->Size = System::Drawing::Size(177, 29);
			this->lb->TabIndex = 54;
			this->lb->SelectedIndexChanged += gcnew System::EventHandler(this, &SuprAdherent::lb_SelectedIndexChanged);
			// 
			// dtn
			// 
			this->dtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->dtn->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtn->Location = System::Drawing::Point(631, 277);
			this->dtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dtn->Name = L"dtn";
			this->dtn->Size = System::Drawing::Size(177, 32);
			this->dtn->TabIndex = 52;
			// 
			// dta
			// 
			this->dta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->dta->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dta->Location = System::Drawing::Point(631, 322);
			this->dta->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dta->Name = L"dta";
			this->dta->Size = System::Drawing::Size(177, 32);
			this->dta->TabIndex = 53;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(1082, 518);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 56);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SuprAdherent::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(912, 518);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 56);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SuprAdherent::button1_Click);
			// 
			// txt_tel
			// 
			this->txt_tel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->txt_tel->Location = System::Drawing::Point(631, 235);
			this->txt_tel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_tel->Name = L"txt_tel";
			this->txt_tel->Size = System::Drawing::Size(177, 32);
			this->txt_tel->TabIndex = 48;
			// 
			// txt_nom
			// 
			this->txt_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->txt_nom->Location = System::Drawing::Point(631, 190);
			this->txt_nom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(177, 32);
			this->txt_nom->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(419, 326);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 26);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Date d\'adherent";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(419, 281);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 26);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Date de Naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(419, 235);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 26);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Telephone";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(419, 190);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 26);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Nom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(419, 144);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 26);
			this->label1->TabIndex = 47;
			this->label1->Text = L"ID";
			// 
			// SuprAdherent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1284, 608);
			this->Controls->Add(this->lb);
			this->Controls->Add(this->dtn);
			this->Controls->Add(this->dta);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_tel);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"SuprAdherent";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SuprAdherent";
			this->Load += gcnew System::EventHandler(this, &SuprAdherent::SuprAdherent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			String^ connString = "Data Source=ADAM;Initial Catalog=club;Integrated Security=True";
	private: System::Void SuprAdherent_Load(System::Object^ sender, System::EventArgs^ e) {
		// Create a connection object
		SqlConnection^ connection = gcnew SqlConnection(connString);

		try {
			// Open the connection
			connection->Open();

			// Create a command object
			SqlCommand^ command = connection->CreateCommand();

			// Set the command text
			command->CommandText = "SELECT id FROM adherent";

			// Execute the command
			SqlDataReader^ reader = command->ExecuteReader();

			// Clear the ListBox
			lb->Items->Clear();

			// Add items to the ListBox
			while (reader->Read()) {
				lb->Items->Add(reader->GetInt32(0));
			}

			// Close the reader
			reader->Close();

			// Close the connection
			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de connection",
				"erroooor", MessageBoxButtons::OK);
		}
	}
private: System::Void lb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	////////////////////////////////////////////////////////////////////////////
	txt_nom->Clear();
	txt_tel->Clear();

	// Create a connection object
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {
		// Open the connection
		connection->Open();

		// Create a command object
		SqlCommand^ command = connection->CreateCommand();
		int id = Convert::ToInt64(lb->Text);
		// Set the command text
		command->CommandText = "SELECT  nom,tele,dn,da  FROM adherent WHERE Id = @id";
		command->Parameters->AddWithValue("@id", id);

		// Execute the command
		SqlDataReader^ reader = command->ExecuteReader();

		// Check if the query returned any rows
		if (reader->Read()) {
			txt_nom->Text = reader->GetString(0);
			txt_tel->Text = reader->GetString(1);
			dtn->Value = reader->GetDateTime(2);
			dta->Value = reader->GetDateTime(3);
		}

		// Close the reader
		reader->Close();

		// Close the connection
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("moxkil f cenection",
			"erroooor", MessageBoxButtons::OK);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int id = Convert::ToInt64(lb->Text);
	Adherent ad(id);
	ad.rmv();
	lb->SelectedIndex=lb->SelectedIndex+1;


}
};
}
