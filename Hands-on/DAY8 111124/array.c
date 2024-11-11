/*
DAY8:
Arrays: Intro
    a.Non -primitive.
    b.Multiple values under single name.
    c.Indexing - to access the elements from the array ex. a[0],a[1], etc.,
    d.Array is static memory allocation
    e.Memory efficient and codeoptiisation
    f.No addtion or deletion is possible, only replacing is possible. 
Syntax: type variable[sizeN]={el1,el2,el3, ... , elN} or store and access using loops using index.
*/
#include <stdio.h>
int main(){
    int a[]={10,20,30,40,50};
    int n=5;
    for(int i=0;i<6;i++){
        printf("%d\n",a[i]);
    }
}