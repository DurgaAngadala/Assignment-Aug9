break:
#include<stdio.h>
int main(){
    register int i=0;
    int j,sum;
    printf("enter the 10 numbers");
    for(;i<=10;i++){
     scanf("%d",&j);
     if(j<0)
     break;
     else
     sum+=j;
    }
    printf("sum = %d",sum);
    
    
    return 0;
}
output:
enter the 10 numbers1
2
3
4
5
6
7
8
9  
10
99
sum = 154

continue:

#include<stdio.h>
int main(){
    register int i=0;
    int j,sum;
    printf("enter the 10 numbers");
    for(;i<=10;i++){
     scanf("%d",&j);
     if(j<0)
        continue;
     else
     sum+=j;
    }
    printf("sum = %d",sum);
    
    
    return 0;
}
OUTPUT:
enter the 10 numbers 
1
2
1
-1
1
2
3
4
6
1
1
sum = 22