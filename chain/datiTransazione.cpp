#include <string>
#include<iostream>
#include <ctime>

#include "header.h"

using namespace std;

DatiTransazione::DatiTransazione()
{

}

DatiTransazione::DatiTransazione(double importo, string codUte, string codCarta)
{
	this->importo = importo;
	this->codUte = codUte;
	this->codCarta = codCarta;

	calcolaData();
	generaCodUnivoco();
}

void DatiTransazione::calcolaData()
{
	char buffer[80];
	int i, x;

	time_t orarioCorrente = time(nullptr);

	tm localTime;

	localtime_s(&localTime, &orarioCorrente);
	strftime(buffer, 80, "%d-%m-%Y_%H-%M-%S_", &localTime);

	x = 0;
	i = 0;
	while (i!=10) 
	{
		this->data += buffer[i];
		
		i++;

		
	}

	while(buffer[i]!='\0')
	{
		this->ora += buffer[i];
		
		i++;

	}


}





void DatiTransazione::generaCodUnivoco()
{
	this->codiceUnivocoTransazione =
		this->data +
		this->ora +
		to_string(this->importo) +
		this->codUte +
		this->codCarta +
		/*this-> +codMacchina*/
		"!";

	setCode(this->codiceUnivocoTransazione);
	
}

string DatiTransazione::getCodiceUnivoco()
{
	return this->codiceUnivocoTransazione;
}



