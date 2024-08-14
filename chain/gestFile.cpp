#include <iostream>
#include <fstream>

#include "header.h"

using namespace std;


GestFile::GestFile()
{

	ofstream scriviBlo("blocchi.txt", ios::out | ios::app);
	ifstream leggiblo("blocchi.txt", ios::in);

	ofstream scriviCha("chain.txt",ios::out | ios::app);
	ifstream leggicha("chain.txt", ios::in);
	
	if ((scriviBlo.is_open()) && (scriviCha.is_open()))
	{
		cout << "file aperti correttamente" << endl;
		check = true;
	}

	else
	{
		cout << "file non trovati" << endl;
		check = false;
	}


}


void GestFile::codifica()
{

}

void GestFile::decodifica()
{

}


bool GestFile::getCheckCostr()
{
	return this->check;
}

void GestFile::leggiBlocchi()
{

}
void GestFile::leggiChain()
{

}
void GestFile::scriviBlocchi()
{


}
void GestFile::scriviChain()
{

}
