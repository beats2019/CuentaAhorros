#include "CuentaAhorros.h"
#include <iostream>
using namespace std;

    double CuentaAhorros::tasaInteresAnual = 0.03;


    CuentaAhorros::CuentaAhorros( const double saldoInicial )
        : saldoAhorros( saldoInicial)
    {

    }

    CuentaAhorros::~CuentaAhorros()
    {

    }

    double CuentaAhorros::calcularInteresMensual()
    {

        double i = tasaInteresAnual * saldoAhorros / 12;
        return i;
    }

    double CuentaAhorros::obtenerSaldo()
    {
        modificarSalario();
        return saldoAhorros;
    }


    void CuentaAhorros::modificarSalario()
    {
        saldoAhorros += calcularInteresMensual();
    }

    void CuentaAhorros::obtenerInformacion()
    {
        cout <<" El cliente tiene un interes de " << calcularInteresMensual();

        cout<<"\nEl cliente tiene un saldo de " << obtenerSaldo();
    }

    void CuentaAhorros::modificarTasaInteres( const double t )
    {
        tasaInteresAnual = t / 100;
    }

