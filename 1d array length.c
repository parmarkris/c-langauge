#include<stdio.h>

main()
{
	int a[]={1,2,3,4,5,6},i;

	
	for(i=0;i<6;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	printf("sizeof=%d",sizeof(a)/sizeof(a[0]));
	
}
