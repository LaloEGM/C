#include<stdio.h>

int main(){
    char cad[100];
    int i, cont1= 0;
    while(gets(cad))
    {
    
    for(i = 0; cad[i] != '\0'; i++){
          if(cad[i]== '"'){
                      if(cont1 == 0 )
                       printf("``");
                       else
                        printf("''"); 
                        cont1=(cont1+1)%2;
                      }
                      else
                      printf("%c",cad[i]);
          }
          printf("\n");
      }
    
    return 0;
    }
