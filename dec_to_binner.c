#include <stdio.h>


char toBinnary(int n){
    if (n==1){
        printf("1");
    }else if (n%2 == 1){
        toBinnary(n/2);
        printf("1");
    }else{
        toBinnary(n/2);
        printf("0");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    toBinnary(n);
    printf("\n");
}