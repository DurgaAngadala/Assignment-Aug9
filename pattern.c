#include <stdio.h>

int main()
{
    int n;
    printf("Enter height: ");
    scanf("%d", &n);
    int counter, rowNumber;
    for(rowNumber = 0; rowNumber < n; rowNumber++)
    {
        for(counter = 0; counter < n - rowNumber; counter++)
            printf(" ");
            printf("/");
        for(counter = 0; counter < rowNumber; counter++)
            if(rowNumber >= 1)
                for(counter = 0; counter < rowNumber*2; counter++)
                {
                    if(rowNumber == n-1)
                    {
                        printf("_");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\\");
                printf("\n");
    }
    return 0;
}

OUTPUT:
Enter height: 5
     /\
    /  \
   /    \
  /      \
 /____\
     

