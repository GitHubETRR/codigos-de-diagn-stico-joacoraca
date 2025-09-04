//Es un codigo que calcula el area de una figura geometrica
#include <iostream>
#include <cmath>
using namespace std;

int mostrarMenu() {
    int opcion;
    cout << "=== Calculadora de areas ===" << endl;
    cout << "1. Rectangulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;
    cout << "4. Circulo" << endl;
    cout << "Elegi una opción: ";
    cin >> opcion;
    return opcion;
}

int main() {
    int opcion = mostrarMenu();
    double base, altura, lado, radio, area;
    switch(opcion) {
        case 1:
            cout << "Ingresa la base: ";
            cin >> base;
            cout << "Ingresa la altura: ";
            cin >> altura;
            area = base * altura;
            cout << "El area del rectángulo es: " << area << endl;
            break;
        case 2:
            cout << "Ingresa el lado: ";
            cin >> lado;
            area = lado * lado;
            cout << "El area del cuadrado es: " << area << endl;
            break;

        case 3:
            cout << "Ingresa la base: ";
            cin >> base;
            cout << "Ingresa la altura: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El area del triángulo es: " << area << endl;
            break;
        case 4:
            cout << "Ingresa el radio: ";
            cin >> radio;
            area = 3.14 * pow(radio, 2);
            cout << "El area del circulo es: " << area << endl;
            break;
        default:
            cout << "Esa opcion no existe" << endl;
    }

    return 0;
}
