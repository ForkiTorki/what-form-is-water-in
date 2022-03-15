#include<stdio.h>
#include<stdlib.h>

int main(){

    float temperature;

    printf("What is the temperature of the water: ");
    scanf("%f",&temperature);

    if(temperature>0 && temperature<100){
        printf("Water is in liquid form.");
    }else if(temperature<=0){
        printf("Water is in solid form.");
    }else{
        printf("Water is in vapor form.");
    }

    return 0;
}