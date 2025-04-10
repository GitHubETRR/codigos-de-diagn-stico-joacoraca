#include <stdio.h>
#include <stdlib.h>

void imprimirNum (int *cant, int *num);

int main() {
    int cantidad, i;
    printf("Ingresá la cantidad de numeros que quieras ingresar ");
    scanf("%d", &cantidad);
    int *numeros = (int *) malloc(cantidad * sizeof(int));
    if (numeros == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }
    for (i = 0; i < cantidad; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    imprimirNum (&cantidad, numeros);
    free(numeros);
    return 0;
}
void imprimirNum (int *cant, int *num){
    printf("\nLos números ingresados son:\n");
    for (int i = 0; i < *cant; i++) {
        printf("%d", num[i]);
    }
}
