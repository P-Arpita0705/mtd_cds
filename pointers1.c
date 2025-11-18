#include<stdio.h>

int main()
{
    float price=22.5f;
    printf("Value of price: %.2f\n",price);
    printf("Address of price: %u\n",&price);
    printf("Value of price: %.2f\n",*(&price));
    return 0;
}