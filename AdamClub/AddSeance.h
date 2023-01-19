#pragma once

namespace AdamClub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddSeance
	/// </summary>
	public ref class AddSeance : public System::Windows::Forms::Form
	{
	public:
		AddSeance(void)
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
		~AddSeance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtn;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::TextBox^ txt_id;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->dtn = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// dtn
			// 
			this->dtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->dtn->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtn->Location = System::Drawing::Point(980, 468);
			this->dtn->Name = L"dtn";
			this->dtn->Size = System::Drawing::Size(373, 38);
			this->dtn->TabIndex = 52;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button2->Location = System::Drawing::Point(1563, 769);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 78);
			this->button2->TabIndex = 50;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddSeance::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(1283, 769);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 78);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// txt_id
			// 
			this->txt_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->txt_id->Location = System::Drawing::Point(980, 186);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(373, 38);
			this->txt_id->TabIndex = 49;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(545, 477);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 31);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Date de Seance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(545, 383);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 31);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Equipe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(545, 288);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 31);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Salle";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(545, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 31);
			this->label1->TabIndex = 46;
			this->label1->Text = L"ID";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox1->Location = System::Drawing::Point(980, 280);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(373, 39);
			this->comboBox1->TabIndex = 54;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox2->Location = System::Drawing::Point(980, 375);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(373, 39);
			this->comboBox2->TabIndex = 54;
			// 
			// AddSeance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1926, 935);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dtn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddSeance";
			this->Text = L"AddSeance";
			this->Load += gcnew System::EventHandler(this, &AddSeance::AddSeance_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
private: System::Void AddSeance_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
