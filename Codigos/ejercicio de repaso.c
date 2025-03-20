#include <stdio.h>

typedef struct {
    char nombre[20];
    char apellido[20];
    float promedio;
} infoalumnos_t;

void ingresarAlumnos(infoalumnos_t alumnos[], int cantidadAlumnos);
void mostrarAlumnos(infoalumnos_t alumnos[], int cantidadAlumnos);

int main(void) {
    int cantidadAlumnos;
    printf("Bienvenido, profesor. Por favor, ingresa la cantidad de alumnos: ");
    scanf("%d", &cantidadAlumnos);
    infoalumnos_t alumnos[cantidadAlumnos];
    ingresarAlumnos(alumnos, cantidadAlumnos);
    mostrarAlumnos(alumnos, cantidadAlumnos);
    return 0;
}

void ingresarAlumnos(infoalumnos_t alumnos[], int cantidadAlumnos) {
    for (int i = 0; i < cantidadAlumnos; i++) {
        printf("\nIngrese los datos del alumno %d\n", i + 1);
        printf("Nombre: ");
        scanf(" %s", alumnos[i].nombre);  
        printf("Apellido: ");
        scanf(" %s", alumnos[i].apellido);  
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
    }
}

void mostrarAlumnos(infoalumnos_t alumnos[], int cantidadAlumnos) {
    printf("\nLista de alumnos:\n");
    for (int i = 0; i < cantidadAlumnos; i++) {
        printf("\nAlumno N°: %d\nNombre: %s\nApellido: %s\nPromedio: %f\n",
                i + 1, alumnos[i].nombre, alumnos[i].apellido, alumnos[i].promedio);
    }
}