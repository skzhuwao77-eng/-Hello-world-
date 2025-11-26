#include<stdio.h>
#include<math.h>
int main ()
{
	int p,t,r,si,ci;
	printf("Enter p t r values\n");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	ci=p*pow(1+r/100,t)-p;
	printf("si=%d\n ci=%d",si,ci);
	return 0;
}
