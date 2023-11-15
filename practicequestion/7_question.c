//  print the sum of first n natural numbers and also print the number in reverse


#include<stdio.h>
int main(){
    int n;
    printf("enter the number : \n");
    scanf("%d", &n);
    int sum = 0;
      for(int i = 0; i<=n; i++){
        sum = sum+i;

      }
      printf("sum of number is: %d\n", sum);
      printf("reverse number is like: \n");
      for(int i = n; i>=1; i--){
        printf("%d\n", i);

      }
      
      return 0;

}