#include <stdio.h>
int M, N;


int main(){
    scanf("%d %d", &M, &N);
    int matriks[105][105];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matriks[i][j]);
        }    
    }

    int matriksb[N][M];
    for (int k = 0; k < M; k++)
    {
        for (int l = 0; l < N; l++)
        {
            matriksb[l][N-1-k] = matriks[k][l];
        }    
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d", matriksb[i][j]);     
            if (j < M-1) {
                printf(" ");
            } else {
            printf("\n");
            }
        }  
    }
    
    

    
}