#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAXIMO 5000



int absoluto(int n){
    if(n<0){
        return -n;
    }
    return n;
}

void rellenar(char cad[], int espacios){
    int i,l= strlen(cad);
    for (i = 0; i < espacios; i++)
    {
        cad[l+i]='0';
    }
    cad[l+i]='\0';
}

void invertir(char cad[]){

    int i, l = strlen(cad);
    char r[1000];
    for(i=0; i<l; i++){
        r[i]= cad[l-1-i];
    }
    r[i]='\0';
    strcpy(cad,r);

}
int suma(char cad1[], char cad2[], char res[]){
    int i,d1,d2,d3,a=0,lf,l1,l2,l3;
    invertir(cad1);
    invertir(cad2);
    l1=strlen(cad1);
    l2=strlen(cad2);
    l3= absoluto(l1 - l2);
    lf=l1;
    if(l1 != l2){
    if(l1>l2){
    	lf=l1;
        rellenar(cad2,l3);
    }
    else {
    	lf=l2;
        rellenar(cad1,l3);
    }
    
}
    
    
    for(i=0;i<lf;i++){
    	d1=cad1[i]-48;
    	d2=cad2[i]-48;
    	d3=d1+d2+a;
    	res[i]=d3%10+48;
    	if(d3>9){
    		a=1;
		}
		else{
             a=0;
             }
		
	}
		if(a==1){
			res[i++]='1';
				 
		} 
		res[i+1] = '\0';
		invertir(res);
}

int main(){
    int i,n,n1[1100],n2[1100];
    char fibo[3][1100];
                            while(scanf("%d",&n)!=EOF){
                            if (n == 1)
                            {
                                  printf("The Fibonacci number for 1 is 1\n");
                                  
                                  }else{
                                        
                                                  strcpy(fibo[0],"0"); 
                                                   strcpy(fibo[1],"1");
                                                   strcpy(fibo[2],"0");
                                                   strcpy(n2,fibo[0]);
                                                   strcpy(n1,fibo[0]); 
                                                  for(i=2;i<=n;i++)
                                                  {
                                                          
                                                             
                                                             strcpy(n2,fibo[0]);
                                                             strcpy(n1,fibo[1]);    
                                                            suma(n2,n1,fibo[2]);
                                                            
                                                                 strcpy(fibo[0],fibo[1]);
                                                                 strcpy(fibo[1],fibo[2]);
                                                                
                                                                 
                                                                   }
                              
                                                  printf("The Fibonacci number for %d is %s\n",n,fibo[2]);
                                                  }
                                        }
    return 0;
}
