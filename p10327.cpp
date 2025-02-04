#include<stdio.h>

int arreglo[1000],swap=0;

void burbuja(int n)
{
     int k,j,aux;
      for( k=0; k < n -1; k++)
    {
        for(j = 0; j < n-1-k ; j++)
        {
              
              if(arreglo[j] > arreglo[j+1])
              {
                     swap++;       
                    aux = arreglo[j];
                    arreglo[j]= arreglo[j+1];
                    arreglo[j+1] = aux;
              }
              
        }
        
    }
}

int main(){
    int  i,n;
    while(scanf("%d",&n)!=EOF) /*Mientras no encuntre el fin de archivo significa el EOF */
    {
      for(i=0;i<n;i++)
      scanf("%d",&arreglo[i]);
      swap=0;
      burbuja(n);
      printf("Minimum exchange operations : %d\n",swap);
      
    }    
    
    
    
    return 0;
    }
