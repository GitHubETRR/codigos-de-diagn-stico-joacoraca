#include <iostream>
#include <string>
using namespace std;

class Dispositivo{
private:
    string marca;
    int anio;

public:
    Dispositivo(string m, int a) {
        marca = m;
        anio = a;
    }
    void mostrarInfo() {
        cout << "Marca: " << marca << ", Año: " << anio << endl;
    }
    virtual void encender() {
        cout << "El dispositivo se está encendiendo..." << endl;
    }
};

class Computadora : public Dispositivo {
private:
    string modelo;
    string nombrePc;

public:
    Computadora(string m, int a, string mod) : Dispositivo(m, a) {
        modelo = mod;
        nombrePc = m;
    }
    void encender() override {
        cout << nombrePc << ": Bienvenido al sistema operativo." << endl;
    }
    void mostrarModelo() {
        cout << "Modelo: " << modelo << endl;
    }
};

class Celular : public Dispositivo{
private:
    string modelo;
    string nombreCel;

public:
    Celular(string m, int a, string mod) : Dispositivo(m, a) {
        modelo = mod;
        nombreCel = m;
    }
    void encender() override {
        cout << nombreCel << ": Iniciando Android..." << endl;
    }
    void mostrarModelo() {
        cout << "Modelo: " << modelo << endl;
    }
};

int main(){
    Computadora pc1("Lenovo", 2020, "ThinkPad");
    Celular cel1("Samsung", 2023, "Galaxy A54 5g");
    cout << "|   Información de la computadora   |" << endl;
    pc1.mostrarInfo();
    pc1.mostrarModelo();
    pc1.encender();

    cout << "\n|   Información del celular   |" << endl;
    cel1.mostrarInfo();
    cel1.mostrarModelo();
    cel1.encender();

    return 0;
}

