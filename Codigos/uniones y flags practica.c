#include <stdio.h>
void muestraBits(union flag bandera);

union flag { 
    struct byte {
        unsigned int bit0 : 1;
        unsigned int bit1 : 1;
        unsigned int bit2 : 1;
        unsigned int bit3 : 1;
        unsigned int bit4 : 1;
        unsigned int bit5 : 1;
        unsigned int bit6 : 1;
        unsigned int bit7 : 1;
    } byte;
    char valor; 
};

void muestraBits (union flag bandera) { 
    printf("El valor en binario es: %d%d%d%d%d%d%d%d \n", 
        bandera.byte.bit7, bandera.byte.bit6, bandera.byte.bit5, bandera.byte.bit4, 
        bandera.byte.bit3, bandera.byte.bit2, bandera.byte.bit1, bandera.byte.bit0);
}

int main() {
    union flag bandera;
    printf("Ingrese un valor de 0 al 255: ");
    scanf("%d", &bandera.valor); 
    muestraBits(bandera);
    return 0;
}
