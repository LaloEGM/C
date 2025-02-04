//Algoritmo de la cubeta
#include<stdio.h>

int main(){
    int n,i,j;
    int a[100];
    int b[100];
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         //printf("%d",a);           
                    }
    
    for(i=0;i<100;i++)                
    {
         b[i]=0;
    }
    
    for(i=0;i<n;i++)
    {
         b[a[i]]++;           
                    }
                    
    for(i=0;i<100;i++)
    {
                   
                    }
    for(j=0;j<b[i];j++)                
    {
         printf("%d ",i);
    }
    
    system("pause");
    return 0;
    }
