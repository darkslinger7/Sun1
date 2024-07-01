#include <iostream>
#include <string>

using namespace std;
//Un programa que calcule el monto a pagar por una compra de bebidas.

int main() {
    string razonSocial;
    int bucle=1;
	int cantidadRefrescos, cantidadMaltas;
	string rifCedula;

    const float precioRefrescoDetal = 10.0;
    const float precioRefrescoMayor = 5.0;
    const float precioMaltasDetal = 12.0;
    const float precioMaltasMayor = 7.0;
    const int cantidadMinimaMayor = 6;
    
    //Los ciclos de el programa 
	while (bucle==1) {


    cout << "Ingrese la razon social del cliente: ";
    getline(cin, razonSocial);
    
    cout << "Ingrese el RIF/Cedula del cliente: ";
    getline(cin, rifCedula);

    cout << "Ingrese la cantidad de refrescos a comprar: ";
    getlinecin >> cantidadRefrescos;
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
    // Imprimir la factura
    cout << "\n--- Factura de la Compra ---\n";
    cout << "Cliente: " << razonSocial << endl;
    cout << "Cedula/Rif: " << rifCedula << endl;
    cout << "Total a pagar por Refrescos: $" << totalRefrescos << endl;
    cout << "Total a pagar por Maltas: $" << totalMaltas << endl;
    cout << "Monto total a pagar: $" << montoTotal << endl;
    cout << "Desea Registrar otros datos de compra?. 1 para si, 2 para no";
    cin >> bucle;
   } 
    
     return 0;
}