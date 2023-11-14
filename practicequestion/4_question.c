//  write a program to check a number is divisible by 2 or not

#include<stdio.h>

int main(){
         int n;
         printf("Enter a Nmber You Want To check: \n");
         scanf("%d",&n);
         if(n % 2 == 0){
            printf("Number is Divisible by 2 :- ");
         }else{
            printf("Number is Not Divisible by 2 ");
         }
}