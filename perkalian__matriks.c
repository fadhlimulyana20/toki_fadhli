#include <stdio.h>

int main() {
    int N, M, P;
    scanf("%d %d %d", &N, &M, &P);
    unsigned int matriks_a[N][M], matriks_b[M][P], C[N][P];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matriks_a[i][j]);
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            scanf("%d", &matriks_b[i][j]);
        }    
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < P; k++)
            {  
                C[i][k] = 0;
            }   
        }    
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < P; k++)
            {  
                C[i][k] += matriks_a[i][j]*matriks_b[j][k];
            }   
        }    
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            printf("%d", C[i][j]);
            if (j<P-1)
            {
                printf(" ");
            }else
            {
                printf("\n");
            }
            
            
        }
        
    }
    
    
}