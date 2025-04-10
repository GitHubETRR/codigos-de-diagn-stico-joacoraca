#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR 15

typedef struct {
    char nombre[MAX_CHAR];
    float precio;
    int stock;
} productos_t;

productos_t* cargarProductos (int cantidad);
void mostrarProductos (int cantidad, productos_t* lista);

int main() {
    int cantidadProductos;
    printf("Bienvenido, ¿Cuántos productos quieres almacenar? ");
    scanf("%d", &cantidadProductos);
    productos_t* lista = cargarProductos(cantidadProductos);
    mostrarProductos(cantidadProductos, lista);
    free(lista);
    return 0;
}

productos_t* cargarProductos(int cantidad) {
    productos_t* lista = (productos_t*) malloc(cantidad * sizeof(productos_t));
    if (lista == NULL) {
        printf("Error al guardar la memoria\n");
        exit(1);
    }

    for (int i = 0; i < cantidad; i++) {
        printf("\nProducto N° %d:\n", i + 1);
        printf("Nombre: ");
        scanf(" %s", &lista[i].nombre); 
        printf("Precio: ");
        scanf("%f", &lista[i].precio);
        printf("Stock: ");
        scanf("%d", &lista[i].stock);
    }
    return lista;
}

void mostrarProductos (int cantidad, productos_t* lista){
    for (int i = 0; i < cantidad; i++)
    {
        printf("\nProducto N°: %d\n", i+1);
        printf("Nombre: %s \n", lista[i].nombre);
        printf("Precio: %.2f \n", lista[i].precio);
        printf("Stock: %d \n", lista[i].stock);
    }
}