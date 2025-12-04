#include <iostream>
#include <fstream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }

    Persona() {
        nombre = "";
        edad = 0;
    }
};

class Estudiante : public Persona {
private:
    float promedio;

public:
    Estudiante(string n, int e, float p) : Persona(n, e) {
        promedio = p;
    }
    Estudiante() : Persona() {
        promedio = 0;
    }
    void guardar() {
        ofstream archivo("datos.txt", ios::app);
        archivo << nombre << " " << edad << " " << promedio << endl;
        archivo.close();
    }
    void mostrar() {
        cout << "Nombre: " << nombre 
             << " | Edad: " << edad
             << " | Promedio: " << promedio << endl;
    }

    void leer() {
        ifstream archivo("datos.txt");
        archivo >> nombre >> edad >> promedio;
        archivo.close();
    }
};

int main() {
    int opcion;
    do {
        cout << "\n----- MENU -----\n";
        cout << "1) Crear estudiante y guardar\n";
        cout << "2) Leer estudiante desde archivo\n";
        cout << "3) Salir\n";
        cout << "Elegir opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            string n;
            int e;
            float p;

            cout << "Nombre: ";
            cin >> n;
            cout << "Edad: ";
            cin >> e;
            cout << "Promedio: ";
            cin >> p;

            Estudiante est(n, e, p);
            est.guardar();
            cout << "\nEstudiante guardado.\n";

        } else if (opcion == 2) {
            Estudiante est;
            est.leer();

            cout << "\nEstudiante leído desde archivo:\n";
            est.mostrar();
        }
    } while (opcion != 3);
    return 0;
}




