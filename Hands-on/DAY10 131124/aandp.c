#include<stdio.h>
#include<math.h>
#define PI 3.14
struct Mesure{
    float area;
    float perimeter;

};

int Circle(float r){
    struct Mesure mc;
    mc.area=PI*pow(r,2);
    mc.perimeter=2*PI*r;
    printf("Area of Circle = %0.3f\n",mc.area);
    printf("perimeter of Circle = %0.3f\n",mc.perimeter);
}

int Square(float a){
    struct Mesure mc;
    mc.area=a*a;
    mc.perimeter=4*a;
    printf("Area of Square = %0.3f\n",mc.area);
    printf("perimeter of Square = %0.3f\n",mc.perimeter);
}

int Rectangle(float l,float b){
    struct Mesure mr;
    mr.area=l*b;
    mr.perimeter=2*(l+b);
    printf("Area of Rectangle = %0.3f\n",mr.area);
    printf("perimeter of Rectangle = %0.3f\n",mr.perimeter);
}

int main(){
    float r=12.5;
    float a=20;
    float l=45.5 , b=45.5;
    Circle(r);
    Square(a);
    Rectangle(l,b);
}