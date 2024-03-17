#include<stdio.h>

int main(){
    int contM, contm, i;
    char cad1[100];
    scanf("%s", cad1);
    for (i = 0; cad1[i] != '\0'; i++)
    {
        contM=0;
        contm=0;
        if (cad1[i] >= 'A' && cad1[i] <= 'Z')
        {
            contM++;
        }
        else if(cad1[i] >= 'a' && cad1[i] <= 'z')
        {
            contm++;
        }
    printf("Letras mayusculas: %d \n",contM);
    printf("Letras minusculas: %d \n",contm);
    }
    //printf("Letras mayusculas: %d \n",contM);
    //printf("Letras minusculas: %d \n",contm);
    return 0;
}