/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float sum,average;

  printf("Enter marks of two subject:");
  scanf("%d  %d",&mark1,&mark2);
  sum=mark1+mark2;
  average=sum/2;
  printf("Average of marks:%.2f",average);
  return 0;
}

