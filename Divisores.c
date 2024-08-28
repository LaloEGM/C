#include<stdio.h>

int main(){
    int a,b,i,j;
    int cA=0,cB=0, cAB=0;
    int A[100], B[100], AB[100];
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
                    if(a%i == 0)
                    {
                           A[cA]=i;
                           cA++;
                    //printf("%d ",i);
                    }
                    
    }
    for(j=1;j<=b;j++)
    {
                    if(b%j == 0)
                    {
                           B[cB]=j;
                           cB++;
                    //printf("%d ",j);
                    }
    }
    
    
 
    for(i=0;i<cA;i++)
    printf("%d ", A[i]);
    printf("\n");
    for(i=0;i<cB;i++)
    printf("%d ", B[i]);
    printf("\n");
    
       for(i=0;i<cA;i++){
                      for(j=0;j<cB;j++){
                                        if(A[i]==B[j]){
                                        AB[cAB]=B[j];
                                        cAB++;
                                         //printf("%d ",A[i]);               
                                         }
                                        }
                      }
    for(i=0;i<cAB;i++){
                   printf("%d ",AB[i]);    
                       }
                       printf("\n");
                       printf("%d ",AB[cAB-1]);
                       
                       
    system("pause");
    return 0;
    }
