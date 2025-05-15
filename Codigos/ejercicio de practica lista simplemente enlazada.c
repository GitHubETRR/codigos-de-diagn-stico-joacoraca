#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

int main() {
    struct Nodo* apuntaInicio = NULL;
    struct Nodo* actual = NULL;
    int numero;

    printf("Ingresá números (0 para terminar):\n");

    do {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero != 0) {
            struct Nodo* nuevo = malloc(sizeof(struct Nodo));
            nuevo->dato = numero;
            nuevo->siguiente = NULL;
            actual->siguiente = nuevo;
            actual = nuevo;
        }
    } while (numero != 0);

    printf("\nNúmeros guardados en la lista:\n");
    actual = apuntaInicio;

    while (actual != NULL) {
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");

    actual = apuntaInicio;
    while (actual != NULL) {
        struct Nodo* temp = actual;
        actual = actual->siguiente;
        free(temp);
    }

    return 0;
}