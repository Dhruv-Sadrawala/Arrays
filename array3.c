#include <stdio.h>
void main(){
	int n,i,a[20],count=1;;

	printf("Enter the size\n");
	scanf("%d",&n);

	for (i = 0; i < n; i++)
	{
		printf("Enter the marks %d\n",i+1);
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n; i++)
	{  
		if (a[i]%2!=0)
		{
			printf("a[%d]=%d\n",i+1,a[i]);

		}
		
	}
	printf("count is %d\n",count++ );
}