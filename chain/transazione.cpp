#include <string>

#include "header.h"

using namespace std;

Transazione::Transazione()
{

}

Transazione::Transazione(string code)
{
	this->transCode = code;

}

string Transazione::getCode()
{
	return this->transCode;
}

void Transazione::setCode()
{

}
