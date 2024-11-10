/*
1. Character Case Converter 
Scenario: 
    Write a program that converts a lowercase character to uppercase and an uppercase character 
    to lowercase. If the input character is not a letter, print "Invalid input". 
Constraints: 
    Input is a single character in ASCII. 
Input: 
    A single character. 
Output: 
    Converted character if it’s a letter. 
    "Invalid input" otherwise.
*/
#include <stdio.h>
int main(){
    char character;
    printf("Enter an Alphabet = \n");
    scanf("%c",&character);

    if(character>='A' && character<='Z') //checks if input is uppercase
    {
        character+=32; //convers uppercase to lowercase
        printf("The lower case of the given input is = %c\n",character);
    }

    else if(character>='a' && character<='z') //checks if input is lowercase
    {
        character-=32; //convers lowercase to uppercase 
        printf("The upper case of the given input is = %c\n",character);
    }
    
    else{ //if not alphabet prints "Invalid"
        printf("Invalid Input...!\n");
    }
}