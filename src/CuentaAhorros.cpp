#include "CuentaAhorros.h"
#include <iostream>
#include <cstring>
using namespace std;

    double CuentaAhorros::tasaInteresAnual = 0.03;


    CuentaAhorros::CuentaAhorros( const double saldoInicial, const char * const cadena )
        : saldoAhorros( saldoInicial)
    {
        nombre = new char[ strlen( cadena ) + 1 ];
        strcpy( nombre, cadena );

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
        cout << nombre << " tiene un interes de " << calcularInteresMensual();

        cout<<"\nDe esta manera tiene un saldo final de " << obtenerSaldo() << endl << endl;



    }

    void CuentaAhorros::modificarTasaInteres( const double t )
    {
        tasaInteresAnual = t / 100;
    }

