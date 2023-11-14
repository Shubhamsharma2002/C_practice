
/*

conditional statment in c
If statement
If-else statement
If else-if ladder
Nested if




*/


#include<stdio.h>

int main(){
    int age;
    printf("||-------------------|| \n");
    printf("Enter age :");
    scanf("%d",&age);


    
    // if(age>18){
    //     printf("Adualt \n");
    // }
    // else{
    //     printf("Not  adult \n");
    // }
    // printf("THANK U !!");



   if(age >= 18){
     printf("Adualt \n");
   } else if (age > 13 && age < 18)
   {
     printf("Teenager \n");
   }else{
     printf("Child \n");
   }
   
    return 0;

}