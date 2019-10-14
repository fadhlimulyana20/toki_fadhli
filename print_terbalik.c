#include <stdio.h>

int main(){
    int N = 0;
    int arr[105];

    while (scanf("%d", &arr[N]) != EOF){
        N++;        
    }
    N--;
    while (N >= 0)
    {
        printf("%d\n", arr[N]);
        N--;
    }
    
}