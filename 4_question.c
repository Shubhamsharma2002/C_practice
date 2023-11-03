/*
1. write a program to calculate the are of circle...

*/

# include<stdio.h>

int main(){
    float radious ;
    printf("enter the value of radious \n");
    scanf("%f", &radious);

    float res = (3.14 * radious * radious);

    printf("area is : %f ", res);

    return 0;
    

}