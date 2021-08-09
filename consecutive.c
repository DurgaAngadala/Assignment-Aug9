#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	printf("Enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
	}
	return 0;
}

OUTPUT:
Enter n value:3
122333
Enter n value:4 
1223334444