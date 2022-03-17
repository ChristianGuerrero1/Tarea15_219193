#pragma once


#include <string>

using namespace std;

class CCuentaCDT
{
    //atributos
private:
    double montoInvertido;
    double interesMensual;
    int mesApertura;

    //metodos
public:
    CCuentaCDT(void);
    CCuentaCDT(double pMontoInvertido, double pInteresMensual, int pMesApertura);
    double darInteresMensual(void);
    double calcularValorPresente(int pMesActual);
    void invertir(double pMonto, double pInteresMensual, int pMesApertura);
    double cerrarCuentaCDT(int pMesCierre);
};