#include<stdio.h>

int main()
{
    int n = 20, m = 0;
    m = (int) &n;
    printf("%u  %u  %u  %u\n",&n-1,&n,&n+1,&n+2);
    printf("%u  %u  %u  %u",m-1,m,m+1,m+2);
}