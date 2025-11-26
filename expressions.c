#include<stdio.h>
int main ()
{
	int a,b,i,j;
	float c;
	double d,e;
	scanf("%d%d%f%1f",&a,&b,&c,&d);
	e=((float)a / b * c) -(float) b + ((float)a * d / 3);
	printf("e=%1f\n",e);
	return 0;
}

