#include <iostream>
#include <string>

using namespace std;
//Un programa que calcule el monto a pagar por una compra de bebidas.

int main() {
    string razonSocial;
    string rifCedula;
    int cantidadRefrescos, cantidadMaltas;

    const float precioRefrescoDetal = 10.0;
    const float precioRefrescoMayor = 5.0;
    const float precioMaltasDetal = 12.0;
    const float precioMaltasMayor = 7.0;
    const int cantidadMinimaMayor = 6;

    cout << "Ingrese la razon social del cliente: ";
    getline(cin, razonSocial);
    cout << "Ingrese el RIF/Cedula del cliente: ";
    getline(cin, rifCedula);

    cout << "Ingrese la cantidad de refrescos a comprar: ";
    cin >> cantidadRefrescos;
    cout << "Ingrese la cantidad de maltas a comprar: ";
    cin >> cantidadMaltas;

    // calculo de los productos
    float totalRefrescos;
    if (cantidadRefrescos >= cantidadMinimaMayor) {
        totalRefrescos = cantidadRefrescos * precioRefrescoMayor;
    } else {
        totalRefrescos = cantidadRefrescos * precioRefrescoDetal;
    }

    float totalMaltas;
    if (cantidadMaltas >= cantidadMinimaMayor) {
        totalMaltas = cantidadMaltas * precioMaltasMayor;
    } else {
        totalMaltas = cantidadMaltas * precioMaltasDetal;
    }

    // ahora el monto total a pagar es lo que vamos a calcular
    float montoTotal = totalRefrescos + totalMaltas;

    cout << "\n--- Factura de la Compra ---\n";
    cout << "Cliente: " << razonSocial << endl;
    cout << "Cedula/Rif: " << rifCedula << endl;
    cout << "Total a pagar por Refrescos: $" << totalRefrescos << endl;
    cout << "Total a pagar por Raltas: $" << totalMaltas << endl;
    cout << "Monto total a pagar: $" << montoTotal << endl;
    
    //Los ciclos de el programa 
     return 0;
}

