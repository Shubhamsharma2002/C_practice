
// solve the following question according to the prcedance
/*
1. 5*2-3*3
2. 5*2/2*3
3. 5(2/2)*3  in brackets we can solve first brackets
4. 5+2/2*3


*/
# include<stdio.h>
int main(){

    // 1. 5*2-3*3
    int x = 5*2 - 3*3;   // ans is 1
    printf("%d\n",x);
    // 2. 5*2/2*3
    int y = 5*2/2*3;  // ans is 15
    printf("%d\n", y);

    int z = 5 *(2/2)*3;  // ans is 15
    printf("%d\n", z);
 

    int d = 5+2/2*3;   // ans is 8
    printf("%d\n", d);
}