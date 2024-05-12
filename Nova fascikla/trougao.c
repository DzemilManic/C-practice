#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, P, s;
    printf("unesite duzinu stranice a");
    scanf("%d", &a);
    printf("unesite duzinu stranice b");
    scanf("%d", &b);
    printf("unesite duzinu stranice c");
    scanf("%d", &c);
    if (a+b>c && a+c>b && b+c>a){
    s=(a+b+c)/2;
    P=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("stranice formiraju trougao povrsine %d", P);}
    else
    printf("stranice ne formiraju trougao");
    return 0;
}