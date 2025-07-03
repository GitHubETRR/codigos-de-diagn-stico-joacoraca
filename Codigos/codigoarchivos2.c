#include <stdio.h>
#include <stdlib.h>
#define ARCHIVO "estudiantes.txt"

int main() {
    int opcion;
    char nombre[80];

    do {
        printf("\n--- MENÚ ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Ver estudiantes\n");
        printf("3. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);
        getchar();
        if (opcion == 1) {
            printf("Nombre del estudiante: ");
            fgets(nombre, sizeof(nombre), stdin);

            FILE *f = fopen(ARCHIVO, "a");
            if (f == NULL) {
                printf("No se pudo abrir el archivo.\n");
                return 1;
            }
            fputs(nombre, f);
            fclose(f);
            printf("Estudiante guardado.\n");

        } else if (opcion == 2) {
            FILE *f = fopen(ARCHIVO, "r");
            if (f == NULL) {
                printf("No hay estudiantes guardados.\n");
            } else {
                printf("\nLista de estudiantes:\n");
                while (fgets(nombre, sizeof(nombre), f)) {
                    printf("%s", nombre);
                }
                fclose(f);
            }

        } else if (opcion == 3) {
            printf("Saliendo...\n");
        } else {
            printf("Opción inválida.\n");
        }

    } while (opcion != 3);

    return 0;
}
