/*
Name: Ongangi Joseph Jeff 
Reg no: CT100/G/21645/24
Description: Function to calculate fare 
*/

#include<stdio.h>

//Function to calculate fare
float Calculatefare(float distance){
    float fare;
    fare=distance* 50; //Fare rate=KSHS.50 per km
    return fare;
    
}    

int main(){
    float distance,totalFare;
    
    printf("Enter distance travelled in km");
    scanf("%f",&distance);
    
    totalFare=Calculatefare(distance);
    
    printf("TotalFare: kshs%2.f/n", totalFare);
    
    return 0;
    
}