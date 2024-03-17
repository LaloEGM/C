#include<stdio.h>
int main(){
    int suma[5];
    int M[5][100];
    int maximo=0, indMax=0, l, t, i, j, n, m, k; //n = candidatos , m = regiones
    scanf("%d",&t);
    for(l = 0; l < t; l++)
    {
        scanf("%d %d",&n,&m);
        for ( j = 0; j < m; j++)
        {
            for ( k = 0; k < n; k++)
            {
                scanf("%d", &M[j][k]);
            }
        }


      /*for ( j = 0; j < m; j++)
        {
            for ( k = 0; k < n; k++)
            {
                printf("%d \t", M[j][k]);
            }
            printf("\n");
        }
*/


            for ( i = 0; i < n; i++)
            {
                suma[i]=0;
                for ( j = 0; j < m; j++)
                {
                    suma[i]+=M[j][i];

                }    
            }
            /*for ( i = 0; i < n; i++)
            {
                printf("%d ", suma[i]);
            }
            printf("\n");
            */
           maximo= 0, indMax=0; 
           for ( i = 0; i < n; i++)
           {
            if(suma[i]>maximo)
            {
                maximo = suma[i];
                indMax=i;
            }
           }
           printf("%d\n",indMax+1);
           
    }
    return 0;
}