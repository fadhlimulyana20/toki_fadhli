#include <stdio.h>

int factorial(int a){
    if (a == 1 || a == 0)
    {
        return 1;
    }else if (a%2 == 0)
    {
        return a/2 * factorial(a-1);
    }else
    {
        return a * factorial(a-1);
    }
    
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", factorial(a));
    return 0;
}