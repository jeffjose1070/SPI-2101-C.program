/*
Name: Ongangi Joseph Jeff
reg:CT100/G/21645/24
description: Program to culculate average marks and attendance
*/

#include <stdio.h>

int main () {

//variable declaration
    float averagemarks,attendance;

//prompt the user to display attendance
    printf("Enter your attendance");
    scanf("%f",&attendance);

//prompt the user to display averagemarks
    printf("enter your average marks");
    scanf("%f",&averagemarks);

//confirm eligibility
    if (attendance>=75&&averagemarks>40) {
        printf("student is eligible for final exam\n");
    }

    else {
        printf("student is not eligible for final exam\n");
    }
    return 0;
}
