#include<stdio.h>
#include<string.h>

int main(){
    char nombre[100];
    printf("Introduce tu nombre: \n");
    gets(nombre);

    printf("Hola %s \n",nombre);
    
    system("pause");
    return 0;
}
