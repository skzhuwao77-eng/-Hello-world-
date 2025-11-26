#include<stdio.h>
int main()
{
	int n;
	printf("ENTER A 5-DIGIT NUMBER: ");
	scanf("%d",&n);
	int sum = 0;
	while(n !=0)
	{
		sum = sum+n%10;
		n= n/10;
	}
	printf("Digit sum: %d", sum);
}
	

