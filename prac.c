#include <stdio.h>
int main()
{
	int a[10],mid,i,n,l,h,key,f=0;
	printf("ENTER NUMBER OF ELEMENTS FOR ARRAY\n");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	l=0,h=n-1;
	while(l<=h)
	{
		if(key==a[mid])
		{
	f++;
	printf("%d found at %d postion",key,mid);
}
		else if(key<=a[mid])
		h=mid-1;
		else
		l=mid+1;
	}
	if (!f)
	printf("%d Mot Found",key);
	return 0;
}
