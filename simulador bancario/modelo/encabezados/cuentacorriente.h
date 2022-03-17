#pragma once

using namespace std;

class Ccuentacorriente
{
public:
	Ccuentacorriente(double pSaldo);
	double darsaldo(void);
	
	void consignarmonto(double pMonto);

	void retirarmonto(double pMonto);
	~Ccuentacorriente();

private:
	double Saldo;
};

