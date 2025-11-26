#include<stdio.h>
int main()
{
	int n, rem;
	printf("ENTER A 5-DIGIT NUMBER: ");
	scanf("%d",&n);
	int sum = 0;
	while(n !=0)
	{
		rem=n%10;
		sum = sum;
		n= n/10;
	}
	printf("Digit sum: %d", sum);
}
	

