#include <stdio.h>
float discont(float price,int percent);

int main()
{
    int percentageOff;
    scanf("%i",&percentageOff);
    
    float regularPrice;
    scanf("%f",& regularPrice );
    float newPrice= discont(regularPrice,percentageOff);
    printf("price:%.2f\n",newPrice);
    
}

float discont( float Price, int percent ){
    return Price* (100-percent)/100;
}