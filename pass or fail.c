#include<stdio.h>
int main ()
{
	int m;
	printf("ENTER MARK\n");
	scanf("%d",&m);
	if (m >= 35 && m <= 100)
	printf("PASS");
	else
	if (m < 35 && m >= 0)
	printf("FAIL");
	else
	printf("INVALID");
	return 0;
}
