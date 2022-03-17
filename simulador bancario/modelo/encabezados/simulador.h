#pragma once

#include <string>
#include "..\Encabezados\CuentaCDT.h"
#include "..\Encabezados\Cuentacorriente.h"
#include "..\Encabezados\Cuentaahorro.h"

using namespace std;

class CSimuladorBancario
{
    //atributos
private:
    string cedula;
    string nombre;
    int mesActual;

    //atributos objetos(relaciones)
    Ccuentacorriente cuentaCorriente;
    CCuentaDeAhorro cuentaAhorros;
    CCuentaCDT cuentaCDT;

    //metodos
public:
    CSimuladorBancario(void);
    CSimuladorBancario(string pNombre, string pCedula, int pMesActual);
    string darNombre(void);
    string darCedula(void);
    int darMesActual(void);
    double calcularSaldoTotal(void);
    void invertirCuentaCDT(double pMonto, double pInteresMensual);
    void consignarCuentaDeAhorros(double pMonto);
    void consignarCuentaCorriente(double pMonto);
    void retirarCuentaDeAhorros(double pMonto);
    void retirarCuentaCorriente(double pMonto);
    void cerrarCuentaCDT(void);
    void avanzarMesSimulacion(void);
};
