/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //declaring variables
  int num1, num2;
  float avg;

  //taking inputs
  printf("Enter first number : ");
  scanf("%d", &num1);
  
  printf("Enter second number : ");
  scanf("%d", &num2);

  //calculations
  avg = (num1 + num2) / 2.0;

  //printing the average of the two marks. %.2f is used for displaying output upto two decimal places
  printf("Average of %d and %d is : %.2f", num1,num2,avg);
  
  return 0;
}

