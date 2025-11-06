#include <iostream>
using namespace std;

class Persona {
    protected:
        string nombre;
        int edad;
    public:
        Persona() {}
        Persona(string n, int e) {
            nombre = n;
            edad = e;
        }
    void mostrarPersona() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};

class Estudiante : public Persona {
private:
    float promedio;
public:
    Estudiante(){}
    Estudiante(string n, int e, float p) : Persona(n, e) {
        promedio = p;
    }
    void mostrarEstudiante() {
        mostrarPersona(); 
        cout << "Promedio: " << promedio << endl;
    }
};

int main() {
    int cantidad;
    cout << "¿Cuántos estudiantes querés cargar?: ";
    cin >> cantidad;
    Estudiante lista[cantidad];
    for (int i = 0; i < cantidad; i++) {
        string nombre;
        int edad;
        float promedio;

        cout << "\nEstudiante " << i + 1 << endl;
        cout << "Nombre: \n";
        cin >> nombre;
        cout << "Edad: \n";
        cin >> edad;
        cout << "Promedio: \n";
        cin >> promedio;
        lista[i] = Estudiante(nombre, edad, promedio);
    }
    cout << "\n|    LISTA DE ESTUDIANTES    |\n";
    for (int i = 0; i < cantidad; i++) {
        lista[i].mostrarEstudiante();
        cout << endl;
    }
    return 0;
}
