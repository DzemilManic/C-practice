#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    double Xa, Xb, Xc, Ya, Yb, Yc;
    double a, b, c;
    double alfa, beta, gama;
    printf("unesite koordinate tacke A(x,y)\n");
    scanf("%lf %lf", &Xa,&Ya);
    printf("unesite koordinate tacke B(x,y)\n");
    scanf("%lf %lf", &Xb,&Yb);
    printf("unesite koordinate tacke C(x,y)\n");
    scanf("%lf %lf", &Xc,&Yc);
    a=sqrt(pow(Xb-Xc,2)+pow(Yb-Yc,2));
    b=sqrt(pow(Xc-Xa,2)+pow(Yc-Ya,2));
    c=sqrt(pow(Xa-Xb,2)+pow(Ya-Yb,2));
    printf("\nStranice:\n");
    printf("a=%lf\n", a);
    printf("b=%lf\n", b);
    printf("c=%lf\n", c);
    if (a+b>c && a+c>b && b+c>a)
    {
        alfa=acos((b*b+c*c-a*a)/(2*b*c));
        beta=acos((c*c+a*a-b*b)/(2*c*a));
        gama=acos((a*a+b*b-c*c)/(2*a*b));

        alfa *= 180/PI;
        beta *= 180/PI;
        gama *= 180/PI;

        printf("\nUglovi:\n");
        printf("alfa = %.2lf stepeni\n", alfa);
        printf("beta = %.2lf stepeni\n", beta);
        printf("gama = %.2lf stepeni\n", gama);
    }
    else 
    printf("\n ne moze se kreirati trougao");
    return 0;

    }