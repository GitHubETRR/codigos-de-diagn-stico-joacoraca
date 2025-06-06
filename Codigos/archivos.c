#include <stdio.h>
#define CHAR_MAX 100

int main() {
    FILE *archivo;
    char texto[CHAR_MAX];
    archivo = fopen("archivo.txt", "w");
    if (archivo == NULL) {
        printf("No se puede crear el archivo.\n");
        return 1;
    }
    fprintf(archivo, "Hola, este es mi primer archivo\n");
    fclose(archivo);
    archivo = fopen("archivo.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir bien el archivo\n");
        return 1;
    }
    printf("Contenido:\n");
    while (fgets(texto, sizeof(texto), archivo)) {
        printf("%s", texto);
    }
    fclose(archivo);
    return 0;
}
