#include <iostream>
#include <fstream>
using namespace std;

//clase padre
class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }
    Persona() {   //constructor vacío
        nombre = "";
        edad = 0;
    }
};

//clase heredada
class Estudiante : public Persona {
private:
    float promedio;
public:
    // Constructor completo
    Estudiante(string n, int e, float p) : Persona(n, e) {
        promedio = p;
    }
    //constructor vacío
    Estudiante() : Persona() {
        promedio = 0;
    }
    //guardar datos en archivo
    void guardar() {
        ofstream archivo("datos.txt", ios::app);
        archivo << nombre << " " << edad << " " << promedio << endl;
        archivo.close();
    }
    //mostrar datos
    void mostrar() {
        cout << "Nombre: \n" << nombre 
             << "Edad: \n" << edad
             << "Promedio: \n" << promedio << endl;
    }
    //lee el primer estudiante del archivo
    void leer() {
        ifstream archivo("datos.txt");
        archivo >> nombre >> edad >> promedio;
        archivo.close();
    }
};

int main() {
    int opcion;
    


    return 0;
}

