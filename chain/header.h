#ifndef HEADER_H
#define HEADER_H

#include<vector>
#include<string>

#define MAX_DIM_BLOCK 10

using namespace std;

class Transazione {
	private:
		string transCode; 
		

	public:
		Transazione();
		Transazione(string code);
		string getCode();
		void setCode();

};

class DatiTransazione
{
private:
	string data;
	string ora;
	double importo;
	string codUte;
	string codCarta;
	string codiceUnivocoTransazione;

protected:
	void calcolaData();
	void generaCodUnivoco();


public:
	DatiTransazione();
	DatiTransazione(double importo, string codUte, string codCarta);
	string getCodiceUnivoco();
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



class GestFile
{
	private:
		string appoggio;
		bool check;

	protected:
		bool getCheckCostr();
		void codifica();
		void decodifica();

	public:
		GestFile();

		void leggiBlocchi();
		void leggiChain();
		void scriviBlocchi();
		void scriviChain();
};

#endif //HEADER_H