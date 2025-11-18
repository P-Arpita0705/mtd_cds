#include<stdio.h>
int main()
{
    int n=20;
    printf("%d  %d  %d  %d\n",n-1,n,n+1,n+2);
    printf("%u  %u  %u  %u",&n-1,&n,&n+1,&n+2);
    return 0;
}