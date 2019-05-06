#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z=fib(5);
    printf("%d ",z);
    return 0;
}
int fib(int index){
    int a,b;
if(index<=0)
        return 0;

if(index<=1){
    return index;
}

    a=fib(index-1);
   // printf("%d ",a);

    b=fib(index-2);
        //printf("\n");
    //printf("%d ",b);

 return a+b ;


}

