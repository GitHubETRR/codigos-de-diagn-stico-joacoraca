#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

struct Nodo* agregarAlFinal(struct Nodo* apuntaInicio, int valor) {
    struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->siguiente = NULL;

    if (apuntaInicio == NULL) {
        printf("No hay ninguna lista en la que se haya guardado algo \n");
        return nuevo;
    }

    struct Nodo* actual = apuntaInicio;
    while (actual->siguiente != NULL) {
        actual = actual->siguiente;
    }
    actual->siguiente = nuevo;

    return apuntaInicio;
}

void mostrarLista(struct Nodo* apuntaInicio) {
    struct Nodo* actual = apuntaInicio;
    printf("Lista: ");
    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
}

void liberarLista(struct Nodo* apuntaInicio) {
    struct Nodo* temp;
    while (apuntaInicio != NULL) {
        temp = apuntaInicio;
        apuntaInicio = apuntaInicio->siguiente;
        free(temp);
    }
}

int main() {
    struct Nodo* lista = NULL;
    int valor, opcion;
    do {
        printf("Ingresá un número: ");
        scanf("%d", &valor);
        lista = agregarAlFinal(lista, valor);
        printf("Querés agregar otro número? si (1)/no (2): ");
        scanf(" %d ", &opcion);  
    } while (opcion == 1 );
    mostrarLista(lista);
    liberarLista(lista);
    return 0;
