/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n,a=1,d=1;
  int s;//sum

  printf("Enter the value of n =");
  scanf("%d",&n);

  s = (n/2)*(2*a + (n - 1 )*d);

  printf("Sum = %d",s);


  
  return 0;
}

