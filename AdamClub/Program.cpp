#include "AddAdherent.h"
#include "Adherent.h"
#include <iostream>
#include "ModAdherent.h"
#include "AfficherAdherent.h"
#include "SuprAdherent.h"
//#include <vector>


using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//AdamClub::AddAdherent f;
	//f.ShowDialog();

	//AdamClub::AfficherAdherent aff;
	//f.ShowDialog();
	AdamClub::SuprAdherent f;
	f.ShowDialog();
	
	Adherent ad (87, "jggf", "gjgukh", DateTime::Now, DateTime::Now);
	//Adherent^ adg = gcnew Adherent();
	ad.SetValues(87, "jggf", "gjgukh", DateTime::Now, DateTime::Now);
	//vector<Adherent> listAdherent;
	
}
