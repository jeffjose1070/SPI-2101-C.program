/*
Name: Ongangi Joseph Jeff
reg:CT100/G/21645/24
description: Program to culculatr data payment
*/

#include <stdio.h>

int main () {
//variable declaration
    int choice;

    printf("1. 100MB, KES 50\n");
    printf("2. 500MB, KES 200\n");
    printf("3. 1GB, KES 350\n");
    printf("4. 2GB, KES 600\n");

    printf("Enter your choice 1-4");
    scanf("%d",& choice);

    switch(choice) {


    case 1:
        printf("select 100MB,cost: KES 50\n");
        break;

    case 2:
        printf("select500MB, Cost:KES 200\n");
        break;

    case 3:
        printf("select 1GB, cost:KES350\n");
        break;

    case 4:
        printf("select 2GB, Cost:KES600\n");
        break;

    default:
        printf("invalid choice! kindly select between 1and 4\n");
    }
    return 0;
}
