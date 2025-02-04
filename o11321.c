#include<stdio.h>

void burbuja(int n, int m, int a[])
{
     int aux,k,j,swap=0;
     for(k=0; k < n-1; k++)
     {
       for(j=0; j < n-1-k; j++)
       {
         if(a[j]%m  <= a[j+1]%m)
         continue;
         //if(a[j]%m > a[j+1]%m)
         {
           if(a[j]%m  > a[j+1]%m)
           {
           
           swap++;
           aux = a[j];
           a[j]= a[j+1];
           a[j+1] = aux;}
         }
       }
     }
     
     for(k=0; k < n-1; k++)
     {
       for(j=0; j < n-1-k; j++)
       {
         if(a[j]%2  <= a[j+1]%2)
         continue;
         //if(a[j]%m > a[j+1]%m)
         {
           if(a[j]%2  < a[j+1]%2)
           {
           
           swap++;
           aux = a[j];
           a[j]= a[j+1];
           a[j+1] = aux;}
         }
       }
     }
}

int main()
{
    int a[10000],n,i,m;
    scanf("%d %d",&n,&m);
    printf("%d %d\n",n,m);
    for(i=0;i<n;i++)
    {
                    
      scanf("%d\n",&a[i]);
    }
    burbuja(n,m,a);
    for(i=0;i<n;i++)
    { 
      printf("%d\n",a[i]);
    }
    
    
    return 0;
}
