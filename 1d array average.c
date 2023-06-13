#include<stdio.h>

main()
{
	int a[100],sum=0,avg,i,n;
	
	printf("enter value of array");
	scanf("%d",&n);
	
	printf("array elements=");	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	
	printf("average=%d",avg);
	
}
