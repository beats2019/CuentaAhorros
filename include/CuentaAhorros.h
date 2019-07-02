#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H


class CuentaAhorros
{
    public:
        CuentaAhorros( const double , const char * const );
        ~CuentaAhorros();
        double calcularInteresMensual();
        double obtenerSaldo();
        void obtenerInformacion();
        void modificarTasaInteres( const double );

    private:
        double saldoAhorros;
        char *nombre;
        void modificarSalario();

        static double tasaInteresAnual;
};

#endif // CUENTAAHORROS_H
