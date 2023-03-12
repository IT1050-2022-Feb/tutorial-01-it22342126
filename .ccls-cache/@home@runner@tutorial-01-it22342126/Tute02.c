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
  //declaring variables
  float distance, amount;

  //Taking inputs
  printf("Enter the distance the van travelled :");
  scanf("%f", &distance);

  //according to if else selection control structure
  if(distance < 30)
  {
    //calculation
    amount = distance * 50;
    
    printf("amount to be paid for the rented vehical is %.2f", amount);
  }
  else
  {
    //calculation
    amount = 30 * 50 + (distance - 30) * 40;
    
    printf("amount to be paid for the rented vehical is %.2f", amount);
  }
  return 0;
}
