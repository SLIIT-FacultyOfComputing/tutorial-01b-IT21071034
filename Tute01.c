/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int a,b;
  float avg;


  printf("Enter the subject 1 marks:");
  scanf("%d",&a);

  printf("Enter the subject 2 marks:");
  scanf("%d",&b);

  avg = (a+b)/2;

  printf("The average is = %.2f",avg);
  

  return 0;
}

