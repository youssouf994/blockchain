#include<string>
#include<vector>

#include "header.h"


using namespace std;

Chain::Chain()
{

}

Chain::Chain(string nomeChain, int idChain)
{
	this->nomeChain = nomeChain;
	this->idChain = idChain;
}

string Chain::toString()
{
	return nomeChain;
}

void Chain::setBlocco(Blocco b)
{
	this->blocco = blocco;
}

