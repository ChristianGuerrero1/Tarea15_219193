#include "..\Encabezados\simulador.h"

CSimuladorBancario::CSimuladorBancario(void)
{
}

CSimuladorBancario::CSimuladorBancario(string pNombre, string pCedula, int pMesActual)
{
}

string CSimuladorBancario::darNombre(void)
{
	return string();
}

string CSimuladorBancario::darCedula(void)
{
	return string();
}

int CSimuladorBancario::darMesActual(void)
{
	return 0;
}

double CSimuladorBancario::calcularSaldoTotal(void)
{
	return 0.0;
}

void CSimuladorBancario::invertirCuentaCDT(double pMonto, double pInteresMensual)
{
}

void CSimuladorBancario::consignarCuentaDeAhorros(double pMonto)
{
}

void CSimuladorBancario::consignarCuentaCorriente(double pMonto)
{
}

void CSimuladorBancario::retirarCuentaDeAhorros(double pMonto)
{
}

void CSimuladorBancario::retirarCuentaCorriente(double pMonto)
{
}

void CSimuladorBancario::cerrarCuentaCDT(void)
{
}

void CSimuladorBancario::avanzarMesSimulacion(void)
{
}
