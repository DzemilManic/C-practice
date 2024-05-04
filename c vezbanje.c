#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define PI 3.14
#define STOP 0
#define NIJE_PRAZNO 'a'
#define PRAZNO ' '
#define HOR_TAB '\t'
#define U_RECI 1
#define VAN_RECI 0 
#define MAX 100
#define brojpoglavlja 10
#define imepoglavlja 100
#define BROJ 20


/*  
2.16
int main(int argc, char *argv[]) {
	int a, b, z, k, p, r, o;
	printf("unesite a");
	scanf("%d", &a);
	printf("unesite b");
	scanf("%d", &b);
	z=a+b;
	k=a/b;
	p=a*b;
	r=a-b;
	o=a%b;
	printf("zbir a i b je %d",z);
	printf("kolicnik a i b je %d",k);
	printf("proizvod a i b je %d",p);
	printf("razlika a i b je %d",r);
	printf("ostatak pri deljenju a i b je %d",o);
	return 0;
}
2.17
int main(){
	int a, b, o, p;
	printf("unesite a i b");
	scanf("%d %d", &a, &b);
	o=2*a+2*b;
	p=a*b;
	printf("obim pravouganika je %d", o);
	printf("povrsina pravouganika je %d", p);
	
	return 0;
}

2.18
int main(){
	float r, o, p;
	printf("unesite poluprecnik");
	scanf("%f", &r);
	o=2*r*PI;
	p=r*r*PI;
	printf("obim kruga je %f", o);
	printf("povrsina kruga je %f", p);
	
	return 0;
}
2.19
int main(){
	float r, h, p, v;
	printf("unesite r i h");
	scanf("%f %f", &r, &h);
	p=2*r*PI*(r+h);
	v=r*r*PI*h;
	printf("povrsinava valjka je %f\n", p);
	printf("zapremina valjka je %f", v);
	
	
	return 0;
}
2.22
int main(){
	float x, y;
	printf("unesite x");
	scanf("%f", &x);
	y=sqrt(x+x*x+x*x*x);
	printf("y iznosi %f", y);
	return 0;
}

2.23
int main(){
	float a, b, m;
	printf("unesite a i b");
	scanf("%f %f", &a, &b);
	m=sqrt(a*a+b*b);
	printf("modul iznosi %f", m);
	
	return 0;
}
2.24
int main(){
	float a, b, c, d, z1, z2, z, r, i;
	printf("unesite a i b");
	scanf("%f %f", &a, &b);
	printf("unesite c i d");
	scanf("%f %f", &c, &d);
	printf("prvi kompleksni broj je z1=%.2f+%.2fi", a, b);
	printf("drugi kompleksni broj je z2=%.2f+%.2fi", c, d);
	z=(a+c)+(b+d);
	r=(a+c)-(b+d);
	printf("zbir z1 i z2 iznosi %f", z);
	printf("razlika z1 i z2 iznosi %f", r);
	return 0;
}
2.26
int main(){
	double xA, xB, xC, yA, yB, yC, a, b, c, s, p;
	printf("unesite koordinate trougla\n");
	printf("teme A");
	scanf("%lf %lf", &xA, &yA);
	printf("teme B");
	scanf("%lf %lf", &xB, &yB);
	printf("teme C");
	scanf("%lf %lf", &xC, &yC);
	a=sqrt(pow(xB-xC,2)+pow(yB-yC,2));
	b=sqrt(pow(xC-xA,2)+pow(yC-yA,2));
	c=sqrt(pow(xA-xB,2)+pow(yA-yB,2));
	s=(a+b+c)/2;
	p=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Povrsina trougla iznosi %lf", p);
	return 0;
}
2.27
int main(){
	int xyz, x, y, z, s;
	printf("unesite trocifren broj");
	scanf("%d", &xyz);
	x=xyz/100;
	y=(xyz/10)%10;
	z=xyz%10;
	s=x+y+z;
	printf("prva cifra broja %d je %d\n", xyz, x);
	printf("druga cifra broja %d je %d\n", xyz, y);
	printf("treca cifra broja %d je %d\n", xyz, z);
	printf("suma cifara broja %d je %d", xyz, s);
	return 0;
}
2.28
int main(){
	int c, p, s, j;
	printf("unesite cijenu proizvoda");
	scanf("%d",&c);
	p=c/500;
	s=(c%500)/100;
	j=c%100;
	printf("potrebno je %d novcanica od 500\n", p);
	printf("potrebno je %d novcanica od 100\n", s);
	printf("potrebno je %d novcanica od 1", j);
	
	return 0;
}
2.29
int main(){
	long sek, d, h, m, s;
	printf("unesite interval u sekundama");
	scanf("%ld", &sek);
	s=sek%60;
	m=sek/60;
	h=m/60;
	d=h/24;
	printf("%ld %ld %ld %ld", d, h,m,s);
}
3.2
int main(){
	int x;
	printf("unesite broj\n");
	scanf("%d", &x);
	if(x<0)
	printf("uneti broj je negativan");
	else if(x>0)
	printf("uneti broj je pozitivan");
	else
	printf("uneti broj je nula");
	return 0;
}
3.3
int main(){
	int x, y;
	printf("unesite x\n");
	scanf("%d", &x);
	printf("unesite y\n");
	scanf("%d", &y);
	if(x>y)
	printf("broj %d je veci od broja %d", x, y);
	else if(x<y)
	printf("broj %d je manji od broja %d", x, y);
	else
	printf("brojevi su jednaki");
	return 0;
}
3.4
int main(){
	int x, y, z, max;
	printf("unesite x");
	scanf("%d", &x);
	printf("unesite y");
	scanf("%d", &y);
	printf("unesite z");
	scanf("%d", &z);
	max=x;
	if(y>max)
	max=y;
	else(z>max);
	max=z;
	printf("najveci je broj %d", max);
	return 0;
	
}
3.7
int main(){
	int a;
	printf("unesite broj poena");
	scanf("%d", &a);
	if (a>90)
		printf("ocena 10");
	else if(a>80)
		printf("ocena 9");
	else if(a>70)
		printf("ocena 8");
	else if(a>60)
		printf("ocena 7");
	else if(a>50)
		printf("ocena 6");
	else if(a>0)
		printf("student nije polozio");
	else
		printf("greska");
	return 0;
}
3.8
int main(){
	int a, b, x;
	printf("unesite donju i gornju granicu opsega");
	scanf("%d %d", &a, &b);
	printf("unesite broj x");
	scanf("%d", &x);
	if((a<x*x) && (x*x<b))
	printf("kvadrat broja %d je u opsegu brojeva %d i %d", x, a, b);
	else
	printf("kvadrat broja %d nije u opsegu brojeva %d i %d", x, a, b);
	return 0;
}
3.9
int main(){
	int x, y;
	printf("unesite x i y");
	scanf("%d %d", &x, &y);
	if(x>y)
	printf("broj %d je veci od broja %d i razlika izmedju njih je %d", x, y, x-y);
	else if(y>x)
	printf("broj %d je veci od broja %d i razlika izmedju njih je %d", y, x, y-x);
	else
	printf("brojevi %d i %d su jednaki", x, y);
	return 0;
}
3.10
int main(){
	int x, y;
	printf("unesite broj x");
	scanf("%d", &x);
	if(x<0)
	y=-1;
	else if(x>0)
	y=1;
	else if(x=0)
	y=0;
	printf("signum funkcije %d je %d", x, y);
	return 0;
}
3.11
int main(){
	int x, y;
	printf("unesite x");
	scanf("%d", &x);
	if((-2<=x) && (x<=2))
	y=2*x;
	else if((5<=x) && (x<7))
	y=3*x-1;
	else
	y=1/x;
	printf("y iznosi %d", y);
	return 0;
}
3.13
int main(){
	int a, b, c, s, p;
	printf("unesite duzinu stranica a, b i c");
	scanf("%d %d %d", &a, &b, &c);
	if(a+b>c && a+c>b && b+c>a){
		s=(a+b+c)/2;
		p=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("povrsina trougla je %d", p);}
	else 
	printf("stranice ne mogu formirati trouglao");
	
	return 0;
}
3.14
int main(){
	double ax, ay, bx, by, cx, cy, a, b, c, s, p;
	printf("unesite koordinate temena A");
	scanf("%lf %lf", &ax, &ay);
	printf("unesite koordinate temena B");
	scanf("%lf %lf", &bx, &by);
	printf("unesite koordinate temena C");
	scanf("%lf %lf", &cx, &cy);
	a=sqrt(pow(bx-cx,2)+pow(by-cy,2));
	b=sqrt(pow(cx-ax,2)+pow(cy-ay,2));
	c=sqrt(pow(ax-bx,2)+pow(ay-by,2));
	printf("a=%f\n", a);
	printf("b=%f\n", b);
	printf("c=%f\n", c);
	if(a+b>c && a+c>b && b+c>a){
		s=(a+b+c)/2;
		p=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("povrsina trougla je %f", p);
	}
	else
	printf("ne moze se formirati trougao");
	return 0;
}

int main(){
	float a1, b1, a2, b2, x, y;
	printf("unesite koordinate a1 i b1");
	scanf("%f %f", &a1, &b1);
	printf("unesite koordinate a2 i b2");
	scanf("%f %f", &a2, &b2);
	printf("prave:\n y=%f*x+%f\n y=%f*x+%f\n", a1, b1, a2, b2);
	if(a1==a2){
		if(b1==b2)
			printf("prave su podudarne");
		else
			printf("prave su paralelne");
	}
	else{
		x=(b2-b1)/(a1-a2);
		y=a1*x+b1;
		printf("tacke preseka su:\n x=%f\n y=%f", x, y);
	}
	return 0;
}
4.2
int main(){
	int i;
	for(i=1;i<=10;i++)
	printf("%d\n", i);
	return 0;
}

int main(){
	int i;
	for(i=1;i<=10;i=i+2)
	printf("%d\n", i);
	return 0;
}

int main(){
	int i;
	for(i=10; i>=1; i--)
	printf("%d\n", i);
	return 0;
}
4.4
int main(){
	int i, n, s=0;
	printf("unesite n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		s=s+i;
	printf("suma prvih %d brojeva je %d", n, s);
	return 0;
}
4.5
int main(){
	int n, i;
	float a, s=0, ars;
	printf("unesite n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%f", &a);
		s=s+a;
		ars=s/n;
	}
	printf("suma brojeva je %f\n", s);
	printf("arit. sredina brojeva je %f", ars);
	return 0;
}
4.6
int main(){
	int n, i, fakt=1;
	printf("unesite n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		fakt=fakt*i;
	}
	printf("faktorijel broja %d je %d", n, fakt);
	return 0;
}
4.7
int main(){
	int n, i, fakt=1, s=0;
	printf("unesite n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		fakt*=i;
		s+=fakt;
	}
	printf("suma faktorijela broja %d je %d", n, s);
	return 0;
}
4.8
int main(){
	int i;
	float m, n, s1=1, s2=1, znak=1;
	printf("unesite m\n");
	scanf("%d", &m);
	printf("unesite n\n");
	scanf("%d", &n);
	for(i=1;i<=m;i++){
		s1=s1*(n+i*m);
		}
	for(i=1;i<=m;i++){
		s2=s2+(n+i*m);
		znak=-znak;
	}	
	printf("s1=%f\n", s1);
	printf("s2=%f", s2);
	return 0;
}

4.9a
int main(){
	float i, n, fakt=1, s=0, q=0;
	printf("unesite n\n");
	scanf("%f", &n);
	for(i=1;i<=n;i++){
		fakt*=i;
		q=q+1./(1+i);
		s=s+fakt/q;
	}
	printf("suma je %f", s);
	return 0;
}
4.9 b
int main(){
	float i, n, fakt=1, s=0, q=0, znak=1;
	printf("unesite n\n");
	scanf("%f", &n);
	for(i=1;i<=n;i++){
		fakt*=i;
		q=q+1.*i;
		s=s+znak*q/fakt;
		znak=-znak;
	}
	printf("suma je %f", s);
	return 0;
}
4.9 c
int main(){
	float i, s=1, n, p=0, q=0;
	printf("unesite n");
	scanf("%f", &n);
	for(i=1;i<=n;i++){
		p=p+cos(i);
		q=q+sin(i);
		s=s*p/(float)q;
	}
	printf("suma je %f", s);
	return 0;
}
4.10
int main(){
	int n, i;
	float x, p=0, s=0;
	printf("unesite n\n");
	scanf("%d", &n);								
	printf("unesite x\n");							????????????????????????????????
	scanf("%f", &x);
	for(i=1;i<=n;i++){
		p=p+pow(sin(x),i);
		s=s+p;
	}
	printf("suma je %f", s);
	return 0;
}
4.11
int main(){
	int i, n;
	float s=1, p=0;
	printf("unesite n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		p=sqrt(p+2);
		s=s/p;
	}
	printf("suma je %f", s);
	return 0;
}
4.12
int main(){
	int i, n, max, k;
	printf("unesite n\n");
	scanf("%d", &n);
	printf("unesite broj");
		scanf("%d", &k);
	max=k;
	for(i=1;i<=n-1;i++){
		printf("unesite broj");
		scanf("%d", &k);
		if(k>max){
			max=k;
		}
	}
	printf("najveci je broj %d", max);
	return 0;
}
4.13
int main(){
	int i, s=0, n;
	for(i=1;i<=100;i++){
		if(i%6==0){
		s=s+i;
		printf("%d\n", i);}
	}
	printf("suma je %d", s);
	return 0;
}
4.14
int main(){
	int a, b, c;
	for(a=1;a<10;a++)
		for(b=3;b<10;b++)
			for(c=4;c<10;c++)
			if(b==a+2 && c==b+1)
				printf("to su brojevi %d%d%d\n", a, b, c);
	return 0;
}
4.15
int main(){
	int a, b, c, broj;
	for(a=1;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++){
			broj=a*100+b*10+c;
			if(broj==pow(a,3)+pow(b,3)+pow(c,3))
			printf("amstrongovi trocifreni brojevi su:\n%d\n",broj);}
	return 0;
}
4.16
int main(){
	int a, b, c, broj;
	for(a=1;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++){
				broj=a*100+b*10+c;
				if(broj==pow(a*10+b,2)-pow(c,2))
				printf("to su brojevi %d\n", broj);
			}
	return 0;
}
4.17
int main(){
	int a, b, c, broj, br;
	for(a=1;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++){
			broj=a*100+b*10+c;
			if(broj%a*10+c==0)
				printf("to su brojeci %d\n", broj);
			}
			return 0;
}
4.18
int main(){
	int a, b, c, s=0, broj, br=0;
	for(a=1;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++){
				broj=a*100+b*10+c;
				if(a+b+c==5){
					s=s+broj;
					br++;
				}
			}
	printf("suma brojeva je %d\n", s);
	printf("takvih brojeva ima %d", br);
	return 0;
}
4.19
int main(){
	int n, i;
	printf("unesite n\n");
	scanf("%d", &n);
	for(i=1;1<=n;i++){
		if(n%i==0)
		printf("delioc broja n je broj %d\n", i);
	}
	return 0;
}
4.20
int main(){
	int n, i, s=0;
	printf("unesite n\n");
	scanf("%d", &n);
	for(i=1;i<n;i++){
		if(n%i==0)
			s=s+i;
	}
	if(s==n)
	printf("broj %d je savrsen", n);
	else
	printf("broj nije savrsen");
	return 0;
}
4.21
int main(){
	int i, n, m, pr=0, jed=0, br=0;
	printf("unesite n\n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		printf("unesite ocenu\n");
		scanf("%d", &m);
		pr=pr+m;
		if(m==1){
			br++;
		}
	}
	printf("prosecna ocena je %d", pr/n);
	printf("broj jedinica je %d", br);
	return 0;
}
4.22
int main(){
	int n, i, sat, min, sek;
	printf("unesite n\n");
	scanf("%d", &n);
	for(sat=0;sat<24;sat++)
		for(min=0;min<60;min++)
			for(sek=0;sek<60;sek++){
				if((sat+min+sek)==n)
				printf("%d sat %d min %d sek\n", sat, min, sek);
			}
	return 0;
}
4.23
int main(){
	float x, xmin, xmax, y, dx;
	printf("unesite xmin\n");
	scanf("%f", &xmin);
	printf("unesite xmax\n");
	scanf("%f", &xmax);
	printf("unesite dx");
	scanf("%f", &dx);
	printf("\n \t x \t y\n");
	for(x=xmin; x<=xmax; x+=dx){
		y=(2*x+1)/(pow(x,2)-1);
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}
4.24
int main(){
	float i, n, dx, xmin, xmax, x, y=1, p;
	printf("unesite n\n");
	scanf("%f", &n);
	printf("unesite xmin\n");
	scanf("%f", &xmin);
	printf("unesite xmax\n");
	scanf("%f", &xmax);									???????????????????????????????????????
	printf("unesite dx\n");
	scanf("%f", &dx);
	printf("\t x \t y \n");
	for(x=xmin;x<=xmax;x+=dx){
		for(i=1;i<=n;i++){
			p*=x;
			y*=(1+p);
		}
		printf("%f %f\n", x, y);
		p=1;
		y=1;
	}
	return 0;
}
4.25
int main(){
	double dx=0, UgSt, UgRa;
	printf("unesite dx\n");
	scanf("%lf", &dx);
	printf("\tx \t sin(x)\n");
	for(UgSt=0;UgSt<=90;UgSt+=dx);{
		UgRa=(PI*UgSt)/180.0;
		printf("%f \t%f\n",UgSt, sin(UgRa));
	}
	return 0;
}
5.1
int main(){
	int i=1;
	while(i<=5){
		printf("najjaci sam\n");
		i++;
	}
	return 0;
}
5.2a
int main(){
	int i=1;
	while(i<=10){
		printf("%d\n", i);
		i++;
	}
	return 0;
}
5.2b
int main(){
	int i=2;
	while(i<=10){
		printf("%d\n", i);
		i+=2;
	}
	return 0;
}
5.2c
int main(){
	int i=10;
	while(i>=1){
		printf("%d\n", i);
		i--;
	}
	return 0;
}
5.3
int main(){
	int n, i, s=0;
	printf("unesite n\n");
	scanf("%d", &n);
	while(i<=n){
		s+=i;
		i++;
	}
	printf("suma je %d", s);
	return 0;
}
5.4
int main(){
	int i=1, n, s=0;
	printf("unesite n\n");
	scanf("%d", &n);
	while(i<=n){
		s+=i;
		i=i+3;
	}
	printf("suma je %d", s);
	return 0;
}
5.5
int main(){
	float i=1.0, n, s=0;
	printf("unesite n\n");
	scanf("%f", &n);									ne radi????????????????????????????????
	while(i<=n){
		s+=1./pow(2*i+1,2);
		i++;
	}
	printf("\nsuma je %f", s);
	return 0;
}
5.6
int main(){
	int i, n, m, s1=0, s2=0, s=0;
	printf("unesite n\n");
	scanf("%d", &n);
	printf("unesite m\n");
	scanf("%d", &m);
	if(n>m){
		printf("ponovite unos");
	}
	while(n<=m){
		if(n%2==0){
			s1+=pow(n,2);
			n++;
		}
		else{
			s2+=pow(n,3);
			n++;
		}
	}
	printf("suma kvadrata parnih brojeva i kubova neparnih je %d", s1+s2);
	return 0;
}
5.6
int main(){
	int i, n, m, s=0;
	printf("unesite n\n");
	scanf("%d", &n);
	printf("unesite m\n");
	scanf("%d", &m);
	i=n;
	while(i<=m){
		if(i%2==0)
		s+=pow(i,2);
		else
		s+=pow(i,3);
		i++;
	}
	printf("suma iznosi %d", s);
	return 0;
}
5.7a
int main(){
	int i=3, n, fp=1, fpp=1, fn;
	printf("unesite n\n");
	scanf("%d", &n);
	printf("f1=1\nf2=1\n");
	while(i<=n){
		fn=fp+fpp;
		fpp=fp;
		fp=fn;
		i++;
		printf("f%d=%d\n1", i, fn);
	}
	
	return 0;
}
5.7b
int main(){
	int i=3, n, fp=1, fpp=1, fn, s=2;
	printf("unesite n\n");
	scanf("%d", &n);
	while(i<=n){
		fn=fp+fpp;
		s+=fn;
		fpp=fp;
		fp=fn;
		i++;
	}
	printf("suma fib. niza je %d", s);
	return 0;
}
5.8
int main(){
	int n, a, i=1, st=1;
	printf("unesite a\n");
	scanf("%d", &a);
	printf("unesite stepen n");
	scanf("%d", &n);
	while(i<=n){
		st*=a;
		i++;
	}
	printf("%d stepen broja %d je %d", n, a, st);
	return 0;
}
5.9
int main(){
	float x, n=0, s=0;
	printf("unesite brojeve	\n");
	scanf("%f", &x);
	while(x!=STOP){
		s+=x;
		n++;
		scanf("%f", &x);
	}
	printf("srednja vrednost brojeva je %f", s/n);
}
5.10
int main(){
	float x, s=0, n=0;
	printf("unesite x");
	scanf("%f", &x);
	while(x!=STOP){
		scanf("%f", &x);
		if(2<=x && x<=6){
		s+=x;
		n++;
		}
		if(x==STOP){
			printf("a. sredina iznosi %f", s/n);
		}

	}

	return 0;
}
5.11
int main(){
	int m, n, i, b, brojilac=1, imenilac=1;
	while(m<1 || n<1 || m<n){
		printf("unesite m i n (m>n)\n");
		scanf("%d %d", &m, &n);
	}
	for(i=m;i>m-n;i--){
	brojilac*=i;}
	for(i=1;i<=n;i++){
	imenilac*=i;}
	b=brojilac/imenilac;
	printf("b=%d", b);
	return 0;
}
5.12
int main(){
	float k=0, s=0;
	int i, m, n, pom;
	while(m<1 || n<1){
		printf("unesite m i n\n");
		scanf("%d %d", &m, &n);
	}
	if(n<m){
		pom=n;
		n=m;
		m=pom;
	}
	
	for(i=m;i<=n;i=i+2){
		if(i%2!=0){
			k=sqrt(i);
			s+=k;
		}
	}
	printf("suma iznosi %f", s);
	return 0;
}
5.13
int main(){
	int n, i=1, znak=1;
	float s=0;
	printf("unesite n\n");
	scanf("%d", &n);
	while(i<=n){
		s+=(float)znak/i;
		i++;
		znak=-znak;
	}
	printf("suma iznosi %f", s);
	return 0;
}
5.14
int main(){
	int n=1;
	float s=0, k;
	k=1/(n*n);
	while(k>1e-4){
		s+=k;										ne radi???????????????????????????
		k++;
		k=1.0/(n*n);
	}
	printf("suma iznosi %.2f", s);
	return 0;
}
5.15
int main(){
	int i, n=1;
	double x, eps, suma=1.0, k;
	printf("unesite x\n");
	scanf("%lf", &x);
	printf("unesite eps\n");
	scanf("%lf", &eps);
	k=x;
	while(abs(k)<=eps){							ne radi???????????????????????????????
		suma+=k;
		k=x;
		n++;	
		for(i=2;i<=n;i++){
			k=-k*(-x/i);
		}
	}
	printf("suma iznosi %lf\n", suma);
	printf("br. elemenata je %d", n);
	return 0;
}
5.17
int main(){
	int a, b;
	printf("unesite a\n");
	scanf("%d", &a);
	printf("unesite b\n");
	scanf("%d", &b);
	while(a!=b){
		if(a>b)
			a-=b;
		else 
			b-=a;
	}
	printf("nzd=%d", a);
	return 0;
}
5.18

int main(){
	int x, suma=0, k;
	printf("unesite x\n");
	scanf("%d", &x);
	k=x;
	while(k>0){											ne radi kako dobiti sumu cifara???????????????????
		suma+=k%10;						
		k/=10;							
	}
	if(k%suma==0)
		printf("broj jeste nivenov");
	else
	printf("broj nije nivenov");
	return 0;
}
5.19
int main(){
	int x, obr=0;
	printf("unesite x");
	scanf("%d",&x);
	while(x>0){									// kod safeta za obajsnjenje kako
		obr=obr*10+x%10;
		x/=10;
	}
	printf("obrnute cifre broja %d su %d", x, obr);
	return 0;
}
5.20
int main(){
	int n, m, k;
	printf("unesite n\n");
	scanf("%d", &n);
	m=n/2;								//radi i bez ovoga
	for(k=2;k<=n;k++){					
		while(n%k==0){
			printf("\n%d",k);
			n/=k;
		}
	}
	return 0;
}
5.21
int main(){
	int a, b, c, ab;
	printf("Pitagorini brojevi");
	for(a=1;a<=20;a++){
		for(b=1;b<=20;b++){
			ab=a*a+b*b;								
			c=1;										//zasto c moramo ovde definisati a ne na pocetku
			while(ab>=c*c){
				if(c*c==ab)
				printf("\n%d %d %d\n", a, b, c);
				c++;
			}
		}
	}
	return 0;
}
6.1
int main(){
	int i=1;
	do{
		printf("najjaci sam\n");
		i++;									//ne zaboravljati!!!!!!!!!!!!!!!!!!!!!!
	}
	while(i<=5);
	return 0;
}
6.2a
int main(){
	int i=1;
	do{
		printf("%d\n", i);
		i++;
 }
	while(i<=10);
	return 0;
}
6.2b
int main(){
	int i=2;
	do{
		printf("%d\n", i);
		i+=2;
 }
	while(i<=10);
	return 0;
}
6.2c
int main(){
	int i=10;
	do{
		printf("%d\n",i);
		i--;
	}
	while(i>=1);
	return 0;
}
6.3
int main(){
	int n;
	do{
		printf("unesite n\n");
		scanf("%d", &n);
	}
	while(n*n>100);
	printf("kvadrat broja %d pripada prvoj stotini", n);
	return 0;
}
6.4
int main(){
	int n, granica;
	printf("unesite granicu");
	scanf("%d", &granica);
	n=1;
	do{
		printf("%d\n", n);
		n*=2;
	}
	while(n<=granica);
}
6.5
int main(){
	int i=1;
	float znak=-1.0, suma=1.0, eps, clan=1.0;
	printf("unesite eps\n");
	scanf("%f", &eps);
	do{
		clan=(float)znak/(2*i+1);
		suma+=clan;
		znak=-znak;
		i++;
	}
	while(fabs(clan)>eps);
	printf("pi=%f", 4*suma);
	return 0;
}
6.6
int main(){
	float a, s=0, i=0;
	printf("unesite a\n");
	scanf("%f", &a);
	do{
		i++;
		s+=1/i;
	}
	while(s<a);
	printf("s=%f", s);
	return 0;
}
6.7
int main(){
	float x, eps, y, z;
	printf("unesite x\n");
	scanf("%f", &x);
	printf("unesite eps\n");
	scanf("%f", &eps);
	y=x+1;
	do{
		z=y;
		y=0.5*(y+x/y);
	}
	while(fabs(z-y)>eps);
	printf("kvadratni koren broja %f je %f", x, y);
	return 0;
}
6.8
int main(){
	int x, a, b, brojac;
	do{
		printf("unesite opseg (od 1 do 100)\n");
		scanf("%d %d", &a, &b);
	}
	while(a<1 || a>b || b<=a || b>100);
	for(x=a;x<=b;x++){
		if(x%4==0){
		printf(" %d ", x);
		brojac++;}
		if(brojac%10==0)
		printf("\n");
	}
	return 0;
}
6.9
int main(){
	int i=100, suma=0, brojac=0;
	do{
		if(i%64==0){
			suma+=i;
			brojac++;
		}
		i++;
	}
	while(i<1000);
	printf("suma trocifrenih brojeva deljivih sa 64 je %d\n", suma);
	printf("takvih brojeva je %d", brojac);
	return 0;
}
6.10
int main(){
	int m, n, k, brojac;
	do{
		printf("unesite m\n");
		scanf("%d", &m);
	}
	while(m<=0 || m>=10);
	printf("\nunesite niz brojeva (0 za kraj)\n");
	scanf("%d", &k);
	do{
		n=log10(k);
		n=k/pow(10,n);										//kako odrediti koja je prva cifra?????????????
		if(n==m)											
		brojac++;
		scanf("%d\n", &k);
	}
	while(k!=0);
	printf("%d brojeva ima prvu cifru %d", brojac, m);
	return 0;
}
7.1a
int main(){
	int i;
	for(i=1;i<=10;i++){
		if(i==6) break;
		printf("i=%d\n", i);
	}
	return 0;
}
7.2
int main(){
	int i;
	while(1){
		printf("unesite broj ");
		scanf("%d", &i);
		if(i<=0) break;
		printf("\nkvadrat broja %d je %d\n", i, i*i);
	}
	return 0;
}
7.3
int main(){
	int x, i;
	for(i=0;i<=100;i++){
		scanf("%d", &x);
		if(x==STOP) break;
		printf("\n%d", x);
	}
	return 0;
}
7.4
int main(){
	int i;
	for(i=1;i<500;i++){
		if(i%3==0 && i%4==0 && i%5==0 && i%7==0)
		printf("%d", i);
		break;
	}
	return 0;
}
7.5
int main(){
	int n, i;
	float s=0;
	while(1){
		printf("unesite n\n");
		scanf("%d", &n);
		if(n<=0) break;
		s=0;
		for(i=1;i<=n;i++)
		s+=1.0/(i*i);
		printf("suma iznosi %f\n", s);
	}
	return 0;
}
7.6
int main(){
	while(1){
	int i, n, a;
	float s, d;
	printf("unesite broj elemenata\n");
	scanf("%d", &n)	;
	if(n<=0) break;
	printf("elementi:");
	s=0;
	d=0;
	for(i=1;i<=n;i++){
		scanf("%d", &a);
		s+=a;
		d+=a*a;
	}
	s/=n;
	d=sqrt(d/n-s*s);
	printf("suma iznosi %f", s);
	printf("d iznosi %f", d);
	return 0;
}
}
7.7
int main(){
	int i, j, m;
	float x;
	for(i=1;i<=100;i++){
		x=i;
		m=sqrt(x);
		for(j=2;j<=m;j++)
		if(i%j==0) break;
		if(i==2 || i%j!=0)
		printf("%2d\n", i);
	}
	return 0;
}
7.8
int main(){
	int i;
	for(i=1;i<=10;i++){
		if(i==5) continue;
		printf("%d\n", i);
	}
	return 0;
}
7.9
int main(){
	int i;
	for(i=1;i<=10;i++){
		if(i%2!=0) continue;
		printf("%d\n", i);
	}
	return 0;
}
7.11
int main(){
	int i;
	for(i=1;i<=20;i++){
		if(i%3==0) continue;
		printf("%d\n", i);
	}
	return 0;
}
7.12
int main(){
	int i, n;
	float s;
	while(1){
		printf("unesite n\n");
		scanf("%d", &n);
		if(n<0) continue;
		if(n==0) break;
		s=0;
		for(i=1;i<=n;i++)
		s+=1./(i*i);
		printf("suma je %f \n", s);
	}
	
	return 0;
}
7.13
int main(){
	int opcija;
	start: printf("biraj opciju od od 1 do 3");
	scanf("%d", &opcija);
	if(opcija<1 || opcija>3)
	goto start;
	else if(opcija==1)
	goto Num1;
	else if(opcija==2)
 	goto Num2;
 	else if(opcija==3)
 	goto Num3;
 	Num1: printf("izabrali ste opciju A");
 	goto End;
 	Num2: printf(" Izabrana je opcija B.\n");
 	goto End;
 	Num3: printf(" Izabrana je opcija C.\n");
 	goto End;
 	End:;
	return 0;
}
7.14
int main(){
	int i, n;
 	start: printf(" Unesite ceo broj od 0 do 10: ");
 	scanf("%d", &n);
 	if(n<0 || n>10)
 	goto start;
 	else if (n==0)
	goto Loc0;
 	else
 	goto Loc1;
 	Loc0: printf("\n Izabran je broj 0 za KRAJ.\n\n");
 	goto End;
 	Loc1: for(i=0;i<n;i++)
 	printf("X");
 	printf("\n\n");
 	goto start;
 	End: ; 
	return 0;
}
7.15
int main(){
	int i=1;
	poc: printf("%d", i);
	i++;
	if(i<=10)
	goto poc;
	return 0;
}
7.16
int main(){
	int n, a, p=1;
 	printf("unesite n\n");
 	scanf("%d",&n);
 	poc: a=n%10;
 	p=p*a;
 	n=n/10;
 	if(n!=0)
 	goto poc;
 	printf("proizvod cifara je %d", p);
	return 0;
}
7.17
int main(){
	int n, m=2;
	printf("unesite n\n");
	scanf("%d", &n);
	poc: if(n!=1){
		if(n%m==0){
			printf(" %d", m);
			n=n/m;
			goto poc;
		}
		else{
			m++;
			goto poc;
		}
	}
	return 0;
}
7.18
int main(){
	float n, poz=0, neg=0, brojac=0, s=0, as;
	poc: printf("unesite n\n");
	scanf("%f", &n);
	if(n!=0){
		brojac++;
		s+=n;
		if(n<0){
			neg++;
		}
		else
		poz++;
		goto poc;
	}
	printf("ukupno brojeva %f\n", brojac);
	printf("pozitivnih brojeva %f\n", poz);
	printf("negativnih brojeva %f\n", neg);
	printf("arit. sredina je %f\n", s/brojac);
	return 0;
}
7.19
int main(){
	int x;
	printf("unesite x(od 1 do 7)\n");
	scanf("%d", &x);
	switch(x){
	case 1: printf("ponedeljak");
	break;
	case 2: printf("utorak");
	break;
	case 3: printf("srijeda");
	break;
	case 4: printf("cetvrtak");
	break;
	case 5: printf("petak");
	break;
	case 6: printf("subota");
	break;
	case 7: printf("nedelja");
	break;
	default: printf("greska");
	}
	return 0;
}
7.20
int main(){
	char x;
	printf("unesite slovo\n");
	scanf("%c", &x);
	switch(x){
		case 'a':
		case 'e':								// ne zaboraviti da treba : a ne ; posle case
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("%c je samoglasnik", x);
		break;
		default: printf("%c je suglasnik", x);
	}
	return 0;
}
7.22
int main(){
	char operacija;
	float x, y;
	printf("unesite operaciju\n");
	scanf("%c", &operacija);
	printf("unesite prvi operand\n");
	scanf("%f", &x);
	printf("unesite drugi operand\n");
	scanf("%f", &y);
	switch(operacija){
	case '+': printf("rezultat je %f", x+y); break;
	case '-': printf("rezultat je %f", x-y); break;
	case '*': printf("rezultat je %f", x*y); break;
	case '/': printf("rezultat je %f", x/y); break;
	default: printf("greska");
	}
	return 0;
}
7.23
int main(){
	int i;
	float a, b, o, p, d;
	printf("unesite duzine stranica a i b\n");
	scanf("%f %f", &a, &b);
	printf("sta zelite da izracunate\n");
	printf("1-obim\n2-povrsinu\n3-dijagonalu\n");
	scanf("%d",&i);
	switch(i){
		case 1: printf("obim pravougaonika je %.2f", 2*a+2*b); break;
		case 2: printf("povrsina pravougaonika je %.2f", a*b); break;
		case 3: printf("dijagonala pravougaonika je %.2f", sqrt(a*a+b*b)); break;
		default: printf("greska");
	}
	return 0;
}
7.24
int main(){
	int mesec, godina, brdana;
	printf("unesite godinu\n");
	scanf("%d", &godina);
	printf("unesite redni broj meseca\n");
	scanf("%d", &mesec);
	switch(mesec){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: brdana=31; break;
		case 4: case 6: case 9: case 11: brdana=30; break;
		case 2: brdana=28+(godina%4==0 && godina%100!=0 || godina%400==0); break;
		default: brdana=0;
	}
	if(brdana!=0)
	printf("mesec ima %d dana", brdana);
	return 0;
}
7.25
int main(){
	int dan, mesec, godina, d;
	while(1){
	printf("unesite dan, mesec i godinu\n");
	scanf("%d %d %d", &dan, &mesec, &godina);
	if(dan==0 || mesec==0 || godina==0) break;
	switch(mesec){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			d=31;
			break;
		case 4: case 6: case 9: case 11: 
			d=30;
			break;
		case 2:
			d=28+(godina%4==0 && godina%100!=0 || godina%400==0); 
			break;
	}
	if(dan<d) dan++;
	else{
		dan=1;
		if(mesec<12) mesec++;
		else 
		mesec=1;
		godina++;
	}
	printf("sledeci datum je %d %d %d\n\n", dan, mesec, godina);
}
	return 0;
}
7.26
int main(){
	int i, n, a;
	float x=0, y=0, d;
	printf("unesite n\n");
	scanf("%d", &n);
	printf("unesite d\n");
	scanf("%f", &d);
	printf("unesite kod pravca\n");
	printf("1-sever\n2-istok\n3-jug\n4-zapad\n");
	for(i=1;i<=n;i++){
		printf("kod=\n");
		scanf("%d", &a);
		switch(a){
			case 1:
				y=y+d;
				break;
			case 2:
				x=x+d;
				break;
			case 3:
				y=y-d;
				break;
			case 4:
				x=x-d;
				break;
		}
	}
	printf("polozaj je x=%.2f y=%.2f", x, y);
	return 0;
}
8.2a
int main(){
	int c;
	c=getchar();
	putchar(c);
	return 0;
}
8.2b
int main(){
	int c;
	while (c!=EOF){
		c=getchar();
		putchar(c);
	}
	return 0;
}
8.3a
int main(){
	int c, br=0;
	while(c!='.'){
		c=getchar();
		putchar(c);
		br++;
	}
	printf("\nbroj karaktera je %d", br);
	return 0;
}
8.3b
int main(){
	int c, br;
	while((c=getchar())!=EOF)
	br++;
	printf("\nbroj karaktera je %d", br);
	return 0;
}
8.4
int main(){
	int c, br=0;
	while((c=getchar())!=EOF)
	if(c>='0' && c<='9')
	br++;
	printf("\nukupno cifara u tekstu %d", br);
	return 0;
}
8.5
int main(){
	int c, pz=0, sl=0, dc=0, uk=0;
	while((c=getchar())!=EOF){
		if((c==' ') || (c=='\t') || (c=='\n') ) pz++;
		if(c>='0' && c<='9') dc++;
		if((c>='a' && c<='z') || (c>='A' && c<='Z')) sl++;
		uk++;
	}
	printf("Praznih znakova ukupno %d\n", pz);
	printf("cifara ukupno %d\n", dc);
	printf("slova ukupno %d\n", sl);
	printf("ukupno znakova %d\n", uk);
	return 0;
}
8.6
int main(){
	int c, sugl, sam;
	while((c=getchar())!=EOF){
		if((c>='a' && c<='z') || (c>='A' && c<='Z'))
			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' 
				|| c=='A' || c=='E' || c=='I' || c=='O' || c=='U') sam++;
			else 
			sugl++;
	}
	printf("samoglasnika ukupno %d\n", sam);
	printf("suglasnika ukupno %d", sugl);
	return 0;
}
8.7
int main(){
	int c, m, v, br;
	while((c=getchar())!=EOF){
		if(c>='A' && c<='Z') v++;
		if(c>='a' && c<='z') m++;
		if(c>='0' && c<='9') br++;
	}
	printf("malih slova ukupno %d\n", m);
	printf("velikih slova ukupno %d\n", v);
	printf("brojeva ukupno %d", br);
		return 0;
}
8.8
int main(){
	int c, a=0, u=0;
	float p;
	while((c=getchar())!=EOF){
		u++;
		if(c=='A') a++;
	}
	p=(float)a/a*100;								//procenti ne rade????????????????????????????
	printf("ukupno znakova %d\n", u);	
	printf("ukupno A %d\n", a);		
	printf("A u procentima %.2f%\n"	, p);		
	return 0;
}
8.9
int main(){
	int c, razmak, ostali;
	while((c=getchar())!=EOF)
	switch(c){
		case ' ': razmak++; break;
		case '.': case ',': case ':': case ';': ostali++; break;
		default: break;
	}
	printf("broj razmaka je %d", razmak);ewfeyfiueyifyeif
	printf("broj ostalih trazenih je %d", ostali);
	return 0;
}
8.10
int main(){
	int c, n=0;
	while((c=getchar())!=EOF){
	if(c>='0' && c<='9') break;
	n++;}
	printf("broj karaktera do prvog decimalnog broja je %d", n);
	return 0;
}
8.11
int main(){
	int c, n;
	while((c=getchar())!=EOF){
		if(c>='0' && c<='9') continue;
		n++;
	}
	printf("broj karaktera razlicitih od dec. brojeva je %d", n);
	return 0;
}
8.12
int main(){
	int c, o=0, z=0;
	while((c=getchar())!=EOF){
		if(c='(') o++;
		if(c=')') z++;									//ne moze ovako, zasto?????????????????
	}
	if(o=z){
	printf("odnos zagrada je u redu\n");}
	else{
	printf("odnos zagrada nije dobar");}
	return 0;
}
8.12
int main(){
	int c, o;
	while((c=getchar())!=EOF){
		switch(c){
			case '(': o++; break;
			case ')': o--; break;
		}
	}
			if(o>0){
				printf("ima viska otvorenih zagrada");
			}
			if(o==0){
				printf("odnos zagrada je u redu");
			}
			if(o<0){
				printf("ima viska zatvorenih zagrada");
			}
	return 0;
}
8.13
int main(){
	int c;
	while((c=getchar())!=EOF){
		putchar(tolower(c));
	}
	return 0;
}
8.14
int main(){
	int c;
	while((c=getchar())!=EOF){
		putchar(toupper(c));
	}
	return 0;
}
8.15
int main(){
	int c, prvi;
	while((c=getchar())!=EOF){
		if(isalpha(c)){
			if(prvi==0)						//kakvu ulogu ima ovo prvi???????????????????
			putchar(toupper(c));
			else
			putchar(tolower(c));
		}
		else putchar(c);
		prvi=1;
	}
	return 0;
}
8.16
int main(){
	int c, predh_c=NIJE_PRAZNO;
 	while((c=getchar()) != EOF)
 	{															?????????????????????????????????
 	if(c==HOR_TAB)
 		c=PRAZNO;
 	if(c != PRAZNO || predh_c != PRAZNO)
 		putchar(c);
 		predh_c=c;
 	} 
	return 0;
}
8.17
int main(){
	int c, poz=VAN_RECI;
 	while((c=getchar()) != EOF)
 	{
 		if(c==' ' || c=='\n' || c=='\t')
 		{
 			if(poz==U_RECI)
 			{
 			putchar('\n');
 			poz=VAN_RECI;								/??????????????????????????????????????????
 			}	
 		}
 		else
 		{
 			poz=U_RECI;
 			putchar(c);
 		}
 	}
	return 0;
}

8.18				------------							?????????????????????????????????
9.1
int zbir(int a, int b){
	int rezultat;
	rezultat=a+b;
	return rezultat;
}
int main(){
	int c;
	c=zbir(5,3);
	printf("%d", c);
	return 0;
}
9.2
float zbir(float a, float b){
	return (a+b);
}
float razlika(float a, float b){
	return (a-b);
}
float proizvod(float a, float b){
	return (a*b);
}
float kolicnik(float a, float b){
	if(b==0) return 0;
	else return (a/b);
}
float kvadrat(float a){
	return (a*a);
}
float kub(float a){
	return (a*a*a);
}
int main(){
	float x, y, z1, z2, z3;
	printf("unesite x\n");
	scanf("%f", &x);
	printf("unesite y\n");
	scanf("%f", &y);
	z1=zbir(x, kvadrat(y));
	z2=razlika(kub(x),kolicnik(x, y));
	z3=zbir(proizvod(x,y),razlika(5,y));
	printf("z1=%f\n", z1);
	printf("z2=%f\n", z2);
	printf("z3=%f\n", z3);
	return 0;
}
9.3
int max(int a, int b){
	if(a==b) return 0;
	else if(a>b) return a;
	else return b;
}
int main(){
	int a, b, c, d, m;
	printf("unesite 4 cela broja\n");
	scanf("%d%d%d%d\n", &a, &b, &c, &d);
	m=max(max(a,b), max(c,d));
	if(m==0){
		printf("zadati brojevi su isti");
	}
	else
	printf("najveci je broj %d", m);
	return 0;
}
9.5
float povrsina(float r){
	return (4*r*r*PI);
}
float zapremina(float r){
	return ((4./3.)*r*r*r*PI);
}
void ispis(float p, float v){
	printf("Povrsina iznosi %f\n", p);
	printf("zapremina iznosi %f\n", v);
}
int main(){
	float r, p, v;
	printf("unesite r\n");
	scanf("%f", &r);
	p=povrsina(r);
	v=zapremina(r);
	ispis(p, v);
	return 0;
}
9.6
float stranica(float x1, float x2, float y1, float y2){
	return(sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
}
int main(){
	float a, b, c, s, p, xa, xb, xc, ya, yb, yc;
	printf("unesite prvo teme(xa, ya)\n");
	scanf("%f %f\n", &xa, &ya);
	printf("unesite drugo teme(xb, yb)\n");
	scanf("%f %f\n", &xb, &yb);
	printf("unesite trece teme(xc, yc)\n");
	scanf("%f %f\n", &xc, &yc);
	a=stranica(xb, xc, yb, yc);
	b=stranica(xc, xa, yc, ya);
	c=stranica(xa, xb, ya, yb);								//ne radi??????????????
	s=(a+b+c)/2;
	p=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("povrsina iznosi %f", p);
	
	return 0;
}
9.7
int zbirkv(int a, int b){
	int i, suma=0;
	for(i=a;i<=b;i++){
		suma+=(i*i);
	}
	return suma;
}
int zbirkvp(int a, int b){
	int i, suma=0;
	for(i=a;i<=b;i++){
		if(i%2==0){
			suma+=(i*i);
		}
	}
	return suma;
}
int zbirkvn(int a, int b){
	int i, suma=0;
	for(i=a;i<=b;i++){
		if(i%2!=0){
			suma+=i*i;
		}
	}
	return suma;
}
int main(){
	int a, b;
	printf("unesite donju granicu\n");
	scanf("%d",&a);
	printf("unesite gornju granicu\n");
	scanf("%d", &b);
	printf("suma svih kvadrata je %d\n", zbirkv(a,b));
	printf("suma parnih kvadrata je %d\n", zbirkvp(a,b));
	printf("suma neparnih kvadrata je %d\n", zbirkvn(a,b));
	return 0;
}
9.8
int suma(int a){
	int suma=0;
	while(a!=0){
	suma+=a%10;
	a/=10;							suma cifara nauciti!!!!!!!!!!!!!!!!!!!!!!!!!!!
	}						
	return suma;
}
int main(){
	int i, d, g;
	printf("unesite donju granicu\n");
	scanf("%d", &d);
	printf("unesite gornju granicu\n");
	scanf("%d", &g);
	for(i=d;i<=g;i++){
		printf("%d\t%d\n", i, suma(fabs(i)));
	}
	return 0;
}
9.9
unsigned nzd(unsigned a, unsigned b){
	unsigned c;
	while(b!=0){
		c=b;
		b=a%b;
		a=c;
	}
	return a;
}
unsigned nzs(unsigned a, unsigned b){
	return a*b/nzd(a,b);
}
int main(){
	unsigned a, b;
	while(1){
		printf("unesite a\n");
		scanf("%u", &a);
		printf("unesite b\n");
		scanf("%u", &b);
		printf("nzd za %u i %u je %u\n", a, b, nzd(a,b));
		printf("nzs za %u i %u je %u\n", a, b, nzs(a,b));
	}
	return 0;
}
9.10
int fakt(int n){
	int i, f=1;
	for(i=1;i<=n;i++)
		f*=i;
		return f;
}
int main(){
	int n, k, c;
	printf("unesite n\n");
	scanf("%d", &n);
	printf("unesite k\n");
	scanf("%d", &k);
	c=fakt(n)/(fakt(k)*fakt(n-k));
	printf("c=%d", c);
	return 0;	
}
9.11
int fakt(int n){
	int i, f=1;
	for(i=1;i<=n;i++)
		f*=i;
		return f;
}
int main(){
	int s=0, n, i;
	printf("unesite n\n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		s+=fakt(i);
	}
	printf("suma iznosi %d", s);
	return 0;
}
9.12
int fakt(int n){
	int i, f=1;
	for(i=1;i<=n;i++)
		f*=i;
		return f;
}
int main(){
	int a, b, c;
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++){
				if((a*100+b*10+c)==(fakt(a)+fakt(b)+fakt(c)))
				printf("%d\n", a*100+b*10+c);
			}
	return 0;
}
9.13
float stepen(float x, int n){
	int i, neg;
	float s=1.0;
	neg=n<0;
	if(neg) n=-n;
	for(i=1;i<=n;i++)
	s*=x;
	if(neg) return(1/s);
	else return(s);
}
int main(){
	int n;
	float x, s;
	printf("unesite broj koji zelite stepenovati\n");
	scanf("%f", &x);
	printf("unesite stepen kojim zelite stepenovati\n");
	scanf("%d", &n);
	s=stepen(x,n);
	printf("rezultat je %f", s);
	return 0;
}
9.14
float stepen(float x, int n){
	int i;
 	double s=1.0;	
 	for(i=0; i<n; i++)								//nauciti funkciju za stepenovanje!!!!!!!!
 	s*=x;
 	return(s);
} 
int main(){
	int m;
	float r, a, p, k;
	printf("unesite iznos kredita\n");
	scanf("%f", &p);
	printf("unesite mesecnu kamatu\n");
	scanf("%f", &k);
	printf("unesite broj mesecnih rata\n");
	scanf("%d", &m);
	a=stepen(1+k, m);
	r=(a*p*k)/(a-1);
	printf("iznos mesecne rate kredita je %.2f", r);
	return 0;
}
9.15
int prost(int broj){
	int i;
	for(i=2;i<broj;i++)
	if(broj%i==0) return 0;
	return 1;
}
int main(){
	int i;
	for(i=1;i<500;i++){
		if(prost(i)==1){
			printf("%d\n", i);
		}
	}
	return 0;
}
9.17
int sumakub(int n){
	int suma=0;
	for(; n>0; n/=10)
	suma+=pow(n%10,3);							odredjivanje cifara trocifrenog broja kako nauciti   ??????????
	return suma;
}
int amstrong(int n){
	if(n==sumakub(n)) return 1;
	return 0;
}
int main(){
	int n;	
	for(n=100;n<500;n++){
		if(amstrong(n))
		printf("%d\n", n);
	}
	return 0;
}
9.18
int sumacif(int n){
	int suma=0;
	for( ; n>0; n/=10)
 	suma += n%10;							suma cifara nauciti!!!!!!!!!!!!!!!!!!!!!!!
	return suma;
}
int nivenov(int n){
	if(n%sumacif(n)==0)
		return 1;
	return 0;
}
int main(){
	int i;
	for(i=101;i<=200;i++){
		if(nivenov(i)){
		printf("%d\t", i);}
	}
	return 0;
}
9.20
float f1(float x){
	return(sin(x)/x);
}
float f2(float x){
	return f1(x)*f1(x);
}
int main(){
	float x, xmin, dx;
	printf("unesite xmin(xmin<1)\n");
	scanf("%f", &xmin);
	printf("unesite dx(dx<0.1)\n");
	scanf("%f", &dx);
	printf("\n x\t f1\t f2\n");
	for(x=1;x>=xmin;x-=dx){
		printf("%.2f\t%.2f\t%.2f\n",x, f1(x), f2(x));
	}
	return 0;
}
9.21
float a, b;
float f(float x){
	return(a*x*fabs(sin(b*x)));
}
int main(){
 	int n;
 	float a, b, x, x1, x2, dx, S, P;
	printf("unesite a"); scanf("%f",&a);								//razraditi!!!!!!!!!!!!!!!!!!!!!!!
	printf("unesite b"); scanf("%f",&b);
 	printf("unesite broj tacaka n"); scanf("%d",&n);
 	printf("unesite pocetak intervala x1"); scanf("%f",&x1);
 	printf("unesite kraj intervala x2"); scanf("%f",&x2);
 	dx=(x2-x1)/n;
 	S=(f(x1)+f(x2))/2;
 	for(x=x1+dx; x<=x2-dx; x+=dx)
 	S+=f(x);
 	P=S*dx;
 	printf("\n Povrsina= %.4f",P);
  	return 0;
}

							//rekurzivne funkcije preci!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
10.4
int main(){
	int i, n, niz[MAX];
	printf("unesite duzinu niza\n");
	scanf("%d", &n);
	printf("unesite elemente niza\n");
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
	printf("elementi niza su:");
	for(i=0;i<n;i++)
		printf("%d ", niz[i]);
	return 0;
}
10.5
int main(){
	int i, n, niz[MAX];
	printf("unesite duzinu niza\n");
	scanf("%d", &n);
	printf("unesite elemente niza\n");
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
	printf("elementi niza su:");
	for(i=n-1;i>0;i--)								//obrnut redosled ispisa nauciti!!!!!!!!!!!!!!!!!!!
		printf("%d ", niz[i]);
	return 0;
}
10.7
int main(){
	int i, n, niz[MAX];
	float suma=0;
	printf("unesite duzinu niza\n");
	scanf("%d", &n);
	printf("unesite elemente niza:\n");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
		suma+=niz[i];
	}
	printf("ar. sredina unetog niza je %f", suma/(float)n);
	return 0;
}
10.8
int main(){
	int i, n, niz[MAX], k=0, suma=0;
	printf("unesite duzinu niza\n");
	scanf("%d", &n);
	printf("unesite elemente niza:\n");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
		if(niz[i]%3==0){
			suma+=niz[i];
			k++;
		}
	}
	printf("ar. sredina elemenata deljivih sa 3 je %f", suma/(float)k); 
	return 0;
}
10.9a
int main(){
	int i, n, niz[MAX], sumap=0, suman=0;
	printf("unesite duzinu niza\n");
	scanf("%d", &n);
	printf("unesite elemente niza:\n");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
		if(niz[i]%2==0){
			sumap+=niz[i];
		}
		else
		suman+=niz[i];
	}
	printf("suma parnih brojeva je %d\n", sumap);
	printf("suma neparnih brojeva je %d", suman);
	return 0;
}
10.9b
int main(){
	int i, n, niz[MAX], sumap=0, suman=0;
	printf("unesite duzinu niza\n");
	scanf("%d", &n);
	printf("unesite elemente niza:\n");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
		if(i%2==0){
			sumap+=niz[i];
		}
		else
			suman+=niz[i];
	}
	printf("suma brojeva na parnim indeksima je %d\n", sumap);
	printf("suma brojeva na neparnim indeksima je %d", suman);
	
	return 0;
}
10.10
int main(){
	int i, n, niz1[MAX], niz2[MAX], proizvod=0;
	printf("unesite duzinu nizova\n");
	scanf("%d", &n);
	printf("unesite elemente prvog niza:\n");
	for(i=0;i<n;i++){
		scanf("%d", &niz1[i]);
	}
	printf("unesite elemente drugog niza:\n");
	for(i=0;i<n;i++){
		scanf("%d", &niz2[i]);
	}
	for(i=0;i<n;i++){
		proizvod+=niz1[i]*niz2[i];
	}
	printf("skalarni proizvod nizova je %d", proizvod);
	return 0;
}
10.11
int main(){
	int i, n, m, niz1[MAX], niz2[MAX], niz3[MAX];
	printf("unesite duzinu prvog niza\n");
	scanf("%d", &n);
	printf("unesite elemente prvog niza\n");
	for(i=0;i<n;i++){
		scanf("%d", &niz1[i]);
	}
	printf("unesite duzinu drugog niza\n");
	scanf("%d", &m);
	printf("unesite elemente drugog niza\n");
	for(i=0;i<m;i++){
		scanf("%d", &niz2[i]);
	}
	printf("elementi treceg niza su:");
	for(i=0;i<(n+m);i++){
		if(i<n) 
		niz3[i]=niz1[i];
		else 
		niz3[i]=niz2[i-n];
		printf("%d ", niz3[i]);							//ne zaboraviti da se kod navodjenja adrese za  
	}													// printf ne koristi &!!!!!!!!!!!!!!!!!!!!!!!
	return 0;
}
10.12
int main(){
	int i, n, nizA[MAX], nizB[MAX], nizC[MAX];
	printf("unesite duzinu nizova\n");
	scanf("%d", &n);
	printf("unesite elemente prvog niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &nizA[i]);
	}
	printf("unesite elemente drugog niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &nizB[i]);
	}
	printf("elementi treceg niza su: ");
	for(i=0;i<n;i++){
		nizC[i]=nizA[i]+nizB[i];
		printf("%d ", nizC[i]);
	}
	return 0;
}
10.13
int main(){
	float nizA[MAX], nizB[MAX], nizC[MAX];
	int i;
	printf("unesite niz A (duzine 5): ");
	for(i=0;i<5;i++)
		scanf("%f", &nizA[i]);
	printf("unesite niz B (duzine 5): ");
	for(i=0;i<5;i++)
	scanf("%f", &nizB[i]);
	printf("niz C: ");
	for(i=0;i<5;i++){
		nizC[i]=pow(nizA[i],3)/3+2*nizA[i]*nizB[i];
		printf("%f ", nizC[i]);
	}
	return 0;
}
10.14
int main(){
	int i, nizA[MAX], nizB[MAX], nizC[MAX];
	printf("unesite niz A: ");
	for(i=0;i<MAX;i++)
		scanf("%d", &nizA[i]);
	printf("unesite niz B: ");
	for(i=0;i<MAX;i++)
		scanf("%d", &nizB[i]);
	printf("niz C: ");
	for(i=0;i<MAX;i++){
		nizC[i]=nizA[i]+nizB[MAX-1-i];
		printf("%d ", nizC[i]);
	}
	return 0;
}
10.15
int main(){
	int n, m, i, k=0, nizA[MAX], nizB[MAX], nizC[MAX];
	printf("unesite duzinu niza A:\n ");
	scanf("%d", &n);
	printf("unesite elemente niza A:\n ");
	for(i=0;i<n;i++)
		scanf("%d", &nizA[i]);
	printf("unesite duzinu niza B:\n ");
	scanf("%d", &m);
	printf("unesite elemente niza B:\n ");
	for(i=0;i<m;i++)
		scanf("%d", &nizB[i]);
	printf("element niza C: ");
	for(i=0;i<n;i++){
		if(nizA[i]%2==0){
			nizC[k]=nizA[i];
			k++;
		}
	}
	for(i=0;i<m;i++){
		if(nizB[i]%2==0){
			nizC[k]=nizB[i];
			k++;
		}
	}
	for(i=0;i<k;i++){
		printf("%d ", nizC[i]);
	}
	return 0;
}
10.16
int main(){
	int i, n, nizA[MAX], nizB[MAX], nizC[MAX];
	printf("unesite broj elemenata nizova: ");
	scanf("%d", &n);
	printf("unesite elemente niza A:\n");
	for(i=0;i<n;i++)
		scanf("%d", &nizA[i]);
	printf("unesite elemente niza B:\n");
	for(i=0;i<n;i++)
		scanf("%d", &nizB[i]);
	printf("elementi niza C: ");
	for(i=0;i<n;i++){
		if(nizA[i]>nizB[i]){
			nizC[i]=nizB[i];
		}
		else if(nizB[i]>nizA[i]){
			nizC[i]=nizA[i];
		}
		else
			nizC[i]=0;
		printf("%d", nizC[i]);
	}
	return 0;
}
10.17
int main(){
	int nizA[MAX], nizB[MAX], nizC[MAX];
	int i, n, j=0, k=0;
	printf("unesite duzinu niza A: ");
	scanf("%d", &n);
	printf("\nunesite elemente niza A: ");
	for(i=0;i<n;i++)
		scanf("%d", &nizA[i]);
	for(i=0;i<n;i++){
		if(nizA[i]<0){
			nizB[k]=nizA[i];
			k++;
		}
		else{
			nizC[j]=nizA[i];
			j++;
		}
	}	
	printf("\nelementi niza B: ");
	for(i=0;i<k;i++)
		printf("%d ", nizB[i]);
	printf("\nelementi niza C: ");
	for(i=0;i<j;i++)
		printf("%d ", nizC[i]);
	return 0;	
}
10.18
int main(){
	int i, n, m, nizA[MAX], nizB[MAX];
	float as, suma=0;
	printf("unesite duzinu niza A: ");
	scanf("%d", &n);
	printf("\nelementi niza A: ");
	for(i=0;i<n;i++){
		scanf("%d", &nizA[i]);
		suma+=nizA[i];
	}
	as=suma/(float)n;
	printf("elementi niza B: ");
	for(i=0;i<n;i++){
		if(nizA[i]>as){
			nizB[m]=nizA[i];
			printf("%d ", nizB[m]);
			m++;
		}
	}
	return 0;
}
10.19
int main(){
	int i, n, suma=0, nizA[MAX], nizB[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza A: ");
	for(i=0;i<n;i++){
		scanf("%d", &nizA[i]);
	}
	printf("elementi niza B: ");
	for(i=0;i<n;i++){
		nizB[i]=nizA[i]+suma;
		suma=nizB[i];
		printf("%d ", nizB[i]);
	}
	return 0;
}
10.21
float skalp(int a[], int b[], int n){
	float zbir=0;
	int i;
	for(i=0;i<n;i++){
		zbir+=a[i]*b[i];
	}
	return zbir;
}
int main(){
	int i, n, nizA[MAX], nizB[MAX];
	printf("unesite duzinu nizova: ");
	scanf("%d", &n);
	printf("unesite elemente niza A: ");
	for(i=0;i<n;i++){
		scanf("%d", &nizA[i]);
	}
	printf("unesite elemente niza B: ");
	for(i=0;i<n;i++){
		scanf("%d", &nizB[i]);
	}
	printf("skalarni proizvod niza A i B je %f", skalp(nizA, nizB, n));
	return 0;
}
10.22
int brrazl(int niz[], int n){
	int i, j, brojac;
	for(i=0;i<n;i++){
		for(j=0;j<i && niz[j]!=niz[i];j++);					//broj razlicitih u nizu nauciti dobro !!!!!!!
		if(j==i) brojac++;
	}
	return brojac;
}
int main(){
	int i, n, niz[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza A:");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
	}
	printf("broj razlicitih elemenata u nizu je %d", brrazl(niz,n));
	return 0;
}
10.23
float ukupnaprosecna(int niz[], int n){
	int i;
	float suma=0;
	for(i=0;i<n;i++){									//prouciti
		suma+=niz[i];													
	}									
	return suma/n;
}
float prosecnaprolaz(int niz[], int n){
	int i, suma=0;
	for(i=0;i<n;i++){
		if(niz[i]>5){							//prouciti
			suma+=niz[i];
		}
	}
	return suma/n;
}
float polozili(int niz[], int n){
	int i, brojac=0;
	for(i=0;i<n;i++){
		if(niz[i]>5){
			brojac++;
		}
	}
	return brojac;
}
float pali(int niz[], int n){
	int i, brojac=0;
	for(i=0;i<n;i++){
		if(niz[i]==5){
			brojac++;
		}
	}
	return brojac;
}
float vecaodpros(int niz[], int n){
	int i, brojac, suma=0, as;
	for(i=0;i<n;i++){								//prouciti
		suma+=niz[i];
	}
	as=suma/n;
	for(i=0;i<n;i++){
		if(niz[i]>as){
			brojac++;
		}
	}
	return brojac;
}
int main(){
	int i, n, niz[MAX];
	printf("unesite broj studenata koji su polagali: ");
	scanf("%d", &n);
	printf("unesite ocene studenata");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
	}
	printf("ukupno polozilo: %.f\n", polozili(niz,n));
	printf("ukupno palo: %.f\n", pali(niz,n));
	printf("prosecna ocena na ispitu: %.2f\n", ukupnaprosecna(niz,n));
	printf("prosecna ocena polozenih: %.f\n", prosecnaprolaz(niz,n));
	printf("broj studenata sa ocenom iznad prosecne ocene: %.f\n", vecaodpros(niz,n));
}
10.24
void fibonaci(int niz[], int n){
	int i;
	for(i=0;i<n;i++){									//fibonaci laksi nacin!!!!!!!!!!!!!!!!!!!!!
		if(i<2) niz[i]=1;
		else niz[i]=niz[i-1]+niz[i-2];
	}
}
void prikaz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
	printf("%d ", niz[i]);
}
int main(){
	int n, niz[MAX];
	printf("broj fibonacijevih brojeva: ");
	scanf("%d", &n);
	fibonaci(niz, n);
	prikaz(niz,n);
	return 0;
}
10.25
int skalp(int nizA[], int nizB[], int n){
	int i, skalp=0;
	for(i=0;i<n;i++){
		skalp+=nizA[i]*nizB[i];
	}
	return skalp;
}
int main(){
	int i, n, nizA[MAX], nizB[MAX];
	printf("unesite duzinu nizova: ");
	scanf("%d", &n);
	printf("unesite elemente prvog niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &nizA[i]);
	}
	printf("unesite elemente drugog niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &nizB[i]);
	}
	printf("skalarni prvoizvod ova dva niza je: %d", skalp(nizA, nizB, n));
	return 0;
}

10.26 ???????????????????????????????????????????????????????????????????????????????????????????
10.27
int main(){
	int i, n, niz[MAX], max, pozicija=0;
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
	}
	max=niz[0];
	for(i=0;i<n;i++){
		if(niz[i]>max){
			max=niz[i];
			pozicija=i;
		}
	}
	printf("max u nizu je broj %d\n", max);
	printf("pozicija max broja %d je %d", max, pozicija+1);
}
10.28
int main(){
	int i, n, max, min, niz[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
	}
	max=niz[0];
	for(i=1;i<n;i++){
		if(niz[i]>max){
			max=niz[i];
		}
	}
	min=niz[0];
	for(i=0;i<n;i++){
		if(niz[i]<min){
			min=niz[i];
		}
	}
	printf("elementi: ");
	for(i=0;i<n;i++){
		if(min*2<niz[i] && niz[i]<max/2) 
		printf("%d ", niz[i]);
	}
	return 0;
}
10.29
int main(){
	int i, n, niz[MAX], min;
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
	}
	for(i=0;i<n;i++){
		if(niz[i]%2==0){
			min=niz[i];
		}
	}
	for(i=0;i<n;i++){
		if(niz[i]%2==0 && niz[i]<min){
			min=niz[i];
		}
	}
	printf("najmanji parni broj u nizu je %d", min);
	
	return 0;
}
10.30
int main(){
	int i, n, niz[MAX], max;
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
	}
	max=niz[1];
	printf("parne pozicije: ");
	for(i=0;i<n;i++){
		if(i%2!=0){
			printf("%d ", niz[i]);
			if(niz[i]>max)
			max=niz[i];
		}
	}
	printf("\nmax parnih pozicija: %d", max);	
	return 0;
}
10.31
int main(){
	int i, j, n, pom=2, niz[MAX];
	printf("unesite broj elemenata niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");						//dobro nauciti!!!!!!!!!!!!!!!!!!!!!!
	while(n>=3 && n<=MAX){
		for(i=1;i<=n;i++){
			scanf("%d", &j);
			niz[i-1]=j;									
		}
		for(i=2;i<n;i++){
			if(niz[i]=niz[i-1]+niz[i-2])
				pom++;														//ne radi bas
			else{
				printf("niz nije fibonacijev");
				break;
			}
		}
		if(pom==n)
			printf("niz jeste fibonacijev");	
		break;
	}
	return 0;
}
10.32a
int main(){
	int i, n, broj, nadjen=0, niz[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
	}
	printf("unesite broj koji zelite traziti: ");
	scanf("%d", &broj);
	for(i=1;i<n;i++)
		if(broj==niz[i]){
			nadjen=1;
			printf("pozicija trazenog broja %d u nizu je %d", broj, i+1);		
		}
		if(!nadjen)
			printf("trazeni element nije pronadjen u nizu");	
	return 0;
}
10.32b
int trazi(int niz[], int n, int broj){
	int i;
	for(i=0;i<n;i++){
		if(niz[i]==broj) return i;
	}
	return -1;
}
int main(){
	int i, n, broj, niz[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &niz[i]);
	}
	printf("unesite broj koji zelite pretraziti: ");
	scanf("%d",&broj);
	i=trazi(niz, n, broj);
	if(i==1){
		printf("pozicija trazenog broja %d u nizu je %d", broj, i+1);
	}
	else
		printf("trazeni element se ne nalazi u nizu");
	return 0;
}
10.33a
int main(){
	int i, n, niz[MAX], broj, nadjen=0, imax, imin=0, isrednji;
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
	printf("unesite broj koji zelite pretraziti: ");
	scanf("%d", &broj);
	imax=n-1;
	while(imin<=imax){										//ne pokrece while petlju program????????
		isrednji=(imin+imax)/2;
		if(broj==niz[isrednji]){
			nadjen=1;
			printf("vrednost trazenog broja %d ima %d element u nizu", broj, isrednji+1);
			break;
		}
		else if(broj<niz[isrednji])
			imax=isrednji-1;
		else
			imin=isrednji+1;
	}
	if(!nadjen)
		printf("trazeni broj nije pronadjen u nizu");
	return 0;
}
10.33b
int trazi(int niz[], int n, int broj){
	int imin=0, imax=n-1;
	while(imin<=imax){
		int isrednji=(imin+imax)/2;
		if(broj=niz[isrednji]){
			return isrednji;
		}
		else if(broj<niz[isrednji]){
			imax=isrednji-1;
		}
		else 
			imin=isrednji+1;
	}
	return -1;
}
int main(){
	int i, n, niz[MAX], broj, isrednji;
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
	printf("unesite broj koji zelite pretraziti: ");
	scanf("%d", &broj);
	i=trazi(niz, n, broj);
	if(i==-1)
		printf("trazeni broj se ne nalazi u nizu");
	else	
		printf("vrednost trazenog broja %d ima %d element u nizu", broj, i+1);		//ne radi??????
	return 0;
}
10.34
int main(){
	int i, n, niz[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
	printf("obrnut redosled niza: ");
	for(i=n-1;i>=0;i--)
		printf("%d ", niz[i]);
	return 0;
}
10.35
int main(){
	int i, n, niz[MAX], pom;
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
	pom=niz[0];
	for(i=0;i<n-1;i++)
		niz[i]=niz[i+1];
	niz[n-1]=pom;
	printf("novi niz: ");
	for(i=0;i<n;i++)
		printf("%d ", niz[i]);								//ne radi?????????????????
	return 0;
}
10.36
void citajniz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
}
void pisiniz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ", niz[i]);
}
void rotiraj(int niz[], int n){
	int pom, i;
	pom=niz[0];
	for(i=0;i<n-1;i++)
		niz[i-1]=niz[i];
	niz[n-1]=pom;
}
int main(){
	int i, n, x, niz[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	citajniz(niz, n);												//ne ide dalje??????????
	printf("za koliko mesta zelite da rotirate niza: ");
	scanf("%d", &x);
	for(i=0;i<x;i++)
		rotiraj(niz, n);
	printf("rotirani niz je: ");
	pisiniz(niz, n);
	return 0;
}
10.37
void citajniz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
}
void pisiniz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ", niz[i]);
}
void zameni(int niz[], int n){
	int i, pom;
	for(i=0;i<n-1;i+=2){
		pom=niz[i];
		niz[i]=niz[i+1];
		niz[i+1]=pom;
	}
}
int main(){
	int i, n, niz[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	citajniz(niz, n);
	zameni(niz, n);
	printf("novi niz: ");
	pisiniz(niz, n);
}
10.38
void citajniz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
}
void pisiniz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d", niz[i]);
}
int main(){
	int i, n, niz[MAX], j, isti;
	printf("unesit broj elemenata: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	citajniz(niz, n);
	printf("novi niz: ");
	for(i=0;i<n-1;i++){
		isti=0;
		for(j=i+1;j<n;j++)							//dobro nauciti!!!!!!!!!!!!!!!!!!!!
			if(niz[i]==niz[j]){
				isti=1;
				break;
			}
			if(!isti)
			printf("%d ", niz[i]);
	}
	printf("%d ", niz[n-1]);
	return 0;
}
10.39
void citajniz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
}
void ispisiniz(int niz[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ", niz[i]);
}
int main(){
	int i, j, n, pom, niz[MAX];
	printf("unesite duzinu niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	citajniz(niz, n);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(niz[i]>niz[j]){
				pom=niz[i];
				niz[i]=niz[j];
				niz[j]=pom;
			}
	printf("sortirani niz: ");
	ispisiniz(niz, n);
	return 0;
}
11.1
int main(){
	int i, j, m, n, mat[MAX][MAX];
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &m);
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			printf("element[%d][%d]:", i, j);
			scanf("%d", &mat[i][j]);
		}
	printf("uneta matrica:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	return 0;
}
11.2
int main(){
	int i, j, n, mat[MAX][MAX], s=0;
	printf("unesite broj vrsta/kolona matrice:");
	scanf("%d", &n);
	printf("unesite matricu:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			s+=mat[i][j];
		}
	printf("suma elemenata matrice iznosi %d", s);
	return 0;
}
11.3 sa funkcijama?
void citajmat(int mat[][], int m, int n){
	int i, j, mat;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
}
int sumap(int mat[][], int m, int n){
	int i, j, s=0, mat;
	for(i=0;i<m;i++)
		for(i=0;i<n;i++)
			if(mat[i][j]%2==0)
				s+=mat[i][j];
	return s;
}
int nule(int mat[][], int m, int n){
	int i, j, nule=0, mat;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(mat[i][j]==0)	
			nule++;
	return nule;
}
int main(){
	int m, n, suma, nule, mat[MAX][MAX];
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &m);
	printf("unesite broj kolona matrice: ");
	scanf("%d", &n);
	citajmat(mat, m, n);
	printf("suma parnih elemenata matrice je %d", sumap(mat, m, n));
	printf("ukupno nula", nule(mat, m ,n));
	return 0;
}
11.3
int main(){
	int i, j, m, n, sumap=0, nule=0, mat[MAX][MAX];
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &m);
	printf("unesite broj kolona matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			if(mat[i][j]%2==0)	sumap+=mat[j][j];
			if(mat[i][j]==0)	nule++;
		}
	printf("suma parnih brojeva matrice je %d\n", sumap);
	printf("ukupno nula %d", nule);
	return 0;
}
11.4
int main(){
	int i, j, m, n, suma=0, mata[MAX][MAX], matb[MAX][MAX], matc[MAX][MAX];
	printf("unesite broj vrsta matrica: ");
	scanf("%d", &m);
	printf("unesite broj kolona matrica: ");
	scanf("%d",&n);
	printf("unesite elemente prve matrice:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mata[i][j]);
	printf("unesite elemente druge matrice:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &matb[i][j]);
	printf("novodobijena matrica:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			matc[i][j]=mata[i][j]+matb[i][j];
			printf("%d", matc[i][j]);
		}
	return 0;
}
11.5
int main(){
	int i, j, n, sumag=0, sumas=0, mat[MAX][MAX];
	printf("unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice: \n");
	for(i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	printf("uneta matrica:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	printf("\nelementi na glavnoj dijagonali:");
	for(i=0;i<n;i++){
		printf("%d ",mat[i][i]);
		sumag+=mat[i][i];
	}
	printf("\nelementi na sporednoj dijagonali:");
	for(i=0;i<n;i++){
		printf("%d ", mat[i][n-i-1]);
		sumas+=mat[i][n-i-1];							//zapamtiti formulu za sporednu dijagonalu!!!!!!!!
	}
	printf("\nsuma elemenata na glavnoj dijagonali je %d\n", sumag);
	printf("suma elemenata na sporednoj dijagonali je %d", sumas);
	return 0;
}
11.6
int main(){
	int i, j, n, suma=0, mat[MAX][MAX];
	printf("unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	printf("uneta je matrica: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	printf("suma elemenata vrste: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			suma+=mat[i][j];
			printf("%d ", suma);
	}
	return 0;
}
11.7
int main(){
	int i, j, m, n, suma=0, vrsta, mat[MAX][MAX];
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &m);
	printf("unesite broj kolona matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	printf("uneta je matrica: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		printf("%d ", mat[i][j]);
		printf("\n");
	}
	printf("unesite vrstu cije elemente zelite sabrati: ");
	scanf("%d",&vrsta);
	for(j=0;j<n;j++)
		suma+=mat[vrsta-1][j];
	printf("suma iznosi %d", suma);
	return 0;
}
11.8
int main(){
	int i, j, m, n, mat[MAX][MAX], niz[MAX];
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &m);
	printf("unesite broj kolona matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice: \n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	printf("uneta je matrica:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	printf("elementi: \n");
	for(j=0;j<n;j++){
		if(j%2==0){												//nauciti!!!!!!!!!!!!!!!!!!!!!
			for(i=0;i<m;i++)
				printf("%d ", mat[i][j]);
		}
		else
			for(i=m-1;i>=0;i--)
				printf("%d ", mat[i][j]);
	}
	return 0;
}
11.9
int main(){
	int i, j, n;
	float mat[MAX][MAX], t;
	printf("unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice: \n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%f", &mat[i][j]);
	for(i=0;i<n;i++)
		if(mat[i][j]!=0){
			t=mat[i][i];
			for(j=0;j<n;j++)
			mat[i][j]/=t;
		}
		else{
			for(j=0;j<n;j++)
			mat[i][j]=0;
			mat[i][i]=1;									//ne radi????????????????
		}
		printf("novodobijena matrica:\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				printf("%.2f ", mat[i][j]);
				printf("\n");
		}
	return 0;
}
11.10
int main(){
	int i, j, n, x, mat[MAX][MAX];
	printf("unesite vrednost za x: ");
	scanf("%d", &x);
	printf("unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(i>j) mat[i][j]+=x;
			if(i<j) mat[i][j]+=2*x;
		}
	printf("novodobijena matrica: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	return 0;
}
11.11
int main(){
	int i, j, m, n, k1, k2, pom, mat[MAX][MAX];
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &m);
	printf("unesite broj kolona matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice: ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	printf("uneta je matrica: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
		}
	printf("unesite broj kolona kojim zelite zameniti mesta: ");
	scanf("%d %d", &k1, &k2);
	for(i=0;i<n;i++){
		pom=mat[i][k1-1];
		mat[i][k1-1]=mat[i][k2-1];
		mat[i][k2-1]=pom;
	}
	printf("novodobijena matrica: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	return 0;
}
11.12a
int main(){
	int i, j, n, pom, mat[MAX][MAX];
	printf("unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice: \n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	printf("uneta je matrica: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++){
			pom=mat[i][j];							//nauciti!!!!!!!!!!!!!!!!!!!!!!!!!
			mat[i][j]=mat[j][i];
			mat[j][i]=pom;
		}
	printf("transponovana matrica: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
		}
	return 0;
}
11.12b
void ucitaj(int mat[MAX][MAX], int n){
	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
}
void pisi(int mat[MAX][MAX], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
}
void transponovano(int mat[MAX][MAX], int n){
	int i, j, pom;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++){
			pom=mat[i][j];
			mat[i][j]=mat[j][i];
			mat[j][i]=pom;
		}
}
int main(){
	int i, j, n, mat[MAX][MAX];
	printf("unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice: \n");
	ucitaj(mat, n);
	transponovano(mat, n);
	printf("transponovana: \n");
	pisi(mat, n);
	return 0;
}
11.13
int main(){
	int i, j, n, mat[MAX][MAX], maxk[MAX], mink[MAX], maxv[MAX], minv[MAX];
	printf("unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	printf("uneta je matrica: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	for(i=0;i<n;i++){
		minv[i]=mat[i][0];
		maxv[i]=mat[i][0];
		mink[i]=mat[0][i];
		maxk[i]=mat[0][i];													//!!!!!!!!!!!!!!!!!!!!!!!!!!
		for(j=1;j<n;j++){
			if(mat[i][j]<minv[i])	minv[i]=mat[i][j];
			if(mat[i][j]>maxv[i])	maxv[i]=mat[i][j];
			if(mat[j][i]<mink[i])	mink[i]=mat[j][i];
			if(mat[j][i]>maxk[i])	maxk[i]=mat[j][i];
		}
	}
	printf("\nnajveci u vrstama: ");
	for(i=0;i<n;i++)
		printf("%d ", maxv[i]);
	printf("\nnajmanji u vrstama: ");
	for(i=0;i<n;i++)
		printf("%d ", minv[i]);
	printf("\nnajveci u kolonama: ");
	for(i=0;i<n;i++)
		printf("%d ", maxk[i]);
	printf("\nnajmanji u kolonama: ");
	for(i=0;i<n;i++)
		printf("%d ", mink[i]);
	return 0;
}
11.14
void ucitaj(int mat[MAX][MAX], int n, int m){
	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &mat[i][j]);
}
void pisi(int mat[MAX][MAX], int n, int m){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
}
int main(){
	int i, j, n, m, k, t, mata[MAX][MAX], matb[MAX][MAX], matc[MAX][MAX];
	printf("unesite broj vrsta i kolona A matrice: ");
	scanf("%d %d", &n, &m);
	printf("unesite broj kolona B matrice: ");
	scanf("%d", &k);
	printf("unesite elemente A matrice: ");
	ucitaj(mata, n, m);
	printf("uneta je A matrica: \n");
	pisi(mata, n, m);
	printf("unesite elemente B matrice: ");
	ucitaj(matb, m, k);
	printf("uneta je B matrica: \n");
	pisi(matb, m, k);
	for(i=0;i<n;i++)
		for(j=0;j<k;j++){											//nauciti!!!!!!!!!!!!!!!!!!
			matc[i][j]=0;
			for(t=0;t<m;t++)
				matc[i][j]=matc[i][j]+mata[i][t]*matb[t][j];
		}
	printf("novodobijena matrica A: \n");
	pisi(matc, n, k);
	return 0;
}
11.15
void citaj(int mat[MAX][MAX], int n){
	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
}
void pisi(int mat[MAX][MAX], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
}
int main(){
	int i, j, n, k, mata[MAX][MAX], matb[MAX][MAX];
	printf("unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("unesite elemente matrice: ");
	citaj(mata, n);
	printf("uneta je matrica A: \n");
	pisi(mata, n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			matb[i][j]=0;
			for(k=0;k<n;k++)
			matb[i][j]=matb[i][j]+mata[i][k]*mata[k][j];
		}
	printf("matrica AxA: \n");
	pisi(matb, n);
	return 0;
}
11.16
int main(){
	int i, j, m, n, k, s, mata[MAX][MAX], matb[MAX][MAX], matc[MAX][MAX];
	printf("unesite dimenziju matrice: ");
	scanf("%d", &m);
	printf("unesite elemente matrice: \n");
	for(i=0;i<m;i++)
		for(j=0;j<m;j++){
			scanf("%d", &mata[i][j]);
			matb[i][j]=mata[i][j];
		}
	printf("uneta je matrica: \n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++)
			printf("%d ", mata[i][j]);
			printf("\n");
	}
	printf("unesite stepen kojim zelite stepenovati matricu: ");
	scanf("%d", &n);
	for(s=1;s<n;s++){
		for(i=0;i<m;i++)
			for(j=0;j<m;j++){
				matc[i][j]=0;
				for(k=0;k<m;k++)
					matc[i][j]+=mata[i][k]*matb[k][j];
			}
		for(i=0;i<m;i++)
			for(j=0;j<m;j++)
				matb[i][j]=matc[i][j];
	}
	printf("nova matrica: \n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++)
			printf("%d ", matc[i][j]);
			printf("\n");
	}
	return 0;
}
1.4
int main(){
	char s[MAX+1];
	gets(s);
	puts(s);
	getche();
	return 0;
}
1.5
int main(){
	char ime[MAX+1];
	char naslov[]="jezik C";
	puts("unesite ime i prezime");
	gets(ime);
	printf("zdravo %s\n", ime);
	printf("dobro dosao u %s", naslov);
}
1.6
int main(){
	int n;
	char poglavlja[brojpoglavlja][imepoglavlja+1]={"operatori", "ciklusi", "skokovi", "karakteri",
					"nizovi", "matrice", "stringovi", "pokazivaci", "strukture", "datoteke"};
	printf("unesite broj poglavlja (od 0 do %d): ", brojpoglavlja);
	scanf("%d", &n);
	printf("poglavlje broj %d je %s", n, poglavlja[n-1]);
	return 0;
}
1.8a
int main(){
	int n=0;
	char s[MAX+1];
	printf("unesite string: ");
	gets(s);
	while(s[n]!='\0')
		n++;
	printf("duzina stringa je %d", n);
	return 0;
}
1.8b
int main(){
	int n;
	char s[MAX+1];
	printf("unesite string: ");
	gets(s);
	n=strlen(s);
	printf("duzina unetog stringa je %d", n);
	return 0;
}
1.8c
int main(){
	int n1, n2;
	char s1[MAX+1], s2[MAX+1];
	printf("unesite prvi string: ");
	gets(s1);
	n1=strlen(s1);
	printf("unesite drugi string: ");
	gets(s2);
	n2=strlen(s2);
	if(n1==n2)	printf("uneti stringovi su iste duzine");
	else if(n1>n2)	printf("prvi string je duzi");
	else	printf("drugi string je duzi");
	return 0;
}
1.9a
int main(){
	char s1[MAX+1], s2[MAX];
	printf("unesite prvi string: ");
	gets(s1);
	printf("unesite drugi string: ");
	gets(s2);
	if(strcmp(s1, s2)==0)	printf("stringovi su iste duzine");
	else if(strcmp(s1, s2)>0)	printf("prvi string je duzi");
	else	printf("drugi string je duzi");
	return 0;
}
1.9b
int main(){
	char s1[MAX+1], s2[MAX+1];
	printf("unesite prvi string: ");
	gets(s1);
	printf("unesite drugi string: ");
	gets(s2);
	if(strncmp(s1, s2, 4)==0)	printf("prva 4 karaktera oba stringa su ista");
	else	printf("nisu isti karakteri stringova");
	return 0;
}
1.10a
int main(){
	char s1[MAX+1], s2[MAX+1];
	printf("unesite prvi string: ");
	gets(s1);
	printf("unesite drugi string: ");
	gets(s2);
	strcpy(s1, s2);
	printf("novi string: ");
	puts(s1);
	return 0;
}
1.10b
int main(){
	char s1[MAX+1], s2[MAX+1];
	printf("unesite prvi string: ");
	gets(s1);
	printf("unesite drugi string: ");
	gets(s2);
	strncpy(s1, s2, 3);
	printf("novi string: ");
	puts(s1);
	return 0;
}
1.11a
int main(){
	char s1[MAX+1], s2[MAX+1];
	printf("unesite prvi string: ");
	gets(s1);
	printf("unesite drugi string: ");
	gets(s2);
	strcat(s1, s2);
	printf("novi string: ");
	puts(s1);
	return 0;
}
1.11b
int main(){
	char s1[MAX+1], s2[MAX+1];
	printf("unesite prvi string: ");
	gets(s1);
	printf("unesite drugi string: ");
	gets(s2);
	strncat(s1, s2, 5);
	printf("novi string: ");
	puts(s1);
	return 0;
}
1.12
int main(){
	char s[MAX+1];
	printf("unesite string: ");
	gets(s);
	printf("ceo broj %d\n", atoi(s));
	printf("realan broj %f", atof(s));
	return 0;
}
1.14
int main(){
	int znak;
	float broj1, broj2;
	char s[MAX+1];
	while(1){
		printf("\nunesite prvi broj");
		gets(s);
		if(!isdigit(s[0]) &&  s[0]!='-'){
			printf("\n");
			break;
		}
		broj1=atof(s);
		printf("\nunesite drugi broj");
		gets(s);
		if(!isdigit(s[0]) && s[0]!='-'){
			printf("\n");
			break;
		}
		broj2=atof(s);
		printf("\nunesite operator: ");
		znak=getchar();
		getchar();
		if(!(isdigit(s[0]))){
 			printf("\n");
 			break;
		}
		switch(znak){
			case '+': printf("\nrezultat je %f", broj1+broj2);	break;
			case '-': printf("\nrezultat je %f", broj1-broj2);	break;
			case '*': printf("\nrezultat je %f", broj1*broj2);	break;
			case '/': printf("\nrezultat je %f", broj1/broj2);	break;
			default : printf("\nnepoznat operator");
		}
	}
	return 0;	
}
1.16
void ucitaj(char s[]){
	int c, i=0;											// zapamtiti!!!!!!!!!!!!!!!!!!!
	while(!isspace(c=getchar())) 
		s[i++]=c;
	s[i]='\0';
}
int main(){
	char s[MAX];
	ucitaj(s);
	printf("%s", s);
	return 0;
}
1.17
int duzina(char s[]){
	int i;
	for(i=0;s[i];i++);
	return i;
}
void kopiraj(char s1[], char s2[]){
	int i;
	for(i=0;(s1[i]=s2[i]) != '\0'; i++);
}
void nadovezi(char s1[], char s2[]){
	int i, j;
	for(i=0;s1[i];i++);
	for(j=0;s1[i]=s2[j]; j++, i++);
}
int poredi(char s1[], char s2[]){
	int i;
	for(i = 0; s1[i]==s2[i]; i++)
	if(s1[i] == '\0') 
	return 0;
	return s1[i] - s2[i];
} 
int prvapozicija(char s[], char c){
	int i;
	for(i=0; s[i]; i++)
	if(s[i] == c) return i;
	return -1;
}
int poslednjapozicija(char s[], char c){
	int i;
	for(i=0; s[i]; i++);
	for(i--; i>=0; i--)
	if(s[i] == c) return i;
	return -1;
}
int stringUstring(char s1[], char s2[]){
	int i, j;
	for(i=0; s1[i]; i++)
	for(j=0; s1[i+j] == s2[j]; j++)
	if(s2[j+1]=='\0') return i;
	return -1;
}
int main(){
	char s[MAX], t[]="zdravo", u[]=" svima";
	kopiraj(s, t);														//????????????????????
	printf(" %s\n", s);
	nadovezi(s, u);
	printf(" %s\n", s);
	printf(" %d\n", prvapozicija("racunari", 'n'));
	printf(" %d\n", poslednjapozicija("racunari", 'a'));
	printf(" %d\n", stringUstring("racunari", "rac"));
	printf(" %d\n", stringUstring("racunari", "ari"));
	printf(" %d\n", stringUstring("racunari", "cun"));
	printf(" %d\n", stringUstring("racunari", "cna"));
	return 0;
}
1.20
int main(){
	int i, n, brojac=0;
	char s[MAX+1], b;
	printf("unesite string: ");
	gets(s);
	n=strlen(s);
	printf("unesite znak koji zelite pretraziti: ");
	scanf("%d", &b);
	for(i=0;i<n;i++)												// ne radi????????????
		if(s[i]==b || s[i]==toupper(b)){
			brojac++;
		}
	if(brojac==0)
		printf("uneti znak se ne pojavljuje u stringu");
	else
		printf("uneti znak se pojavljuje u %d puta u stringu", brojac);
	return 0;
}
1.21
int main(){
	int i, n, brojac=0;
	char s[MAX+1];
	printf("unesite string: ");
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
		if(s[i]==' ' && s[i+1]!=' ')
			brojac++;
	printf("u recenici ima %d reci", brojac+1);
	return 0;
}
1.22
int main(){
	int i, n, brojac=1, max=0;
	char znak, a[MAX+1];
	printf("unesite string: ");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]){
			brojac++;
			if(brojac>max){
				max=brojac;
				znak=a[i];
			}
		}
	}
	printf("duzina najduzeg niza: %d\n", max);
	printf("najduzi podniz: ");
	for(i=0;i<max;i++)
		printf("%c", znak);
	return 0;
}
1.24
int main(){
	int i;
	char s[MAX+1];
	printf("unesite string: ");
	scanf("%s", s);
	for(i=0;i<strlen(s);i++){
		if(s[i]>='a' && s[i]<='z')
		s[i]-='a'-'A';									//kako sa toupper???????????????	
	}
	printf("%s", s);
	return 0;
}
1.26
int main(){
	int i, n, t=0, k;
	char s[MAX+1];
	printf("unesite string: ");
	gets(s);
	n=strlen(s);
	for(i=0;i<=n;i++){
		if(s[i]==' ' || s[i]==',' || i==n){
 			for(k=t; k<=i; k++)
 				printf("%c",s[k]);
			if(s[i]==',' && s[i+1]==' ')
 				t=i+2;
 			else{
 				t=i+1;
 				printf("\n");
 			}
		}
	}
	return 0;
}
1.27
int main(){
	int i, n;
	char s[MAX+1];
	printf("unesite string: ");
	gets(s);
	n=strlen(s);
	printf("novi string: ");
	for(i=0;i<n;i++)
		if(s[i]!=' ' && s[i]!='\t')
	printf("%c", s[i]);
	return 0;
}
1.28
void ukloni(char s[], char c){
	int i, j=0;
	for(i=0;s[i]!='\0';i++)
	if(s[i]!=c){
		s[j]=s[i];
		j++;
	}
	s[j]='\0';
}
int main(){
	char s[MAX+1], c;
	printf("unesite string: ");
	gets(s);
	printf("unesite karakter za uklanjanje: ");
	scanf("%c", &c);
	ukloni(s, c);
	printf("novi string: %s", s);
	return 0;
}
1.29
int main(){
	int i, n;
	char s[MAX+1];
	printf("unesite string: ");
	gets(s);
	n=strlen(s);
	for(i=n;i>=0;i--)
		printf("%c", s[i]);
	return 0;
}
1.30
int main(){
	int i, n;
	char pom, s[MAX+1];
	printf("unesite string: ");
	gets(s);
	n=strlen(s);
	pom=s[0];
	for(i=0;i<n-1;i++)
		s[i]=s[i+1];
	s[n-1]=pom;
	printf("pomereni string: ");
	puts(s);
	return 0;
}
1.31
int main(){
	int i, n;
	char pom[MAX+1], spisak[BROJ][MAX+1];
	printf("unesite broj stringova: ");
	scanf("%d", &n);
	getchar();
	printf("spisak: \n");
	for(i=0;i<n;i++)	
		gets(spisak[i]);
	strcpy(pom, spisak[0]);
	for(i=0; i<n-1; i++)
 		strcpy(spisak[i], spisak[i+1]);
 	strcpy(spisak[n-1], pom);
 	printf("\n Novi spisak:\n");
 	for(i=0; i<n; i++)
 		puts(spisak[i]); 
	return 0;
}
1.32
int main(){
	int i, n, k=0;
	char s[MAX+1];
	printf("unesite rec: ");
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
		if(s[i]!=s[n-i-1])
			k=1;
	if(k==0)
		printf("rec je palindrom");
	else
	printf("rec nije palindrom");
	return 0;
}
1.33
int main(){
	int i, j, n, brojacr, k;
	char s[MAX+1];
	printf("unesite recenicu: ");
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
		if(s[i]==' ')
			brojacr++;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(s[j]==' '){
				s[j]=s[j+1];
				s[j+1]=' ';
			}
		}
	n=n-brojacr-1;
	for(i=0;i<n;i++)
		if(s[i]!=s[n-i])
			k=1;
	if(k==0)
		printf("uneta recenica je palindrom");
	else
		printf("uneta recenica nije palindrom");
	return 0;
}
1.34
int main(){
	int i, j, n;
	char pom[MAX+1], ime[BROJ][MAX+1];
	printf("unesite broj imena: ");
	scanf("%d", &n);
	getchar();
	printf("spisak imena: \n");
	for(i=0;i<n;i++)
		gets(ime[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			if(strcmp(ime[i], ime[j]) > 0){
				strcpy(pom, ime[i]);
				strcpy(ime[i], ime[j]);
				strcpy(ime[j], pom);
			}
		}
	printf("sortirani niz: \n");
	for(i=0;i<n;i++)
		puts(ime[i]);
	return 0;
}
1.35
void sortiraj(char ime[][MAX], int n){
	int i, j;
	char pom[MAX];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			if(strcmp(ime[i], ime[j]) > 0){					//!!!!!!!!!!!!!!!!!!!!!!
				strcpy(pom, ime[i]);
				strcpy(ime[i], ime[j]);
				strcpy(ime[j], pom);
			}
		}
}
int main(){
	char ime[BROJ][MAX];
	int i, n, tekuci;
	printf("unesite broj imena: ");
	scanf("%d", &n);
	getchar();
	printf("unesite imena: \n");
	for(i=0;i<n;i++)
		gets(ime[i]);
	sortiraj(ime, n);
	printf("\nsortirani niz: \n");
	for(i=0;i<n;i++)
		puts(ime[i]);
	for(i=1, tekuci=0; i<n;){
 		while(strcmp(ime[tekuci],ime[i]) == 0)
 			i++;													//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 		strcpy(ime[++tekuci],ime[i]);
	}
	n=tekuci;
	printf("\nniz bez duplikata: \n");
	for(i=0;i<n;i++)
		puts(ime[i]);
	return 0;
}
4.3a
struct datum{
	int dan;
	int mesec;
	int godina;
};
int main(){
	struct datum danas;
	int d, m, g;
	printf("unesite dan: ");
	scanf("%d", &d);
	printf("unesite mesec: ");
	scanf("%d", &m);
	printf("unesite godinu: ");
	scanf("%d", &g);
	danas.dan=d;
	danas.mesec=m;
	danas.godina=g;
	printf("danasnji datum je: %d.%d.%d.", danas.dan, danas.mesec, danas.godina);
	return 0;
}
4.3b
struct licnost{
	char ime[MAX];
	char prezime[MAX];
	float plata;
};
int main(){
	struct licnost radnik;
	printf("unesite ime radnika: ");
	scanf("%s", &radnik.ime);
	printf("unesite prezime radnika: ");
	scanf("%s", &radnik.prezime);
	printf("unesite platu: ");
	scanf("%f", &radnik.plata);
	printf("radnik %s %s ima platu %f dinara", radnik.ime, radnik.prezime, radnik.plata);
	return 0;
}
4.4
struct licnost{
	char ime[MAX];
	char adresa[MAX];
	int starost;
};
int main(){
	struct licnost osoba1, osoba2, s;
	printf("prva osoba:\n");
	printf("unesite ime i prezime: ");
	gets(osoba1.ime);
	printf("unesite adresu: ");
	gets(osoba1.adresa);
	printf("unesite starost: ");
	scanf("%d", &osoba1.starost);
	while (getchar()!='\n');										//mora ovo!!!!!!!!!!!!!!!!!!
	printf("\ndruga osoba: \n");
	printf("unesite ime i prezime: ");
	gets(osoba2.ime);
	printf("unesite adresu osobe: ");
	gets(osoba2.adresa);
	printf("unesite starost: ");
	scanf("%d", &osoba2.starost);
	printf("\nstarija je osoba: \n");
	if(osoba1.starost>osoba2.starost)
		printf("%s, %s, %d godina", osoba1.ime, osoba1.adresa, osoba1.starost);
	else
		printf("%s, %s, %d godina", osoba2.ime, osoba2.adresa, osoba2.starost);
	return 0;
}
4.6
struct tacka{
	float x;
	float y;
};
double rastojanje(struct tacka t1, struct tacka t2){
	return sqrt((t1.x-t2.x)*(t1.x-t2.x)+(t1.y-t2.y)*(t1.y-t2.y));
}
void stampaj(struct tacka t){
	printf("[%.2f %.2f]\n", t.x, t.y);
}
int main(){
	struct tacka t1, t2;
	printf("unesite koordinate prve tacke (t1.x i t1.y): ");
	scanf("%f %f", &t1.x, &t1.y);
	printf("unesite koordinate druge tacke (t2.x i t2.y): ");
	scanf("%f %f", &t2.x, &t2.y);
	stampaj(t1);
	stampaj(t2);
	printf("d=%.2f", rastojanje(t1, t2));
	return 0;
}
4.7
struct datum{
	int dan, mesec, godina;
};
int main(){
	struct datum danas, sutra;
	int brdana[]={31,28,31,30,31,30,31,31,30,31,30,31};
	do{
		printf("unesite danasnji dan: ");
		scanf("%d", &danas.dan);
	}
	while(danas.dan<=0 || danas.dan>31);
	do{
		printf("unesite danasnji mesec: ");
		scanf("%d", &danas.mesec);
	}
	while(danas.mesec<0 || danas.mesec>12);
	do{
		printf("unesite danasnju godunu: ");
		scanf("%d", &danas.godina);
		if(danas.godina%4==0 && danas.godina%100!=0 || danas.godina/4==0)
			brdana[1]=28;
		else
			brdana[1]=29;
	}
	while(danas.godina<0);
	sutra=danas;
	sutra.dan++;
	if(sutra.dan>brdana[sutra.mesec-1]){
		sutra.dan=1;
		sutra.mesec++;
		if(sutra.mesec>12){								//nauciti dobro!!!!!!!!!!!!!!!!!!!!!!!!!!
			sutra.godina++;
			sutra.mesec=1;
		}
	}
	printf("sutrasnji datum: %d:%d:%d", sutra.dan, sutra.mesec, sutra.godina);
}
4.9
typedef struct{
	double re, im;
} KOMPL;
KOMPL zbir(KOMPL a, KOMPL b){
	a.re+=b.re;
	a.im+=b.im;
	return a;
}
KOMPL razlika(KOMPL a, KOMPL b){
	a.re-=b.re;
	a.im-=b.im;
	return a;
}
KOMPL proizvod(KOMPL a, KOMPL b){
	KOMPL c;
	c.re=a.re*b.re - a.im*b.im;
	c.im=a.im*b.re + a.re*b.im;
	return c;
}
KOMPL kolicnik(KOMPL a, KOMPL b){
	KOMPL c;
	double d;
	d=pow(b.re, 2)+pow(b.im, 2);
	c.re=(a.re*b.re + a.im*b.im)/d;
	c.im=(a.im*b.re - a.re*b.im)/d;
	return c;
}
int main(){
	KOMPL x, y, z;
	printf("unesite prvi broj: ");
	scanf("%lf %lf", &x.re, &x.im);
	printf("unesite drugi broj: ");
	scanf("%lf %lf", &y.re, &y.im);
	z=zbir(x, y);
	printf("x+y = %f %f\n", z.re, z.im);
	z=razlika(x, y);
	printf("x-y = %f %f\n", z.re, z.im);
	z=proizvod(x, y);
	printf("x*y = %f %f\n", z.re, z.im);
	z=kolicnik(x, y);
	printf("x/y = %f %f\n", z.re, z.im);
	return 0;
}
4.19
struct datum{
	int dan, mesec, godina;
};
int main(){
	struct datum niz[5];
	int i;
	for(i=0;i<5;i++){
		printf("unesite datum:\n");
		scanf("%d %d %d", &niz[i].dan, &niz[i].mesec, &niz[i].godina);
	}
	printf("\nuneti su datumi: \n");
	for(i=0;i<5;i++)
		printf("%d.%d.%d.\n", niz[i].dan, niz[i].mesec, niz[i].godina);
}
4.20
struct zaposleni{
	char ime[MAX];
	char prezime[MAX];
	char radnomesto[MAX];
	int plata;
};
int main(){
	struct zaposleni radnik[MAX];
	int i, n;
	printf("unesite broj radnika: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("unesite podatke o radniku %d:\n", i+1);
		printf("unesite ime radnika: ");
		scanf("%s", &radnik[i].ime);
		printf("unesite prezime radnika: ");
		scanf("%s", &radnik[i].prezime);
		printf("unesite radno mesto radnika: ");
		scanf("%s", &radnik[i].radnomesto);
		printf("unesite platu radnika: ");
		scanf("%d", &radnik[i].plata);
	}
	for(i=0;i<n;i++){
		printf("\n\npodaci o radniku:\n");
		printf("ime i prezime: %s %s\n", radnik[i].ime, radnik[i].prezime);
		printf("radno mesto: %s\n", radnik[i].radnomesto);
		printf("plata: %d\n", radnik[i].plata);
	}
	return 0;
}
4.21
struct tacke{
	int x, y;
};
int main(){
	struct tacke tacka[MAX];
	int i, n, kvrastojanja, maxrastojanja=0, pozicija, zbir=0;
	printf("unesite broj tacaka: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("unesite x koordinatu tacke: ");
		scanf("%d", &tacka[i].x);
		printf("unesite y koordinatu tacke: ");
		scanf("%d", &tacka[i].y);
	}
	for(i=0;i<n;i++){
		kvrastojanja=tacka[i].x*tacka[i].x+tacka[i].y*tacka[i].y;
		printf("kvadrat rastojanja je %d\n", kvrastojanja);
		if(kvrastojanja>maxrastojanja){
			maxrastojanja=kvrastojanja;
			pozicija=i;
		}
		zbir+=kvrastojanja;
	}
	printf("zbir kvadrata rastojanja je %d\n", zbir);
	printf("najudaljenija je tacka: %d %d\n", tacka[pozicija].x, tacka[pozicija].y);
	return 0;
}
4.22
typedef struct licnost{
	char ime[MAX];
	char adresa[MAX];
	int starost;
} LICNOST;
void citaj(LICNOST osoba){
	printf("unesite ime i prezime osobe: ");
	scanf("%s", &osoba.ime);
	printf("unesite adresu osobe: ");
	scanf("%s", &osoba.adresa);
	printf("unesite starost: ");
	scanf("%d", &osoba.starost);
	while (getchar()!='\n');
}
int main(){
	LICNOST osoba[MAX];
	int i, n;
	printf("unesite broj osoba: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("\nunesite podatke za osobu:\n");
		citaj(osoba[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)		
		printf("%s %s %d", osoba[i].ime, osoba[i].adresa, osoba[i].starost);		//ne radi printf!
	return 0;
}
4.23
typedef struct pesme{
	char naziv[MAX];
	char izvodjac[MAX];
	char album[MAX];
	int gizdanje;
} PESME;
void citaj(PESME pesma){
	printf("unesite naziv pesme: ");
	scanf("%s", &pesma.naziv);
	printf("unesite izvodjaca: ");
	scanf("%s", &pesma.izvodjac);
	printf("unesite album: ");
	scanf("%s", &pesma.album);
	printf("unesite godinu izdanja: ");
	scanf("%d", &pesma.gizdanje);
	while(getchar()!='\n');
}
int main(){
	PESME pesma[MAX];
	int i, n, s=0;
	printf("unesite broj pesama: ");
	scanf("%d", &n);
	while(getchar()!='\n');
	for(i=0;i<n;i++){
		printf("Unesite podatke o pesmi: \n");
		citaj(pesma[i]);
	}
	printf("\nunete su pesme: \n");
	for(i=0;i<n;i++){
		printf("%s, %s, %s, %d\n", pesma[i].naziv, pesma[i].izvodjac, pesma[i].album, pesma[i].gizdanje);
		if(pesma[i].gizdanje==2011) s++;
	}																//ne radi printf!!!!
	printf("ukupno pesama iz 2011 %d", s);
	return 0;
}
4.24
typedef struct studenti{
	char ime[MAX];
	char prezime[MAX];
	char brindexa[MAX];
	float prosek;
	int brprenetih;
} STUDENTI;
int main(){
	STUDENTI student[MAX];
	int i, n;
	float prosek=0;
	printf("unesite broj studenata: \n");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("podaci o studentu: \n");
		printf("unesite ime studenta: \n");
		scanf("%s", &student[i].ime);
		printf("unesite prezime studenta: \n");
		scanf("%s", &student[i].prezime);
		printf("unesite broj indeksa studenta: \n");
		scanf("%s", &student[i].brindexa);
		printf("unesite prosek studenta: \n");
		scanf("%f", &student[i].prosek);
		printf("unesite broj prenetih ispita studenta: \n");
		scanf("%d", &student[i].brprenetih);
	}
	printf("to su studenti: \n");
	for(i=0;i<n;i++){
		if(student[i].prosek>prosek)
			if(student[i].brprenetih<5)
				printf("%s %s", student[i].ime, student[i].prezime);
	}
	return 0;
}
4.25
typedef struct radnici{
	char ime[MAX];
	char prezime[MAX];
	float koeficijent;
	float plata;
} RADNICI;
int main(){
	RADNICI radnik[MAX];
	int i, n, rbr;
	float cenar, maxp;
	printf("unesite broj radnika: ");
	scanf("%d", &n);
	printf("unesite cenu rada: ");
	scanf("%f", &cenar);
	for(i=0;i<n;i++){
		printf("unesite podatke o radniku: \n");
		printf("unesite ime radnika: ");
		scanf("%s", &radnik[i].ime);
		printf("unesite prezime radnika: ");
		scanf("%s", &radnik[i].prezime);
		printf("unesite koeficijent radnika: ");
		scanf("%f", &radnik[i].koeficijent);
		radnik[i].plata=cenar*radnik[i].koeficijent;
		printf("plata radnika: %f\n", radnik[i].plata);
	}
	maxp=radnik[0].plata;
	for(i=0;i<n;i++){
		if(maxp<radnik[i].plata)
		maxp=radnik[i].plata;
		rbr=i;
	}
	printf("radnik sa najvecom platom je:\n");
	printf("%s %s, %f koef., %f plata", radnik[rbr].ime, 
			radnik[rbr].prezime, radnik[rbr].koeficijent, radnik[rbr].plata);
}
4.26??????????????????????????????????????????????????????????????????????????????????????????????
typedef struct radnici{
	char ime[MAX];
	char prezime[MAX];
	int brrsati;
	float plata;
} RADNICI;
int main(){
	RADNICI radnik[MAX];
	int i, n, sapovisicom=0;
	printf("unesite broj radnika: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("unesite podatke o radniku: \n");
		printf("unesite ime radnika: ");
		scanf("%s", &radnik[i].ime);
		printf("unesite prezime radnika: ");
		scanf("%s", &radnik[i].prezime);
		printf("unesite broj radnih sati radnika: ");
		scanf("%d", &radnik[i].brrsati);
		printf("unesite platu radnika: ");
		scanf("%f", &radnik[i].plata);
	}
	for(i=0;i<n;i++){
	if(radnik[i].brrsati>160 && radnik[i].brrsati<=180){
		radnik[i].plata+=radnik[i].plata*0.15;
		sapovisicom++;
	}																	//nije zavrsen????????
	if(radnik[i].brrsati>180)
		radnik[i].plata+=radnik[i].plata*0.20;
		sapovisicom++;
	}
	printf("\nukupno sa povisicom: %d", sapovisicom);
	return 0;
}
4.27
typedef struct osobe{
	char ime[MAX];
	int dan;
	int mesec;
	int god;
} OSOBE;
int main(){
	OSOBE Osoba[MAX];
	int i, n, h;
	printf("unesite broj osoba: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("unesite podatke o osobi: \n");
		printf("unesite ime i prezime: ");
		scanf("%s", &Osoba[i].ime);
		printf("unesite dan rodjenja: ");
		scanf("%d", &Osoba[i].dan);
		printf("unesite mesec rodjenja: ");
		scanf("%d", &Osoba[i].mesec);
		printf("unesite godinu rodjenja: ");
		scanf("%d", &Osoba[i].god);
	}
	printf("izaberiti horoskopski znak: \n");
	printf(" 1. OVAN\n 2. BIK\n 3. BLIZANCI\n 4. RAK\n 5. LAV\n 6. DEVICA");
	printf("\n 7. VAGA \n 8. SKORPIJA\n 9. STRELAC\n 10. JARAC\n 11. VODOLIJA\n 12. RIBE\n");
	printf("unesite redni broj horoskopskog znaka: ");
	scanf("%d", &h);
	for(i=0;i<n;i++){
		switch(h){
			case 1: if(Osoba[i].dan>21 && Osoba[i].dan<=31 && Osoba[i].mesec==3 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==4)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 2: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==4 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==5)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 3: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==5 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==6)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 4: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==6 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==7)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 5: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==7 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==8)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 6: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==8 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==9)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 7: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==9 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==10)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 8: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==10 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==11)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 9: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==11 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==12)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 10: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==12 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==1)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 11: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==1 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==2)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			case 12: if(Osoba[i].dan>21 && Osoba[i].dan<=30 && Osoba[i].mesec==2 ||
 						Osoba[i].dan>=1 && Osoba[i].dan<20 && Osoba[i].mesec==3)
 						printf(" %s,\t%d.%d.%d\n",
 						Osoba[i].ime, Osoba[i].dan, Osoba[i].mesec, Osoba[i].god);
 					break;
 			default: printf("greska");
 					break;
		}
	}
	return 0;
}
4.28
typedef struct studenti{
	char ime[MAX];
	char prezime[MAX];
	int ocena;
} STUDENTI;
int main(){
	int i, j, n;
	STUDENTI student[MAX], pom;									//pomocnu deklarisati u strukturi!!!!!!!!
	printf("unesite broj studenata: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("unesite studenta: \n");
		printf("unesite ime studenta: ");
		scanf("%s", &student[i].ime);
		printf("unesite prezime studenta: ");
		scanf("%s", &student[i].prezime);
		while(getchar()!='\n'); 
		printf("unesite ocenu studenta: ");
		scanf("%d", &student[i].ocena);
	}
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
			if(student[i].ocena<student[j].ocena){
				pom=student[i];
				student[i]=student[j];
				student[j]=pom;
			}
	printf("sortirani niz ocena: \n");
	for(i=0;i<n;i++)
		printf("%s %s, %d\n", student[i].ime, student[i].prezime, student[i].ocena);
	return 0;
}
4.29
typedef struct osobe{
	char ime[MAX];
	int starost;
} OSOBE;
int main(){
	OSOBE osoba[MAX], pom;
	int n, i, j;
	printf("unesite broj osoba: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("unesite osobu: \n");
		printf("unesite ime: ");
		scanf("%s", &osoba[i].ime);
		printf("unesite starost: ");
		scanf("%d", &osoba[i].starost);
	}
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
			if(strcmp(osoba[i].ime, osoba[j].ime)>0 ||
				(strcmp(osoba[i].ime, osoba[j].ime)==0 &&
				osoba[i].starost>osoba[j].starost)){
					strcpy(pom.ime, osoba[j].ime);							//safet
 					pom.starost = osoba[j].starost;						
 					strcpy(osoba[j].ime, osoba[i].ime);
 					osoba[j].starost = osoba[i].starost;					//????????????????????????
 					strcpy(osoba[i].ime, pom.ime);
 					osoba[i].starost = pom.starost;
			}
	printf("sortiran niz: \n");
 	for(i=0;i<n;i++)
 		printf(" %s %d\n", Osoba[i].ime, Osoba[i].starost);
	return 0;
}
5.1
int main(){
	int i, br;
	FILE *dato;
	dato=fopen("podaci.txt", "w");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	for(i=0;i<10;i++)
		fprintf(dato, "%d\n", i);
	fclose(dato);
	dato=fopen("podaci.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(dato, "%d", &br);
		if(feof(dato))
			break;
		printf("%d ", br);
	}
	fclose(dato);
	return 0;
}
5.2
int main(){
	FILE *dato;
	dato=fopen("podaci2.txt", "a");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	fprintf(dato, "\npozdrav svima");
	fclose(dato);
	return 0;
}
5.3
int main(){
	int broj, min, max;
	FILE *dato;
	dato=fopen("brojevi.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	fscanf(dato, "%d", &broj);
	min=broj;
	max=broj;
	while(fscanf(dato, "%d", &broj)!=EOF){
		if(broj<min) min=broj;
		if(broj>max) max=broj;
	}
	fclose(dato);
	printf("najmanji element je %d\n", min);
	printf("najveci element je %d", max);
	return 0;
}
5.4
int main(){
	int broj, i=1;
	FILE *a, *b;
	a=fopen("brojevistari.txt", "r");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	b=fopen("brojevinovi", "w");
	if(b==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(fscanf(a, "%d", &broj)!=EOF){
		if(i%2==0)
			fprintf(b, "%d", broj);
		else
			fprintf(b, "%d", 2*broj);
			i++;
	}
	fclose(a);
	fclose(b);
	return 0;
}
5.5
int main(){
	int broj, ind, pom, cif;
	FILE *a, *b;
	a=fopen("brojeviX.txt", "r");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	b=fopen("brojeviY.txt", "w");
	if(b=NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(fscanf(a, "%d", &broj)!=EOF){
		ind=1;
		pom=broj;
		while(pom!=0){
			cif=pom%10;								//ne radi????????????????
			if(cif!=3 && cif!=7)
				ind=0;
			pom/=10;
		}
		if(ind && broj!=0)	
			fprintf(b, "%d\n", broj);
	}
	fclose(a);
	fclose(b);
	return 0;
}
5.6
int main(){
	FILE *dato;
	dato=fopen("podaci6.txt", "w");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	fprintf(dato, "ovo je datoteka\n");
	fprintf(dato, "pozdrav svima\n");
	fprintf(dato, "%d + %d = %d\n", 123, 456, 123+456);
	fputc('A', dato);
	fputs("kraj datoteke\n", dato);
	fclose(dato);
	return 0;
}
5.7
int main(){
	FILE *dato;
	long znak;
	int brredova, brznakova;
	dato=fopen("podaci6.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while((znak=getc(dato))!=EOF){
		if(znak=='\n') brredova++;
		brznakova++;
	}
	fclose(dato);
	printf("broj znakova u datoteci %d\n", brznakova);
	printf("broj redova u datoteci %d", brredova);
	return 0;
}
5.8
int main(){
	char string[20];
	FILE *dato;
	dato=fopen("podaci6.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(fgets(string, 20, dato)!=NULL)
		puts(string);
	fclose(dato);
	return 0;
}
5.9a
int main(){
	char c;
	FILE *a, *b;
	a=fopen("podaci6.txt", "r");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	b=fopen("podaci6novo", "w");
	if(b==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while((c=fgetc(a))!=EOF)
		fputc(c, b);
	fclose(a);
	fclose(b);
	return 0;
}
5.9b
int main(){
	char string[MAX];
	FILE *a, *b;
	a=fopen("podaci6.txt", "r");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	b=fopen("podaci6novoo", "w");
	if(b==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(fgets(string, MAX, a)!=EOF)
		fputs(string, b);
	fclose(a);
	fclose(b);
	return 0;
}
5.10
int main(){
	int n, c, i;
	FILE *a, *b;
	a=fopen("podaci6.txt", "r");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	b=fopen("podaci6nnovo", "w");
	if(b==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	printf("unesite koliko puta zelite prepisati podatke: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		while((c=fgetc(a))!=EOF)
			fputc(c, b);
			rewind(a);
			fputc('\n', b); 
	}
	fclose(a);
	fclose(b);
	return 0;
}
5.11
int main(){
	char imea[MAX], imeb[MAX], znak;	
	FILE *a, *b;
	printf("unesite ime datoteke a");
	scanf("%s", &imea);
	printf("unesite ime doteteke b");
	scanf("%s", &imeb);
	a=fopen(imea, "r");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	b=fopen(imeb, "w");
	if(b==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while((znak=fgetc(a))!=EOF){
		if(znak=='a')	znak='A';
		fputc(znak, b);
	}
	fclose(a);
	fclose(b);
	return 0;
}
5.13
int main(){
	FILE *dato;
	dato=fopen("podaci.txt", "w");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	fputs("pozdrav svima", dato);
	fseek(dato, 10, SEEK_SET);
	fputs("etu", dato);
	fclose(dato);
	return 0;
}
5.14a
int main(){
	FILE *a, *b;
	int broj, i, suma=0;
	a=fopen("podaci1.txt", "w");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	printf("unesite 3 cela broja: \n");
	for(i=0;i<3;i++){
		scanf("%d", &broj);
		fprintf(a, "%d", broj);
	}
	fclose(a);	
	b=fopen("podaci1.txt", "r");
	if(b==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	for(i=0;i<3;i++){
		fscanf(b, "%d", &broj);
		suma+=broj;
	}
	printf("suma brojeva u datoteci je %d", suma);
	fclose(b);
	return 0;
}
5.14b
int main(){
	int i, broj, suma=0;
	FILE *a, *b;
	a=fopen("podaci2.txt","w");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	printf("unesite tri cela broja: \n");
	for(i=0;i<3;i++){
		scanf("%d", &broj);
		fwrite(&broj, sizeof(broj), 1, a);
	}
	fclose(a);
	b=fopen("podaci2.txt", "r");
	if(b==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	for(i=0;i<3;i++){
		fread(&broj, sizeof(int), 1, b);
		suma+=broj;
	}
	printf("suma brojeva datoteke je %d", broj);
	fclose(b);
	return 0;
}
5.15
int main(){
	FILE *dato;
	int ocena, brocena;
	float prosek;
	char ime[MAX];
	char prezime[MAX];
	dato=fopen("ocene.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(fscanf(dato, "%s", ime)!=EOF){
		fscanf(dato, "%s", prezime);
		brocena=0;
		prosek=0.0;
		while(!feof(dato) && fscanf(dato, "%d", &ocena)>0){
			brocena++;
			prosek+=ocena;
		}
		if(brocena>0)
			prosek/=brocena;
		printf("%s %s %f\n", ime, prezime, prosek);
	}
	fclose(dato);
	return 0;
}
5.16
int main(){
	FILE *ulaz, *izlaz;
	int i, n;
	double a[MAX], s, z=0;
	ulaz=fopen("ocene.txt", "r");
	if(ulaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	izlaz=fopen("ocenenove.txt", "w");
	if(izlaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(fscanf(ulaz, "%d", &n)>0){
		s=0;
		for(i=0;i<n;i++){
			fscanf(ulaz, "%lf", &a[i]);
			s+=a[i];
		}
		if(n)
			s/=n;
		z+=s;
		if(s>0){
			fprintf(izlaz, "%d ", n);
			for(i=0;i<n;i++)
				fprintf(izlaz, "%lf ", a[i]);
			fprintf(izlaz, "\n");
		}
	}
	fclose(ulaz);
	fclose(izlaz);
	printf("zbir srednjih vredosti %f", z);
	return 0;
}
5.18
int main(){
	int i, n;
	int a[MAX];
	FILE *dato1, *dato2, *dato3;
	char ime1[MAX], ime2[MAX], ime3[MAX];
	printf("unesite ime datoteke za sve brojeve");
	scanf("%s", &ime1);
	printf("unesite ime datoteke za pozitivne brojeve");
	scanf("%s", &ime2);
	printf("unesite ime datoteke za negativne brojeve");
	scanf("%s", &ime3);
	dato1=fopen(ime1, "w");
	dato2=fopen(ime2, "w");
	dato3=fopen(ime3, "w");
	if(dato1==NULL || dato2==NULL || dato3==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	printf("broj elemenata niza: ");
	scanf("%d", &n);
	printf("unesite elemente niza: ");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		fprintf(dato1, "%d", a[i]);
		if(a[i]>=0)
			fprintf(dato2, "%d", a[i]);
		else
			fprintf(dato3, "%d", a[i]);
	}
	fclose(dato1);
	fclose(dato2);
	fclose(dato3);
	return 0;
}
5.19
int main(){
	int i, j, m, n, a[MAX][MAX];
	FILE *dato;
	char ime[MAX];
	printf("unesite ime datoteke");
	scanf("%s", &ime);
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &m);
	printf("unesite broj kolona matrice: ");
	scanf("%d", &n);
	dato=fopen(ime, "w");
	if(dato=NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	fprintf(dato, "%d %d\n", m, n);
	printf("unesite elemente matrice: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
			fprintf(dato, "%d\t", a[i][j]);
		}
		fprintf(dato,"\n");
	}
	fclose(dato);
	printf("uneta je matrice: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d\t", a[i][j]);
			printf("\n");
	}
	return 0;
}
5.20
int main(){
	int i, j, m, n, a[MAX][MAX], max, imax, jmax;
	char ime1[MAX], ime2[MAX];
	FILE *dato;
	printf("unesite ime datoteke koja sadrzi podatke: ");
	scanf("%s", &ime1);
	printf("unesite ime datoteke koja se formira: ");
	scanf("%s", &ime2);
	dato=fopen(ime1, "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke: ");
		exit(1);
	}
	fscanf(dato, "%d %d", &m, &n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			fscanf(dato, "%d", &a[i][j]);
	fclose(dato);
	max=a[0][0];
	imax=jmax=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]>max){
				max=a[i][j];
				imax=i;
				jmax=j;
			}
	for(i=0;i<m;i++)
		for(j=jmax;j<n-1;j++)
			a[i][j]=a[i][j+1];
	n--;
	for(j=0;j<n;j++)
		for(i=imax;i<m-1;i++)
			a[i][j]=a[i+1][j];
	m--;
	dato=fopen(ime2, "w");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	fprintf(dato, "%d %d", m, n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			fprintf(dato, "%d ", a[i][j]);
			fputc('\n', dato);
	}
	fclose(dato);
	return 0;
}
5.21
int main(){
	int i, j, m, n, a[i][j], min, max, imin, imax, jmin, jmax, b;
	FILE *dato;
	char ime1[MAX], ime2[MAX];
	printf("unesite ime datoteke u kojoj se nalaze podaci: ");
	scanf("%s", ime1);
	printf("unesite ime datoteke koju zelite da formirate: ");
	scanf("%s", ime2);
	dato=fopen(ime1, "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	fscanf(dato, "%d %d", &m, &n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			fscanf(dato, "%d", &a[i][j]);
	fclose(dato);
	min=max=a[0][0];
	imin=imax=jmin=jmax=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]>max){
				max=a[i][j];
				imax=i;
				jmax=j;
			}
			else if(a[i][j]<min){
				min=a[i][j];
				imin=i;
				jmin=j;
			}
	for(i=0;i<m;i++){
		b=a[i][jmin];
		a[i][jmin]=a[i][jmax];
		a[i][jmax]=b;
	}
	for(j=0;j<n;j++){
		b=a[imin][j];
		a[imin][j]=a[imax][j];
		a[imax][j]=b;
	}
	dato=fopen(ime2, "w");
	if(dato==NULL){
		printf("greska prilikom otavaranja datoteke");
		exit(1);
	}
	fprintf(dato,"%d %d", m, n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			fprintf(dato, "%d", a[i][j]);
		fputc('\n', dato);
	}
	fclose(dato);
	return 0;
}
5.22
int main(){
	FILE *dato;
	int c, brznakova=0, brmalih=0;
	dato=fopen("tekst.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otavranja datoteke");
		exit(1);
	}
	while((c=getc(dato))!=EOF){
		putchar(c);
		if(c!=' ') brznakova++;
		if(c>='a' && c<='z' && c!='d') brmalih++;
	}
	printf("\nukupan broj znakova %d", brznakova);
	printf("\nukupan broj malih slova bez d %d", brmalih);
	fclose(dato);
	return 0;
}
5.23
int main(){
	int znak, brreci=0, brredova=1, brznakova=0;
	FILE *dato;
	dato=fopen("tekst.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while((znak=getc(dato))!=EOF){
		if(znak==' ' || znak=='\n' || znak=='\t')
			continue;
		brznakova++;											//radi
		else if(znak==' ') 	brreci++;							//ne moze ovako
		if(znak=='\n') brredova++;								//	  -II-
	}
	printf("broj znakova: %d", brznakova);
	printf("broj reci: %d", brreci);
	printf("broj redova: %d", brredova);
	fclose(dato);
	return 0;
}

////////////////////////////////////////////////ROKOVI/////////////////////////////////////////////////
main() { double poen_serv = 1.0, poen_smec=0.5, poen_blok= 0.2; double max_poeni = 0.0, poeni; 
char ime_i_prez[31], prezime[31], max_ime_i_prez[31]; 
unsigned visina, tezina, br_serv, br_smec, br_blok; 
FILE *ul_dat = fopen("odbojka.txt", "r");
	while (fscanf(ul_dat, "%s", ime_i_prez)!= EOF) { 
		fscanf(ul_dat, "%s", prezime); 
		strcat(ime_i_prez, " "); 
		strcat(ime_i_prez, prezime); 
		fscanf(ul_dat, "%d%d%d%d%d", &visina, &tezina, &br_serv, &br_smec, &br_blok); 
		poeni = poen_serv * br_serv + poen_smec * br_smec + poen_blok * br_blok; 
		if (max_poeni < poeni) max_poeni = poeni; strcpy(max_ime_i_prez, ime_i_prez); 
		fclose(ul_dat); 
		if (max_poeni > 0.0) 
		printf("mvp je %s, sa ostvarenih %lf poena\n", max_ime_i_prez, max_poeni);
}
	return 0;
}
//ispit januarski
//1.
int main(){
	int n, broj, brc, suma=0, pom;
	printf("unesite n: ");
	scanf("%d", &n);
	printf("unesite %d-cifren broj: \n", n);
	do{
		brc = 0;
		scanf("%d", &broj);
		pom = broj;
		while(pom > 0){
      		pom /= 10;
	  		brc++;	
		}
		if(brc != n){
  			printf("Broj nije %d-cifren",n);
  			break;	
		}
		suma+=broj;
	}
	while((broj/pow(10, n-1))<(broj%10));
	printf("suma brojeva iznosi: %d", suma);
	return 0;
}

//2. 

int kvar(int mat[MAX][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(mat[i][j]==2){
				if(i > 0){
					if(mat[i-1][j] > 0)
					  mat[i-1][j] = 2;
				}
				if(j > 0){
					if(mat[i][j-1] > 0)
					  mat[i][j-1] = 2;
				}
				if(i < m-1){
					if(mat[i+1][j] > 0)
					  mat[i+1][j] = 2;
				}
				if(i <n-1){
					if(mat[i][j+1]>0)
					  mat[i][j+1] = 2;
				}
				if(i > 0 && j > 0){
					if(mat[i-1][j-1] > 0)
					  mat[i-1][j-1] = 2;
				}
				if(i < m-1 && j > 0){
					if(mat[i+1][j-1] > 0)
					mat[i+1][j-1] = 2;
				}
				if(i > 0 && j < n-1){
					if(mat[i-1][j+1] > 0)
					  mat[i-1][j+1] = 2;
				}
				if(i < m-1 && j < n-1){
					if(mat[i+1][j+1] > 0)
					  mat[i+1][j+1] = 2;
				}
					
				}
	return mat;
}
int main(){
	int m, n, i, j, mat[MAX][MAX];
	printf("unesite broj vrsta matrice (m): ");
	scanf("%d", &m);
	printf("unesite broj kolona matrice (n): ");
	scanf("%d", &n);
	printf("unesite elemente matrice: \n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
	printf("uneta je matrica: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	kvar(mat, m, n);
	printf("\nposle jednog kvarenja: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d ", mat[i][j]);
			printf("\n");
	}
	return 0;
}*/

//3.
/*
typedef struct pacijent{
	int br;
	int mat[2][32];
} PACIJENT;
int main(){
	int brpacijenta, brzuba, i, j;
	PACIJENT p[100];
	char intervencija;
	FILE *datos, *datoi;
	datos=fopen("stanje.txt", "r");					// ili r+? 
	if(datos==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	datoi=fopen("intervencije.txt", "r");
	if(datoi==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	fscanf(datos, "%d", &brpacijenta);
	for(i=0;i<brpacijenta;i++){
	p[i].br = i;
	for(j=0;j<16;j++)
	  fscanf(datos, "%d", &p[i].mat[0][j]);
	 for(j=0;j<16;j++)
	  fscanf(datos, "%d", &p[i].mat[1][j]);   
	}
	fclose(datos);
	// treba proci kroz sve intervencije
	while(1){
    fscanf(datoi,"%d %d %c",&brpacijenta, &brzuba, &intervencija);
	if(intervencija == 'P')
	  if(brzuba > 16)
	    mat[1][brzuba % 16] = 1;
	  else
	   mat[0][brzuba] = 1;	
}
fclose(datoi);
datos = fopen("stanje.txt","w");
fprintf(datos,"%d\n",brpacijenta);
for(i=0;i<br;i++)
for(j=0;j<16;j++)
 fprintf(datos,"%d",p[i].mat[0][j]);
 for(j=0;j<16;j++)
 fprintf(datos,"%d",p[i].mat[1][j]);
}
fclose(datos);


//5.32
typedef struct artikli{
	int barkod;
	char ime[30];
	int cena;
} ARTIKLI;

int main(){
	ARTIKLI artikal[MAX];
	int i=0;
	FILE *dato;
	dato=fopen("proizvodi.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(dato, "%d %s %d", &artikal[i].barkod, &artikal[i].ime, &artikal[i].cena);
		if(feof(dato)) break;
		if(artikal[i].cena < 500){
			printf("%d %s %d\n", artikal[i].barkod, artikal[i].ime, artikal[i].cena);
			i++;
		}
	}
	fclose(dato);
	return 0;
}
5.33
typedef struct artikli{
	int barkod;
	char ime[30];
	float cena;
	float pdv;
} ARTIKLI;
int main(){
	ARTIKLI artikal[MAX];
	int i;
	FILE *dato, *dato1;
	dato=fopen("proizvodi.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	dato1=fopen("proizvodinovo.txt", "w");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(dato, "%d %s %f %f", artikal[i].barkod, artikal[i].ime, artikal[i].cena, artikal[i].pdv);
		if(feof(dato)) break;
		artikal[i].cena*=(1+artikal[i].pdv);
		fprintf(dato1, "%d %s %f\n", artikal[i].barkod, artikal[i].ime, artikal[i].cena);
		i++;
	}
	fclose(dato);
	fclose(dato1);
	return 0;
}
5.34
typedef struct igraci{
	char ime[MAX];
	int visina;
	int tezina;
	int brkos;		//broj koseva
	int bras; 		//broj asistencija
	int bruk;		//broj ukradenih lopti
	int brblok;		//broj blokada
	float ukupnop;  //ukupno poena
} IGRACI;
int main(){
	IGRACI igrac[MAX];
	IGRACI najbolji;
	int i, brigraca, brbodova=0;
	FILE *dato;
	dato=fopen("igraci.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(dato, "%s %d %d %d %d %d %d", &igrac[i].ime, &igrac[i].visina, &igrac[i].tezina, 
								&igrac[i].brkos, &igrac[i].bras, &igrac[i].bruk, &igrac[i].brblok);
		if(feof(dato)) break;
		brigraca++;
		igrac[i].ukupnop=igrac[i].brkos*1+igrac[i].bras*0.5+igrac[i].bruk*0.3+igrac[i].brblok*0.22;
		if(igrac[i].ukupnop>brbodova){
			brbodova=igrac[i].ukupnop;
			najbolji = i;
		}
		i++;
	}
	for(i=0;i<brigraca;i++)
		printf("%s %f\n", igrac[i].ime, igrac[i].ukupnop);
	printf("\n\n");
	printf("najbolji: %s %f", najbolji.ime, najbolji.ukupnop);
	return 0;
}
5.35
typedef struct gradjanin{
	char ime[30];
	char prezime[30];
} GRADJANIN;

void sortime(GRADJANIN *a, int n){
	int i, j;
	int min;
	GRADJANIN pom;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;i<n;j++)
			if(strcmp(a[j].ime, a[min].ime) < 0)
			min=j;
			if(min != i){
				pom=a[i];
				a[i]=a[min];
				a[min]=pom;
			}
	}
}
void sortprez(GRADJANIN a[], int n){
	int i, j;
	int min;
	GRADJANIN pom;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=j+1;j<n;j++)
			if(strcmp(a[j].prezime, a[min].prezime) < 0)
			min=j;
			if(min != i){
				pom=a[i];
				a[i]=a[min];
				a[min]=pom;
			}
	}
}
int main(){
	GRADJANIN spisak1[MAX], spisak2[MAX];
	int i, n;
	FILE *dato;
	dato=fopen("birackispisak.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	for(i=0; fscanf(dato, "%s %s", &spisak1[i].ime, &spisak1[i].prezime)!=EOF; i++)
		spisak2[i]=spisak1[i];
	n=i++;
	fclose(dato);
	sortime(spisak1, n);
	printf("uredjen prema imenima: \n");
	for(i=0;i<n;i++)
		printf("%d %s %s", i+1, spisak1[i].ime, spisak1[i].prezime);
	sortprez(spisak2, n);
	printf("uredjen prema prezimenima: \n");
	for(i=0;i<n;i++)
		printf("%d %s %s", i+1, spisak2[i].ime, spisak2[i].prezime);
	return 0;
}
5.36
typedef struct ucenici{
	char ime[30];
	char prezime[30];
	char adresa[30];
	int razred;
	int odeljenje;
} UCENICI;
int main(){
	UCENICI ucenik[MAX];
	int n, i, x;
	FILE *dato;
	dato=fopen("ucenik.txt", "w");
	if(dato==NULL){
		printf("greska prilikom otavranja datoteke");
		exit(1);
	}
	printf("unesite broj ucenika: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("\nunesite podatke za %d. ucenika", i+1);
		printf("\nunesite ime: ");
		scanf("%s", &ucenik[i].ime);
		printf("\nunesite prezime: ");
		scanf("%s", &ucenik[i].prezime);
		printf("\nunesite adresu: ");
		scanf("%s", &ucenik[i].adresa);
		printf("\nunesite razred: ");
		scanf("%d", &ucenik[i].razred);
		printf("\nunesite odeljenje: ");
		scanf("%d", &ucenik[i].odeljenje);
		fprintf(dato, "%s %s %s %d %d\n", ucenik[i].ime, ucenik[i].prezime, ucenik[i].adresa,
										ucenik[i].razred, ucenik[i].odeljenje);
	}
	fclose(dato);
	printf("unesite razred za pretragu: ");
	scanf("%d", &x);
	dato=fopen("ucenik.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	printf("ucenici u trazenom razredu: \n");
	for(i=0;i<n;i++){
		fscanf(dato, "%s %s %s %d %d", &ucenik[i].ime, &ucenik[i].prezime, &ucenik[i].adresa,
										&ucenik[i].razred, &ucenik[i].odeljenje);
		if(ucenik[i].razred==x)
			printf("%s %s %s %d %d\n", ucenik[i].ime, ucenik[i].prezime, ucenik[i].adresa,
									ucenik[i].razred, ucenik[i].odeljenje);
	}
}
5.37
typedef struct studenti{
	char ime[30];
	char prezime[30];
	int predavanja;
	int kolokvijum;
	int ispit;
	int ukupnop;
} STUDENTI;

int main(){
	FILE *is, *p, *n;
	STUDENTI student[10];
	int i, brp=0, brn=0;
	char ime1[30], ime2[30], ime3[30];
	printf("unesite ime datoteke u kojoj se nalaze podaci: ");
	scanf("%s", &ime1);
	printf("unesite ime datoteke u koju zelite ispisati studente koji su polozili: ");
	scanf("%s", &ime2);
	printf("unesite ime datoteke u koju zelite ispisati studente koji nisu polozili: ");
	scanf("%s", &ime3);
	is=fopen(ime1, "r");
	if(is==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	p=fopen(ime2, "w");
	if(p==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	n=fopen(ime3, "w");
	if(n==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	for(i=0;i<5;i++){
		fscanf(is, "%s %s %d %d %d", &student[i].ime, &student[i].prezime, &student[i].predavanja,
									&student[i].kolokvijum, &student[i].ispit);
		student[i].ukupnop = student[i].predavanja + student[i].kolokvijum + student[i].ispit;
		if(student[i].ukupnop > 50){
			fprintf(p, "%s %s %d\n", student[i].ime, student[i].prezime, student[i].ukupnop);
			brp++;
		}
		else
			fprintf(n, "%s %s %d\n", student[i].ime, student[i].prezime, student[i].ukupnop);
			brn++;
	}
	fclose(is);
	fclose(p);
	fclose(n);
	printf("broj koji su polozili %d", brp);
	printf("broj koji nisu polozili %d", brn);
}
5.38
typedef struct studenti{
	char ime[30];
	char prezime[30];
	int index;
	int sifra;
	int ocena;
} STUDENTI;

int main(){
	STUDENTI student[MAX];
	char ime1[30], ime2[30];
	int i, j, t, k=0, zbirocena, brstudenata, brisp, isti;
	int razlsifre[100];
	float prosek[100];
	FILE *ulaz, *izlaz;
	printf("unesite ime datoteke iz koje se citaju podaci: ");
	scanf("%s", &ime1);
	printf("unesite ime datoteke koju zelite kreirati: ");
	scanf("%s", &ime2);
	ulaz=fopen(ime1, "r");
	if(ulaz==NULL){
		printf("greska prilikom otavaranja datoteke");
		exit(1);
	}
	izlaz=fopen(ime2, "w");
	if(izlaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	i=0;
	while(1){
		fscanf(ulaz, "%s %s %d %d %d", &student[i].ime, &student[i].prezime, &student[i].index,
										&student[i].sifra, &student[i].ocena);
		if(feof(ulaz))	break;
		i++;							
	}
	brstudenata=i;
	fclose(ulaz);
	for(i=0;i<brstudenata-1;i++){
		isti=0;
		for(j=i+1;i<brstudenata;j++)
			if(student[i].sifra == student[j].sifra){
				isti=1;
				break;
			}
		if(!isti){
			razlsifre[k]=student[i].sifra;
			k++;
		}
	}
	razlsifre[k]=student[brstudenata-1].sifra;
	t=0;
	while(t<=k){
		zbirocena=0;
		brisp=0;
		for(i=0;i<=brstudenata;i++){
			if(student[i].sifra==razlsifre[t]){
				zbirocena+=student[i].ocena;
				brisp++;
			}
		}
		prosek[t]=(float)zbirocena/brisp;
		t++;
	}
	for(i=0;i<=k;i++)
		fprintf(izlaz, "%d %f", razlsifre[i], prosek[i]);
	fclose(izlaz);
	return 0;
}
5.39
typedef struct temperature{
	int datum;
	int m7;
	int m13;
	int m19;
} TEMPERATURE;

int main(){
	TEMPERATURE temp[10];
	FILE *ulaz, *izlaz;
	char ime1[20], ime2[20];
	int uk7, uk13, uk19, prosecnad[10], pr7, pr13, pr19, i, j, pom, pomd;
	printf("unesite ime datoteke u kojoj se nalaze podaci: ");
	scanf("%s", &ime1);
	printf("unesite ime datoteke koju zelite da formirate: ");
	scanf("%s", &ime2);
	ulaz=fopen(ime1, "r");
	if(ulaz==NULL){
		printf("greska prilikom otavaranja datoteke");
		exit(1);
	}
	izlaz=fopen(ime2, "w");
	if(izlaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	for(i=0;i<10;i++){
		fscanf(ulaz, "%d %d %d %d", temp[i].datum, temp[i].m7, temp[i].m13, temp[i].m19);
		uk7+=temp[i].m7;
		uk13+=temp[i].m13;
		uk19+=temp[i].m19;
		prosecnad[i]=(float)(temp[i].m7+temp[i].m13+temp[i].m19)/3;
	}
	pr7=(float)uk7/10;
	pr13=(float)uk13/10;
	pr19=(float)uk19/10;
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
			if(prosecnad[i] < prosecnad[j]){
				pom=prosecnad[i];
				pomd=temp[i].datum;
				prosecnad[i]=prosecnad[j];
				temp[i].datum=temp[j].datum;
				prosecnad[j]=pom;
				temp[j].datum=pomd;
			}
	for(i=0;i<10;i++)
		fprintf(izlaz, "%d %f", temp[i].datum, prosecnad[i]);
	fclose(ulaz);
	fclose(izlaz);
	printf("\nnajtopliji dan je %d. avgust sa temp od %f stepeni", temp[0].datum, prosecnad[0]);
	printf("\nnajhladniji dan je %d. avgust sa temp od %f stepeni", temp[9].datum, prosecnad[9]);
	printf("prosecna dnevna u 7h je %d", pr7);
	printf("prosecna dnevna u 13h je %d", pr13);
	printf("prosecna dnevna u 19h je %d", pr19);
	return 0;
}

//rokovi
//jun 2019
//1.
int main(){
	int i, n;
	printf("unesite broj koji zelite rastaviti na proste faktore: ");
	scanf("%d", &n);
	for(i=2;i<=n;i++){
		while(n%i==0){
			printf("%d ", i);
			n/=i;
		}
	}
	return 0;
}

//2.
void unos(float mat[MAX][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%f", &mat[i][j]);
}

void ispis(float mat[MAX][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%f ", mat[i][j]);
		printf("\n");
	}
}

int racunanje(float mat[MAX][MAX], int m, int n){
	int i, j, elemenata=0, pozi, br, pozj;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(i > 0 && j > 0 && i < m-1 && j < n-1){
				if(mat[i][j]==(mat[i][j+1]+mat[i][j-1]+mat[i-1][j]+mat[i+1][j])/4){
					printf("%f ", mat[i][j]);
					br++;
					
				}
			}
	return br;
}

int main(){
	float mat[MAX][MAX];
	int m, n;
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &m);
	printf("unesite broj kolona matrice: ");
	scanf("%d", &n);
	unos(mat, m, n);
	printf("%d", racunanje(mat, m, n));
	return 0;
}

//3.
typedef struct studenti{
	char ime[30];
	char prezime[30];
	int index;
	int sifra;
	int ocena;
} STUDENTI;
int main(){
	int brojst, isti, i, j, k, t, zbirOcena, brIsp;
	int razlicites[MAX];
	float prosek[MAX];
	STUDENTI student[MAX];
	FILE *ulaz, *izlaz;
	ulaz=fopen("studenti.txt","r");
	if(ulaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	izlaz=fopen("proseci.txt", "w");
	if(izlaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(ulaz, "%s %s%d %d %d", &student[i].ime, &student[i].prezime, &student[i].index,
										&student[i].sifra, &student[i].ocena);
		if(feof(ulaz)) break;
		i++;
	}
	brojst=i;
	fclose(ulaz);
	for(i=0;i<brojst-1;i++){
		isti=0;
		for(j=0;j<brojst;j++)
			if(student[i].sifra==student[j].sifra){
				isti=1;
				break;	
			}
		if(!isti){
			razlicites[k]=student[i].sifra;
			k++;
		}
	}
	razlicites[k]=student[brojst-1].sifra;
	t=0;
	while(t<=k){
		zbirOcena=0;
 		brIsp=0;
 		for(i=0; i<=brojst; i++){
 			if(student[i].sifra==razlicites[t]){
 				zbirOcena+=student[i].ocena;
 				brIsp++;
 			}
		}
 		prosek[t]=(float)zbirOcena/brIsp;
 		t++;
	}
	for(i=0;i<=k;i++)
		fprintf(izlaz, "%d %f", razlicites[i], prosek[i]);
	fclose(izlaz);
	return 0;
}

//april 2020
//1.
int main(){
	int m, n, pom, i;
	float suma;
	printf("unesite PRIRODAN broj m: ");
	scanf("%d", &m);
	while(m<=0){
		printf("unesite PRIRODAN broj m: ");
		scanf("%d", &m);
	}
	printf("unesite broj n: ");
	scanf("%d", &n);
	while(n<=0){
		printf("unesite broj n: ");
		scanf("%d", &n);
	}
	if(n<m){
		pom=n;
		n=m;
		m=pom;
	}
	for(i=m;i<n;i++){
		if(i%2!=0)
			suma+=sqrt(i);
	}
	printf("%f", suma);
	return 0;
}
//2.
int auta(int niz[], int n, int budzet){
	int i, k=0;
	for(i=0;i<n;i++){
		if(niz[i]<budzet)								//?????????????????????
			budzet-=niz[i];
			k++;
	}
	return k;
}

int main(){
	int niz[MAX], i, n, budzet;
	printf("unesite broj automobila u nizu: ");
	scanf("%d", &n);
	printf("unesite cene automobila: ");
	for(i=0;i<n;i++)
		scanf("%d", &niz[i]);
	printf("unesite svoj budzet: ");
	scanf("%d", &budzet);
	printf("mozete kupiti %d auta", auta(niz, n, budzet));
	return 0;
}
//3.
typedef struct stanovi{
	int brstana;
	int pov;
	int cena;
	int brsoba;
	int free;
} STANOVI;
int main(){
	STANOVI stan[MAX];
	int i, k, max, soba;
	FILE *ulaz, *izlaz;
	ulaz=fopen("stanovi.txt", "r");
	if(ulaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(ulaz, "%d %d %d %d %d", &stan[i].brstana, &stan[i].pov, &stan[i].cena, &stan[i].brsoba,
										&stan[i].free);
		if(feof(ulaz)) break;
		k++;
		i++;
	}
	fclose(ulaz);
	for(i=0;i<k;i++){
		printf("%d. stan: %d %d %d %d %d\n", i+1, stan[i].brstana, stan[i].pov, stan[i].cena, stan[i].brsoba,
											stan[i].free);
	}
	izlaz=fopen("na-prodaju.txt", "w");
	if(izlaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	if(stan[i].free==1){
		fprintf(izlaz, "%d. stan: %d %d %d %d %d", i+1, stan[i].brstana, stan[i].pov, stan[i].cena, 
													stan[i].brsoba);
		i++;
	}
	fclose(izlaz);
	printf("unesite max cenu stana: ");
	scanf("%d", &max);
	printf("unesite broj soba: ");
	scanf("%d", &soba);
	izlaz=fopen("na-prodaju.txt", "r");
	while(1){
		fscanf(izlaz, "%d %d %d %d", &stan[i].brstana, &stan[i].pov, &stan[i].cena, &stan[i].brsoba);
		i++;
	}
	if(max<=stan[i].cena && soba==stan[i].brsoba){
		printf("postoji takav stan");
		i++;
	}
	else
		printf("ne postoji takav stan");
	fclose(izlaz);
}

//jul 2021
//1.
int main(){
	int n;
	printf("unesite broj n: ");									//!!!!!!!!!!!!!!
	scanf("%d", &n);		
	
}*/
//2.

//3. 
/*
typedef struct studenti{
	int index;
	char ime[30];
	char prezime[30];
	char departman[30];
	char program[30];
	char godina[30];
	float prosek;
} STUDENTI;
int main(){
	STUDENTI student[MAX];
	FILE *dato;
	char sprogram, gstudija;
	int i, s;
	dato=fopen("dunp.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(dato, "%d %s %s %s %s %s %f", &student[i].index, &student[i].ime, &student[i].prezime,
												&student[i].departman, &student[i].program, 
												&student[i].godina, &student[i].prosek);
		if(feof(dato)) break;
		s++;
		i++;
	}
	fclose(dato);
	printf("unesite studijski program: ");
	scanf("%s", &sprogram);
	printf("unesite godinu studija");
	scanf("%s", &gstudija);
	if(student[i].program==sprogram && student[i].godina==gstudija){
		printf("%s\n", student[i].departman);
		printf("%s\n", student[i].program);
		printf("%s\n", student[i].godina);
		printf("spisak studenata: \n");
		i++;
		for(i=0;i<s;i++){
			printf("%d %s %s %f", student[i].index, student[i].ime, student[i].prezime, student[i].prosek);
		}
		}
	return 0;
}
//januar 2020
//1.
int main(){
	int max, n, i, s;
	printf("unesite max sumu: ");
	scanf("%d", &max);
	printf("unesite brojeve: ");
	do{
		scanf("%d", &n);
		for(i=2;i<n;i++){
			if(n%i!=0){
				s+=n;
			}
		}
	}
	while(s<max);
	printf("%d", s);
	return 0;
}

//2.
int najkv(int mat[MAX][MAX], int n, int m){
	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			
	return 0;
}
int main(){
	int n, m, i, j, mat[MAX][MAX];
	printf("unesite broj vrsta matrice: ");
	scanf("%d", &n);
	printf("unesite broj kolona matrice: ");
	scanf("%d", &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &mat[i][j]);
	
	return 0;
}
// jul 2019 
//3.
typedef struct RADNICI{
	char ime[30];
	char prezime[30];
	float plata;
	char zanimanje[1];
	float nplata;
} RADNICI;
int main(){
	int i, br, poz;
	FILE *ulaz, *izlaz;
	RADNICI radnik[MAX];
	ulaz=fopen("radnici.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(ulaz, "%s %s %f %s", &radnik[i].ime, &radnik[i].prezime, &radnik[i].plata, 
									&radnik[i].zanimanje);
		if(feof(ulaz)) break;
		br++;
		i++;
	}
	for(i=0;i<br;i++){
		if(radnik[i].zanimanje=='H'){
			radnik[i].nplata=radnik[i].plata*0.2-radnik[i].plata*0.17;
		}
		if(radnik[i].zanimanje=='O'){
			radnik[i].nplata=radnik[i].plata*0.2-radnik[i].plata*0.15;
		}
		if(radnik[i].zanimanje=='U'){
			radnik[i].nplata=radnik[i].plata*0.2-radnik[i].plata*0.10;
		}
	}
	for(i=0;i<br;i++){
		radnik[i].nplata=max;
		if(radnik[i].nplata>max){
			max=radnik[i].nplata;
			poz=i;
		}
	}
	fclose(ulaz);
	izlaz=fopen("plate-radnika.dat", "w");
	if(izlaz=NULL){
		printf("greska prilikom otavaranja datoteke");
		exit(1);
	}
	for(i=0;i<br;i++){
		fprintf(izlaz, "%s %s %f", radnik[i].ime, radnik[i].prezime, radnik[i].nplata);
	}
	fclose(izlaz);
	printf("radnik sa najvecom platom: %s %s %f", radnik[poz].ime, radnik[poz].prezime, radnik[poz].nplata);
	return 0;
}

//februar 2020
//2.
void unos(int mat[MAX][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &mat[i][j]);
}
int max(int mat[MAX][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			s[i]+=mat[i][j];
		}
	for(i=0;i<m-1;i++)
		max=s[i];
		for(k=i+1;k<m;k++){
			if(s[i]<s[k]){
				s[k]=max;
			}
		}
}
int main(){
	int m, n, mat[MAX][MAX];
	return 0;
}

int main(){
	int i, n, nizA[MAX], nizB[MAX], nizC[MAX];
	printf("unesite broj elemenata niza");
	scanf("%d", &n);
	printf("unesite elemente niza a: \n");
	for(i=0;i<n;i++)
		scanf("%d", &nizA[i]);
	printf("unesite elemente niza b: \n");
	for(i=0;i<n;i++)
		scanf("%d", &nizB[i]);
	for(i=0;i<(2*n);i+=2){
		nizC[i]=nizA[i];
	}
	for(i=1;i<(2*n);i+=2){
		nizC[i]=nizB[i];
	}
	printf("elementi niza c: \n");
	for(i=0;i<(2*n);i++)
		printf("%d", nizC[i]);
	return 0;
}

int main(){
	int dan, mesec, godina, brdana;
	printf("unesite danasnji datum: \n");
	scanf("%d %d %d", &dan, &mesec, &godina);
	dan++;
	brdana=31;
	if(mesec==4 || mesec==6 || mesec==9 || mesec==11)
		brdana=30;
	else if(mesec==2){
		if(godina%4==0 && godina%100!=0 || godina%400==0)
			brdana=29;
		else
			brdana=28;
	}
	if(dan>brdana){
		mesec++;
		dan=1;
	}
	if(mesec>12){
		godina++;
		mesec=1;
	}
	printf("sutrasnji datum je %d %d %d", dan, mesec, godina);
	return 0;
}

//Napisati program kojim se za zadate nizove a[1], a[2], …, a[n] i
//b[1], b[2], …, b[n] izraèunava a[1]*b[n]+a[2]*b[n-1]+…+a[n]*b[1].

int main(){
	int i, nizA[MAX], z=0, n,  nizB[MAX];
	printf("unesite duzinu nizova: ");
	scanf("%d", &n);
	printf("unesite el prvog niza: \n");
	for(i=0;i<n;i++){
		scanf("%d", &nizA[i]);
	}
	printf("unesite el drugog niza: \n");
	for(i=0;i<n;i++){
		scanf("%d", &nizB[i]);
	}
	for(i=0;i<n;i++){
		z+=nizA[i]*nizB[(n-1)-i];
	}
	printf("%d", z);
	return 0;
}

typedef struct studenti{
	int brindeksa;
	char ime[10];
	char prezime[10];
}STUDENTI;
typedef struct poeni{
	int brindeksa;
	int poeni;
}POENI;

int main(){
	FILE *a, *b, *c;
	int i=0, br=0;
	STUDENTI student[MAX];
	POENI p[MAX];
	a=fopen("studenti.txt", "r");
	if(a==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	b=fopen("poeni.txt", "r");
	if(b==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	c=fopen("rezultati.txt", "w");
	if(c==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(a, "%d %s %s", &student[i].brindeksa, &student[i].ime, &student[i].prezime);
		if(feof(a)) break;
		i++;
	}
	i=0;
	while(1){
		fscanf(b, "%d %d", &p[i].brindeksa, &p[i].poeni);
		if(feof(b)) break;
		i++;
	}
	for(j=0;j<i;j++){
		fprintf(c, "%d %s %s %d", student[j].brindeksa, student[j].ime, student[j].prezime, p[j].poeni);
	}
	return 0;
}
//5.10
int main(){
	int i=0;
	float x, s=0, as;
	while(1){
		scanf("%d", &x);
		if(x==0){
			as=s/(float)i;
			printf("arit. sredina unetih brojeva iznosi %f", as);
		}
		if(x>=2 && x<=6){
			s+=x;
			i++;
		}
	}
	return 0;
}
//5.11
int main(){
	int m, n,b, i, brojilac=1, imenilac=1;
	while(n>m || n<1 || m<1){
		printf("unesite m i n (m>n)");
		scanf("%d %d", &m, &n);
	}
	for(i=m;i>m-n;i++){
		brojilac*=i;
	}
	for(i=1;i<=n;i++){
		imenilac*=i;
	}
	b=brojilac/imenilac;
	printf("b=%d", b);
	return 0;
}
//5.32
typedef struct artikli{
	int barKod;
	char ime[20];
	float cena;
}ARTIKLI;
int main(){
	ARTIKLI artikal[MAX];
	int i=0;
	FILE *dato;
	dato=fopen("proizvodi.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(dato, "%d %s %f", &artikal[i].barKod, &artikal[i].ime, &artikal[i].cena);
		if(feof(dato)) break;
		if(artikal[i].cena<500){
			printf("%d %s %f", artikal[i].barKod, artikal[i].ime, artikal[i].cena);
		}
		i++;
	}
	fclose(dato);
	return 0;
}

//5.33
typedef struct proizvodi{
	int barKod;
	char ime[20];
	float cena;
	float pdv;
}PROIZVODI;
int main(){
	PROIZVODI proizvod[MAX];
	int i=0;
	FILE *ulaz, *izlaz;
	ulaz=fopen("proizvodi.txt", "r");
	izlaz=fopen("proizvodi_novo.txt", "w");
	if(ulaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	if(izlaz==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(ulaz, "%d %s %f %f", &proizvod[i].barKod, &proizvod[i].ime, &proizvod[i].cena,
									&proizvod[i].pdv);
		if(feof(ulaz)) break;
		proizvod[i].cena*=(1+proizvod[i].pdv);
		fprintf(izlaz, "%d %s %f %f", proizvod[i].barKod, proizvod[i].ime, proizvod[i].cena);
		i++;	
	}
	fclose(ulaz);
	fclose(izlaz);
	return 0;
}

//5.34
typedef struct igraci{
	char ime[20];
	int visina;
	int tezina;
	int brKos;
	int brAsis;
	int brUkrLop;
	int brBlok;
	float ukPoena;
}IGRACI;
int main(){
	IGRACI igrac[MAX];
	int i=0, br=0, brPoena=0, najbolji=0;
	FILE *dato;
	dato=fopen("igraci.txt", "r");
	if(dato==NULL){
		printf("greska prilikom otvaranja datoteke");
		exit(1);
	}
	while(1){
		fscanf(dato, "%s %d %d %d %d %d %d", &igrac[i].ime, &igrac[i].visina, &igrac[i].tezina,
							&igrac[i].brKos, &igrac[i].brAsis, &igrac[i].brUkrLop, &igrac[i].brBlok);
		if(feof(dato)) break;
		igrac[i].ukPoena=igrac[i].brKos*1+igrac[i].brAsis*0.5+igrac[i].brUkrLop*0.3
							+igrac[i].brBlok*0.22;
		i++;
		br++;
	}
	for(i=0;i<br;i++){
		if(igrac[i].ukPoena>brPoena){
			brPoena=igrac[i].ukPoena;
			najbolji=i;
		}
	}
	printf("najbolji je %s", igrac[najbolji].ime);
	fclose(dato);
	return 0;
}

//5.35
int main(){
	int broj, posl, prva, s=0, temp;
	while(1){
		scanf("%d", &broj);
		prva=broj%10;
		temp=broj;
		while(temp>9){
			posl/=10;
			if(temp<10){
				posl=temp;
			}
		}
	if(prva>=posl){
		s+=broj;
	
	}
	else{
		printf("greska");
	}
	}
	printf("%d", s);
	
}
*/
