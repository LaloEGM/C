#include<stdio.h>

int main(){

int casos, i, j, k, cont;
char cad1[100],cad2[100];
scanf("%d \n",&casos);
    for (i=0;i<casos;i++)
    {
        scanf("%s %s",cad1,cad2);
        cont=0;
        for (k=0; cad1[k]!='\0'; k++)
        {
            for (j=0; cad2[j]!='\0'; j++)
            {
                if (cad2[j] == cad1[k])
                {
                    printf("%d \n",cont);
                }
            }
        }
        cont++;
    }
    return 0;
}
