// write a program to check charater is uper or lower case 

#include<stdio.h>
int main(){
    char ch;
    printf("enter the value of ch : \n");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("uper case");

    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("lowercase");
    }else{
        printf("not english");
    }
    return 0;
}