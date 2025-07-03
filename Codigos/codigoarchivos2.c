#include <stdio.h>
#include <stdlib.h>
#define ARCHIVO "estudiantes.txt"
#define CAR_MAX 50

int main() {
    int opcion;
    char nombre[CAR_MAX];
    do {
        printf("\n    MENÚ    \n"
               "1) Agregar estudiante\n"
               "2) Ver estudiantes\n"
               "3) Salir\n"
               "Opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
        case 1: {
            printf("Nombre del alumno: ");
            fgets(nombre, sizeof(nombre), stdin);

            FILE *f = fopen(ARCHIVO, "a");
            if (f == NULL) {
                printf("No se pudo abrir el archivo.\n");
                return 1;
            }
            fputs(nombre, f);
            fclose(f);
            printf("Tu alumno se guardó\n");
            break;
        }
        case 2: {
            FILE *f = fopen(ARCHIVO, "r");
            if (f == NULL) {
                printf("No hay alumnos guardados.\n");
                break;
            }
            printf("\nLista de alumnos:\n");
            while (fgets(nombre, sizeof(nombre), f))
                printf("%s", nombre);
            fclose(f);
            break;
        }
        case 3:
            printf("Saliendo\n");
            break;

        default:
            printf("Opción inválida.\n");
        }

    } while (opcion != 3);
    return 0;
}

