/*
Name: Ongangi Joseph Jeff
reg:CT100/G/21645/2024
Description: program to display the volume and surface area of a cylinder
surface area=(2*PI*radius*radius)+(2*PI*radius*height)
volume=PI*radius*radius*height
*/

#include<stdio.h>;

int main() {

//declaration for variables
    float radius, height;
    double volume, surfacearea;
    float PI=3.1415926;

//prompt the user to enter the radius
    printf("enter the radius:");
    scanf("%f",& radius);

//prompt the user to enter the height
    printf("enter the height:");
    scanf("f",&height);

//surface area
    surfacearea=(2*PI*radius*radius)+(2*PI*radius*height);

//display surface area
    printf("\n surfacearea is%.2f", surfacearea);

//volume
    volume=PI*radius*radius*height;

//display volume
    printf("\n volume is%.2f",volume);

    return 0;
}