#include<stdio.h>
int main()
{
	int a[10], n,i,pos,nv;
	printf("ENTER %d VALUES\n",n);
	scanf("%d",&n);
	printf("ENTER %d ELEMENTS\n",n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("ENTER INDEX PLACE\n",n);
		scanf("%d",&pos);
		printf("ENTER NEW VALUE\n",n);
			scanf("%d",&nv);
			a[pos]=nv;
			printf("THE UPDATED ARRAY IS:\n",n);
	for (i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;

 }
