/*
3. Formatted Output 
Scenario: 
    Write a program that reads a hexadecimal value as input and prints the number in decimal, 
    octal, and uppercase hexadecimal formats with a width of 5 (padded with spaces if 
    necessary). 
Input: 
    A single hexadecimal value. 
Constraints: 
    The input hexadecimal value should be within a 4-digit limit (0 to FFFF). 
Output: 
Print three lines: 
    The decimal representation. 
    The octal representation. 
    The uppercase hexadecimal representation, all with a width of 5.
*/
#include<stdio.h>
int main(){
    int lhd;
    printf("Enter a lower Hexadecimal Value : \n");
    scanf("%x",&lhd);
    if(lhd<0){
        printf("Enter a Positive Value...!");
    }
    else{
        printf("The Decimal Value of %x : %d\n",lhd,lhd);
        printf("The Octal Value of %x : %o\n",lhd,lhd);
        printf("The Upper Hexadecimal Value of %x : %X\n",lhd,lhd);
    }
}