#include<stdio.h>

int main(){
    int Matrix1[100][100]; //Guardado de la primera matriz.
    int Matrix2[100][100]; //Guardado de la segunda matriz.
    int Matriz3[100][100]; //Guaradado de la matriz de multiplicacion.
    int Multi = 0, N, M, R, C, J, I, K; // N=Filas R=Filas && M=Columnas C=Columnas
    scanf("%d %d ",&N, &M);
        for (J = 0; J < N; J++)
            {
                for (I = 0; I < M; I++)
                {
                    scanf("%d", &Matrix1[J][I]);
                }
            }  
            /*for (J = 0; J < N; J++)
            {
                for (I = 0; I < M; I++)
                {
                    printf("%d ", Matrix1[J][I]);
                }
                printf("\n");
            }  */
            
            
    scanf("%d %d ",&R, &C);

            for (J = 0; J < R; J++)
            {
                for (I = 0; I < C; I++)
                {
                    scanf("%d", &Matrix2[J][I]);
                }
            }
            /*for (J = 0; J < R; J++)
            {
                for (I = 0; I < C; I++)
                {
                    printf("%d ", Matrix2[J][I]);
                }
                printf("\n");
            }*/

    if(M!=R)
    {
        printf("The matrices can not be multiplied");
        return 0;
    }
    else
    { 
        for (J = 0; J < N; J++)
        {
            for (I = 0; I < C; I++)
            {
                Matriz3[J][I] = 0;
                for (K = 0; K < R; K++)
                {
                    Matriz3[J][I] += Matrix1[J][K] * Matrix2[K][I];
                }
                 
                
            }
            
        }

        for (J = 0; J < N; J++)
        {
            for (I = 0; I < C; I++)
            {
                //Matriz3[J][I] = 0;
                //for (K = 0; K < R; K++)
                {
                    if(I != 0)
                    printf(" ");
                    printf("%d",Matriz3[J][I]);
                }
                
            }
            printf("\n");
        }
           
    }
        
}