#include <stdio.h>

void calculateBilling(){
    //input total hour
    int hour;   
    printf("Input total hour:\n");
    scanf("%d", &hour);

    double pricePerHour = 10000, discountPercentage = 0, priceAfterDiscount;
    double priceBeforeDiscount = hour * pricePerHour;

    if(hour >= 0 && hour <=4){
        discountPercentage;
    } else if(hour > 4 && hour <= 6){
        discountPercentage = 0.1;
    } else if(hour > 6 && hour <= 8 ){
        discountPercentage = 0.15;
    } else if(hour > 8 && hour <= 10){
        discountPercentage = 0.2;
    } else{
        discountPercentage = 0.25;
    }

    priceAfterDiscount = priceBeforeDiscount * (1 - discountPercentage);
    printf("total hour: %d\n",hour);
    printf("total price before discount: Rp%.2f\n",priceBeforeDiscount);
    printf("total discount: %.2f%%, (Rp%.2f)\n",discountPercentage, priceBeforeDiscount * discountPercentage);
    printf("total price after discount: Rp%.2f\n",priceAfterDiscount);




}