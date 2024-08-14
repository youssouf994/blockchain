#include <string>
#include <iostream>

#include "header.h"

using namespace std;

int main()
{
	string codCarta = "00000001";
	string codUte = "00000001";
	double importo = 157.26;
	string appoggio;

	DatiTransazione dt(importo, codUte, codCarta);
	Blocco block;
	Chain Chain;
	GestFile g;
	
	appoggio = dt.getCodiceUnivoco();
	cout << appoggio;
	
	Transazione transact(appoggio);



	return 0;
}