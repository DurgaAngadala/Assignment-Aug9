#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char arg;
	while(1)
	{
		printf("a.add\ns.sub\n");
		scanf("%c",&arg);
		switch(arg)
		{
			case 'a':
				printf("\nenter two digits:");
				scanf("\n%d %d",&i,&j);
				printf("\nThe sum is:%d\n",i+j);
				break;
			case 's':
				printf("\nenter two digits:");
				scanf("\n%d %d",&i,&j);
				printf("\nThe difference is:%d\n",i-j);
				break;
			default:
				printf("No action\n");
				break;
		}
	}
	return 0;
}
OUTPUT:
a.add
s.sub
1

enter two digits:4 2

The sum is:6
a.add
s.sub
2

enter two digits:4 2

The difference is:2
a.add
s.sub