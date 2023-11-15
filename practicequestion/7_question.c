//  print the sum of first n natural numbers

#include<stdio.h>
int main(){
    int n;
    printf("enter the number : \n");
    scanf("%d", &n);
    int sum = 0;
      for(int i = 0; i<=n; i++){
        sum = sum+i;

      }
      printf("sum of number is: %d", sum);
      return 0;

}