#include<stdio.h>

int main(){

    int aux,v1,v2;

    printf("Ingresa el primer valor: ");
    scanf("%d",&v1);
    printf("Ingresa el segundo valor: ");
    scanf("%d",&v2);

    printf("Intercambio de variables.... \n");

    aux = v1;
    v1 = v2;
    v2 = aux;

    printf("El nuevo intercambio del primer valor es: %d\n", v1);
    printf("El nuevo intercambio del segundo valor es: %d", v2);

    return 0;
}