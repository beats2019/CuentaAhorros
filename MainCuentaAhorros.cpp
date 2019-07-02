#include <iostream>
using namespace std;
#include "CuentaAhorros.h"

    int main()
    {

        CuentaAhorros cliente1( 2000 );
        CuentaAhorros cliente2( 3000 );

        cliente1.obtenerInformacion();
        cout << endl;
        cliente2.obtenerInformacion();

        cout <<"\nEstableciendo la tasa de interes al 4%" << endl;
        cliente1.modificarTasaInteres( 4 );

        cout << endl << endl;

        cliente1.obtenerInformacion();
        cout << endl;
        cliente2.obtenerInformacion();



        return 0;
    }
