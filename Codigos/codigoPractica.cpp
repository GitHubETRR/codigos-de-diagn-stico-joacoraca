#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    Persona() {
        cout << "Pone tu nommbre: ";
        cin >> nombre;
        cout << "Ingresa la edad: ";
        cin >> edad;
    }
    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

int main() {
    Persona personaI;
    personaI.mostrarInfo();
    return 0;
}