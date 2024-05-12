#include <stdio.h>

int main (){
    int n, s, i;
    printf ("unesite n");
    scanf("%d", &n);
    s=0;
    i=1;
    for(i=1;i<=n;i++)
    s +=i;
    printf("suma prvih n brojeva iznosi %d",s);
    return 0;
    
}