#include<stdio.h>
int main()
{
	int age;
	printf("ENTER AGE\n");
	scanf("%d",&age);
	if (age >= 18)
	printf("ELIGIBLE");
	else
	printf("NOT ELIGIBLE");
	return 0;
}
