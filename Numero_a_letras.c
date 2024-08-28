#include<stdio.h>

//Crear un programa que tranforme el numero a letras
int main(){
    int numero,unidad,decena,centena;
    printf("--------Transformacion de numero a letras:--------\n");
    printf("Ingresa el numero a transformar:");
    scanf("%d ",&numero);
    
    unidad=numero%10; numero /=10;
    decena=numero%10; numero /=10;
    centena=numero%10; numero /=10;
    
    switch(centena){
           case 1: printf("Cien"); break; //Ejemmplo = Ciento uno
           case 2: printf("Doscientos"); break;
           case 3: printf("Trescientos"); break;  
           case 4: printf("Cuatrocientos"); break;  
           case 5: printf("Quinientos"); break;  
           case 6: printf("Seiscientos"); break;  
           case 7: printf("Setecientos"); break;  
           case 8: printf("Ochocientos"); break;
           case 9: printf("Novecientos"); break;
                    
    }
    
    switch(decena){
           //Aqui la condicion seria que observaria la longitud del digito.         
           case 1: printf("Diez"); break; // Ejemplo = Dieciseis 16,17,18,19,20, Ejemplo = 11,12,13,14,15
           case 2: printf("Veinte"); break; //Ejemplo = Venticuatro 21,22.23.24.25.26.27.28.29
           case 3: printf("Treinta"); break;  
           case 4: printf("Cuarenta"); break;  
           case 5: printf("Cincuenta"); break;  
           case 6: printf("Sesenta"); break;  
           case 7: printf("Setenta"); break;  
           case 8: printf("Ochenta"); break;
           case 9: printf("Noventa"); break;     
    }
    
    switch(unidad){
           case 1: printf("Uno"); break;
           case 2: printf("Dos"); break;
           case 3: printf("Tres"); break;  
           case 4: printf("Cuatro"); break;  
           case 5: printf("Cinco"); break;  
           case 6: printf("Seis"); break;  
           case 7: printf("Siete"); break;  
           case 8: printf("Ocho"); break;
           case 9: printf("Nueve"); break;         
    }
    
    
    
    
    system("pause");
    return 0;
    }
