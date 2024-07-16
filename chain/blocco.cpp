#include <string>

#include "header.h"

using namespace std;

Blocco::Blocco()
{

}

void Blocco::setIdChain(int id)
{
	this->idChain = id;
}

void Blocco::setIdBlocco(int id)
{
	this->idBlocco = id;
}

void Blocco::addCounter()
{
	dimBlockCounter++;
}



void Blocco::addTransaction(int trans, int i)
{
	transOfBlockProvvisorio[i + 1] = trans;	
}
