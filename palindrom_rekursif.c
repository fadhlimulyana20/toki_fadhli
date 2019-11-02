#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome_rec(char str[], int s, int e){
    if (s == e)
        return true;
    
    if (str[s] != str[e])
        return false;

    if (s < e+1)
        return is_palindrome_rec(str, s+1, e-1);

    return true;
}

bool isPalindrome(char str[]){
    int n = strlen(str);

    if (n == 0)
        return true;
    
    return is_palindrome_rec(str, 0, n-1);
}

int main(){
    char str[1000005];
    scanf("%s", &str);
    if (isPalindrome(str))
    {
        printf("YA\n");
    }else{
        printf("BUKAN\n");
    }
    
}