#include <string>
#include<iostream>
#include <ctime>

#include "header.h"

using namespace std;

DatiTransazione::DatiTransazione()
{

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
	while (buffer[i] != '_' && buffer[i] != '\0')
	{
		this->data += buffer[i];
		
		i++;

		if (buffer[i] == '_')
		{
			i++;
		}
	}

	while(buffer[i]!='_' && buffer[i] != '\0')
	{
		this->ora += buffer[i];
		
		i++;

		if (buffer[i] == '_')
		{
			break;
		}
	}

	cout << data<<endl;
	cout<<ora;


}
