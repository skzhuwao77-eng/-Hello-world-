#include<stdio.h>
int main () {
	int a,b,c;
	printf("Enter 2 Values:");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise AND :%d\n",c);
	c=a|b;
	printf("Bitwise OR :%d\n",c);
	c=a^b;
	printf("Bitwise Ex-OR :%d\n",c);
	c=a<<b;
	printf("Bitwise Left Shift :%d\n",c);
	c=a>>b;
	printf("Bitwise Right Shift :%d\n",c);
	return 0;


}
