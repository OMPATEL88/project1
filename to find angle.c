#include<stdio.h>
#define Z 180
main(){
	float a,b,c;
	printf("what is angle(a):");
	scanf("%f",&a);
	printf("what is angle(b):");
	scanf("%f",&b);
	c = a+b-Z;
	printf("angle(c) is :%f",c);
}
