/*
Name: Ongangi Joseph Jeff
reg:CT100/G/21645/2024
description: Program to culculate water billcost
*/

#include <stdio.h>

int main () {

//variable declaration
    int units;
    float bill;

//prompt the user to display age
    printf("enter the number of water bills consumed");
    scanf("%d",&units);

    if(units<=30) {
        bill=units*20;
    }

    else if (units<=60) {
        bill = units*25;
    }

    else {
        bill=units*30;
    }

    printf("total water bills kes %.2f\n",bill);
    return 0;
}


