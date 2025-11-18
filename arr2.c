#include <stdio.h>
int main(int argCount, char **args)
{
double arr[9]={2.0};
int n=0;
printf("Address of 1st element = %u\n",arr);
printf("Address of 3rd element = %u\n",arr+2);
printf("Value of 3rd element = %u\n",*(arr+2));
printf("Address of array = %u\n",&arr);
printf("Address of next array = %u\n",&arr+1);
}