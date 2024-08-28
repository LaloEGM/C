#include<stdio.h>
int calculo(int n){
    int cont=1;
    while(n!=1){
                if(n %2 == 1)
                n=3*n+1;
                else
                n=n/2;
                cont++;
                }
                return cont;
    }
int main(){
    int n, res, a, b, c, maximo=0;
    while (scanf("%d %d",&a, &b)!=EOF){ 
          printf("%d %d ",a,b);
          if(b<a){
                  c=a;
                  a=b;
                  b=c;
                  }
    maximo=0;
    while(a<=b)
    {
    res=calculo(a);
    if(res>maximo)
    maximo=res;
    a++;
    }
    printf("%d\n",maximo);
}
                system("pause");
                return 0;
    }
