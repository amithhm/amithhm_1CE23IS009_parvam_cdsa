#include<stdio.h>
#include<math.h>
int main(){
    int o,choice;
    float a,b;
    for(;;){
        printf("Enter two numbers (Digital number system enter 0 and 0): \n");
        scanf("%f%f",&a,&b);
        printf("Enter the Choice: ");
        scanf("%d",&o);
        printf("\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n 5 for Square root of 1st number\n 6 for Square root of 2nd number\n 7 for power to base\n 8 for DIgital Number System");
        switch(o){
            case 1:
                printf("Result = %0.2f\n",a+b);
                break;
            case 2:
                printf("Result = %0.2f\n",a-b);
                break;
            case 3:
                printf("Result = %0.2f\n",a*b);
                break;
            case 4:
                printf("Result = %0.4f\n",a/b);
                break;
            case 5:
                printf("Result = %0.4f\n",sqrt(a));
                break;
            case 6:
                printf("Result = %0.4f\n",sqrt(b));
                break;
            case 7:
                printf("Result = %0.4f\n",pow(a,b));
                break;
            case 8:
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
                break;
            default:
                printf("Invalid opererator\n");
                break;
        }
        printf("Enter your choice 1 to continue and 0 to exit : ");
        scanf("%d",&choice);
        if(choice==0){
            break;
        }
    }
}
