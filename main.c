#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int arreglo[10] = {1,2,3,4,5,6,7,8,9,10};
bool busquedaSecuencial(int busqueda, int largo){
    int i;
    for(i=0; i<largo; i++){
        if(arreglo[i] == busqueda){ return true; }
    }
    return false;
}
int main(){
    // Búsqueda Secuencial
    // printf("¿El numero 500 se encuentra en el arreglo?\n%s", busquedaSecuencial(500, 10) ? "si esta" : "no esta");
    int a;
    a = (4*2 == 15) ? 15 : 2;
    printf("%i", a);

    return 0;
}

