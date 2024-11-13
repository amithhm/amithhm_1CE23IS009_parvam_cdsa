/*
Union:

*/
#include<stdio.h>
#include<math.h>
union Points{
    int x1;
    int x2;
    int y1;
    int y2;
};
int Distance(int x, int y){
    float dis;
    union Points p;
    x=p.x2-p.x1;
    y=p.y2-p.y1;
    dis=sqrt(x*x+y*y);
    printf("%0.2f",dis);
}
int main(){
    union Points p;
    p.x1=10;
    p.x2=20;
    p.y1=5;
    p.y2=10;
    int x=p.x2-p.x1;
    int y=p.y2-p.y1;
    Distance(x,y);
}