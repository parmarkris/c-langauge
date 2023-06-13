#include<stdio.h>

main()
{
	int a[3][3]={{1,2,3},
	             {4,5,6},
				 {7,8,9},};
	int i,j,sum=0;
	
	for(i=0;i<=2;i++)
	{
	  for(j=0;j<=2;j++)
	  {
         printf("%d",a[i][j]);	
	  }
	  printf("\n");  
    }
    
    sum=a[0][0]+a[1][1]+a[2][2];
    
    printf("sum of daigonal row=%d",sum);

}
