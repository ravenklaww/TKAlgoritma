#include "billing.h"
#include <stdio.h>

void calculateBilling(){

    //input total hour
    int hour;
    printf("input total hour\n");
    scanf("%d",&hour);

    double pricePerHour = 10000;
    double price = hour * pricePerHour;

    if (hour > 4){

        int discountPercentage = 0;

        if (hour > 4 && hour < 6){
            discountPercentage = 10;
        }else if (hour > 6 && hour < 8){
            discountPercentage = 15;
        }else if (hour > 8){
            discountPercentage = 20;
        }
        printf("got discount %d %%\n",discountPercentage);
        price = price * ((100.0 - (double) discountPercentage) / 100.0);
    }

    printf("total hour : %d\n",hour);
    printf("total price : %.3f\n",price);
}