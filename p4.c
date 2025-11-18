#include <stdio.h>
int main(int argCount, char **args)
{
    int num=25;
    printf("%u %u %u %u\n",&num-1,&num,&num+1,&num+2);
    
}