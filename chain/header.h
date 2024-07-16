#ifndef HEADER_H
#define HEADER_H

#include<vector>
#include<string>

#define MAX_DIM_BLOCK 10

using namespace std;

class Transazione {

};

class Blocco {
private:
	int idChain;
	int idBlocco;
	int dimBlockCounter = 0;
	int transOfBlockProvvisorio[MAX_DIM_BLOCK];
	//char transOfBlock[MAX_DIM_BLOCK][32];

public:
	Blocco();
	void setIdChain(int id);
	void setIdBlocco(int id);
	void addCounter();
	void addTransaction(int trans, int i);
	void addBlock(Blocco B);
};



class Chain {
	/**/
private:
	Blocco blocco;
	string nomeChain;
	int idChain;

protected:
	vector<Blocco> elencoBlocchi;

public:
	Chain();
	Chain(string nomeChain, int idChain);
	string toString();
	void setBlocco(Blocco b);
};

#endif //HEADER_H