#include <stdio.h>
#include <stdlib.h>

int a,b;
int compo(int x, int k){
    if (k == 0)
    {
        return x;
    }else
    {
        return abs(a*(compo(x, k-1))+b);
    }    
}

int main(){
    int x,k;
    scanf("%d %d %d %d", &a, &b, &k, &x);
    printf("%d\n", compo(x,k));
}