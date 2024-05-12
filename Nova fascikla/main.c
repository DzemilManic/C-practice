#include <stdio.h>

int main(){
    int a, b;
    printf("unesite dva cela broja");
    scanf("%d %d", &a, &b);
    if (a>b)
    printf("rezultat je %d", a-b);
    else
    printf("rezultat je %d", b-a);
    return 0;
}

