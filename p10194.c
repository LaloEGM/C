#include<stdio.h>

typedef struct 
{
        char nombre[100];
        int a,b,c,d,e,f,g,h,i;       
}equipos;

imprimirdatos(equipos e)
{
    printf("%s\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",e.nombre,e.a,e.b,e.c,e.d,e.f,e.g,e.h,e.i);
               
}



equipos teams[30];

int buscar(char e[], int nequipos)
{
    int i;
    for(i=0;i<nequipos;i++)
    {
       if(strcmp(e,teams[i].nombre)==0)
       return i;
    }
}

actualizar (int e1, int e2, int m1, int m2)
{
           printf("%s %d %d %s\n",e1,m1,e2,m2);
           int i=buscar(e1,nequipos);
           int j=buscar(e2,nequipos);
           if(m1==m2)
           {
             teams[i].b+=1;
             teams[j].b+=1;
             teams[i].c+=1;
             teams[j].c+=1;
             teams[i].d+=1;
             teams[j].d+=1;
             teams[i].e+=1;
             teams[j].e+=1;
             teams[i].h+=m1;
             teams[j].h+=m2;
             teams[i].i+=m2;
             teams[j].i+=m1; 
           }
           if(m1>m2)
           {
            teams[i].b+=3;
            teams[i].c+=1;
            teams[j].c+=1;
            teams[i].d+=1;
            teams[j].f+=1;

            teams[i].h+=m1;
            teams[j].h+=m2;
            teams[i].i+=m2;
            teams[j].i+=m1; 
           }
           if(m1<m2)
           {
              teams[j].b+=3;
      
              teams[i].c+=1;
              teams[j].c+=1;
      
              teams[j].d+=1;
      
              teams[i].f+=1;

              teams[i].h+=m1;
              teams[j].h+=m2;
              teams[i].i+=m2;
              teams[j].i+=m1;
           }
}
int main(){
    int k, i, casos, nequipos, nencuentros;
    char toda[100], nombre[100],nombreequipo1[100],nombreequipo2[100];
    int marcador1, marcador2;
    char *token;    
    scanf("%d\n",&casos);
    
    for(i=0;i<casos;i++)
    {
       gets(nombre);
       puts(nombre); 
       scanf("%d\n",&nequipos);  
    }
    for(k=0;k<nequipos;k++)
    {
        gets(teams[k].nombre);
        scanf("%d\n",&nencuentros);          
    }
    for(k=0;k<nencuentros;k++)
    {
         gets(toda);
         puts(toda);
         token = strtok(toda, "#");
         strcpy(nombreequipo1,token);
         token = strtok(NULL, "@");
         marcador1=atoi(token);
         token = strtok(NULL, "#");
         marcador2=atoi(token);
         token = strtok(NULL, "");
         strcpy(nombreequipo2,token);
         actualizar(nombreequipo1,marcador1,marcador2,nombreequipo2,nequipos);
         
    }
    
    for(k=0;k<nequipos;k++)
    imprimirdatos(teams[k]);
    
    return 0;
    }
