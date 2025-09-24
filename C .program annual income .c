/*
Name: Ongangi Joseph Jeff 
reg:CT100/G/21645/2024
description: Program to display acceptance or delay of annual income 
*/

#include <stdio.h>

int main (){

//variable declaration 
int age ;
float annualincome;

//prompt the user to display age
printf("enter your age");
scanf("%d",&age);

//prompt the user to display annual income 
printf("Enter your annual income");
scanf("%f",&annualincome);

if(age>=21 && annualincome >=21000){
printf("Congratulations, you qualify for the loan.\n");
}

else{
printf("Unfortunately,we are unable to offer you a loan at this time.\n");
}

return 0;
}


    