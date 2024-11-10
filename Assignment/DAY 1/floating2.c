/*
2. Floating Point Respresentation Insight
Scenario: 
    Write a program that takes a floating-point number as input, casts it to an integer, and then 
    prints both the original floating-point number and the integer value. Demonstrate how 
    fractional parts are truncated during type casting. 
Constraints: 
    The floating-point number is within the range -1000.0 to 1000.0. 
Input: 
    A single floating-point number. 
Output: 
    Print the floating-point number with 2 decimal places. 
    Print the integer part after type casting.
*/
#include<stdio.h>
int main(){
    float a,b,r;
    int i;

    printf("Enter two number to divide : \n");
    scanf("%f%f",&a,&b);

    r=a/b; //fraction of variable a and b
    printf("The Floating value of the divison is = %0.2f\n",r);

    i=(int)r; //truncating the float value to integer
    printf("The Integer value of the division is = %d\n",i);
}