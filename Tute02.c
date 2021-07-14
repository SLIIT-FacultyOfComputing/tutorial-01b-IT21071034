/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  
  int d;//distance
  int x1;//first 30km 
  int x2;//remaining distance
  int a;//amount

  printf("Enter the distance the van has travelled:");
  scanf("%d",&d);

  x1 = (d/30)*30*50;
  x2 = (d%30)*40;

  a = x1+x2;

  printf("Amount = %d",a);

  
  return 0;
}
