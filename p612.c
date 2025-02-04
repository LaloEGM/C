#include<stdio.h>
#include<string.h>

char cad1[100][51];
int swap=0;

void burbuja(int p)
{
     
     int n;
     n=strlen(cad1[p]);
     int k,j,aux;
      for( k=0; k < n -1; k++)
    {
        for(j = 0; j < n-1-k ; j++)
        {
              
              if(cad1[p][j] > cad1[p][j+1])
              {
                     swap++;       
                    aux = cad1[p][j];
                    cad1[p][j]= cad1[p][j+1];
                    cad1[p][j+1] = aux;
              }
              
        }
        
    }
}

int main(){
    int ncasos,i=0,n,m;
    
    scanf("%d",&ncasos);
    while(i<ncasos)
    {
      scanf("%d %d",&n,&m);
      for(i=0;i<m;i++)
      {
        scanf("%s",cad1[i]);
        swap=0;
        burbuja(i);
        printf("%s %d\n",cad1[i],swap);
        
      }
    }
    
    return 0;
}
