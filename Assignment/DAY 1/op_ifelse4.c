/*
4. Logical and Relational Operations 
Scenario: 
    Write a program to check if a number is between 10 and 20 (inclusive) and is even. If both 
    conditions are met, print "Valid". If either condition fails, print "Invalid". 
Input: 
    An integer. 
Constraints: 
    1. The integer is between 1 and 1000. 
Output: 
    Print "Valid" if the number is between 10 and 20 and even, otherwise print "Invalid".
*/
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number between 1 to 1000 : \n");
    scanf("%d",&a);
    if(a>=1 && a<=1000){
        if(a>=10 && a<=20 && a%2==0){
            printf("Valid\n");
        }
        else{
            printf("Invalid\n");
        }
    }
    else{
        printf("Enter within 1 to 1000.....!");
    }
}