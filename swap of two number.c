#include<stdio.h>
void main() {
      int num1, num2, temp;
      printf("Enter first number: ");
      scanf("%d", &num1);
      printf("Enter second number: ");
      scanf("%d", &num2);
      temp = num1;
      num1 = num2;
      num2 = temp;

      printf("After swapping Num1 = %d\n", num1);
      printf("After swapping Num2 = %d", num2);
      
}

