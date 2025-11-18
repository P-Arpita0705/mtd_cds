#include <stdio.h>
int main(int argCount, char **args)
{
    int num=25;
    int* p=num;
    printf("%u %u %u %u\n",p-1,p,p+1,p+2);
    
}