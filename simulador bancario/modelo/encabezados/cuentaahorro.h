#pragma once

#include <string>

using namespace std;

class CCuentaDeAhorro
{
    // Atributos
private:
    double interesMensual;
    double saldo;

    // Métodos
public:
    CCuentaDeAhorro(void);
    CCuentaDeAhorro(double pSaldo, double pInteresMensual);
    double darInteresMensual(void);
    double darSaldo(void);
    void consignarMonto(double pMonto);
    void retirarMonto(double pMonto);
    void actualizarSaldoPorMes(void);
};
