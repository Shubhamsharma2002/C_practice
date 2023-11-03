/*
conversion in c

there are two type of conversition in c
1 implicit conversion (this is happend by complier by default );
2 explicit conversion (this conversion is done by programer according to there need);
  

*/

//  types conversition

# include<stdio.h>

int main(){
    int a = (int) 1.999999;
    printf("%d\n", a);

    // program using operator precedence
    int x = 4 +9 *10;    // ans is 94 
    printf("%d\n", x);

    // ASSOCIATIVITY (FOR SAME PRECEDENCE)

    int  y = 4*3/6*2;   // ans is 4
    
    printf("%d", y);
    return 0;


}



/*
OPERATOR PRECEDENCE IN C
 
 
 1  (* , / ,%)
 2  (+ , -)
 3 (=) 


ASSOCIATIVITY (FOR SAME PRECEDENCE)
according to this rule we can performe task left to right

example :- x = 4*3/6*2;
           sol = 12/6*2
               =  2*2
               = 4


*/