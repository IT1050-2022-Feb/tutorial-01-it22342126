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
  //declaring variables
  int i = 1, n, sum = 0;

  //taking inputs
  printf("Enter an integer:");
  scanf("%d", &n);

  //according to for loop
  for(i = 1; i <= n; i++){
    sum += i;
  }
  
  //printing the output
  printf("sum of the numbers 1 to %d is : %d ", n, sum);
  
  return 0;
}

