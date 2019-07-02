#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H


class CuentaAhorros
{
    public:
        CuentaAhorros( const double );
        ~CuentaAhorros();
        double calcularInteresMensual();
        double obtenerSaldo();
        void obtenerInformacion();
        void modificarTasaInteres( const double );

    private:
        static double tasaInteresAnual;
        double saldoAhorros;
        void modificarSalario();


};

#endif // CUENTAAHORROS_H
