/*
5. Playing with Characters
Task:
    You have to print the character *ch* in the first line. 
    Then print *s* in nextline. 
    In he last line print the sentence *sen*.
Input Format:
    First, take a character *ch* as input.
    Then take the string, *s* as input.
    Lastly, take he sentence *sen* as input.
Consraints:
    Strings for *s* and *sen* will have fewer han 100 characters,including the newline.
Ouput Format:
    Print three lines of ouput. 
    The first line prints the character *ch*.
    The second line prints the string *s*.
    The third line prints the sentences *sen*.
*/
#include <stdio.h>
int main(){
    char ch,s[100],sen[100];
    scanf("%c",&ch);//Takes just a character
    scanf("%s",&s);//No space can be given
    scanf("\n");//If not included it directly skips the next step
    scanf("%[^\n]%*c",sen);//Accepts string with spaces,
    //should include "\n" at the end of the string.

    printf("\n%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
}
    