#include<stdio.h>

void imprimir( int a[1000], int n)
{
     int i;
     for( i = 0; i<n; i++)
     printf("%d ",a[i]);
     printf("\n");
     }
     
typedef struct persona {
       
       char nombre[100];
       char ap[100];
       char am[100];
       int edad, anio, mes, dia;
       
       
       
       } persona;
     
void imprimirp (persona p){
    printf("%s ",p.nombre);
    printf("%s ",p.ap);
    printf("%s ",p.am);
    printf("%d ",p.edad);
    printf("%d ",p.anio);
    printf("%d ",p.mes);
    printf("%d \n",p.dia);  
    
     }
     
int fcp (persona a, persona b){
    if(strcmp(a.nombre , b.nombre) == 0)
       return strcmp(a.ap , b.ap) > 0;
       return strcmp(a.nombre , b.nombre);
    
    
    }
     
void burbuja (int n, persona a[1000]){
     int k,j,swap;
     persona aux;
     
       for( k=0; k < n -1; k++)
    {
        for(j = 0; j < n-1-k ; j++)
        {
              
              if(fcp(a[j],a[j+1]))
              {
                     swap++;       
                    aux = a[j];
                    a[j]= a[j+1];
                    a[j+1] = aux;
              }
              
        }
        
    }
     
     
     
     }
     
     
     
int main(){

    int arreglo[1000];
    int aux ,n, i, j, k , casos, l;
    persona p[1000];
    scanf("%d",&casos);
    
    for(l=0;l<casos;l++)
{
    scanf("%d ",&n);
    for (i = 0; i<n; i++)
    {
        
    scanf("%s",p[i].nombre);
    scanf("%s",p[i].ap);
    scanf("%s",p[i].am);
    scanf("%d ",&p[i].edad);
    scanf("%d ",&p[i].anio);
    scanf("%d ",&p[i].mes);
    scanf("%d ",&p[i].dia);
    }
    for (i = 0; i<n; i++)
    imprimirp (p[i]);
        
    
    
    burbuja(n,p);
    printf("\n");
    printf("\n");
    
    for (i = 0; i<n; i++)
        imprimirp (p[i]);
        
        
} 
    
 //Nombre del equipo partidos ganados perdidos empatados, goles a favor y goles en contra
    
    return 0;
}
