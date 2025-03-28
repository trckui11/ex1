#include <stdio.h>

int main()
{

  // What bit
  printf("What bit:\n");

  int num, pos, num1, num2, mask = 1;

  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &pos);
  mask <<= pos;
  printf("The bit in position %d of number %d is: %d\n", pos, num, (num & mask) != 0);

  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &pos);
  mask = 1 << pos;
  int num_with_bit_on = num | mask;
  printf("Number with bit %d set to 1: %d\n", pos, num_with_bit_on);
  int num_with_bit_off = num & ~mask;
  printf("Number with bit %d set to 0: %d\n", pos, num_with_bit_off);

  // Toggle bit
  printf("\nToggle bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &pos);
  int toggled_num = num ^ (1 << pos);
  printf("Number with bit %d toggled: %d\n", pos, toggled_num);

  // Even - Odd
  printf("\nEven - Odd:\n");
  printf("Please enter a number:\n");
  scanf("%d", &num);
  int result = !(num & 1);
  printf("%d\n", result);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  printf("Please enter the first number (octal):\n");
  scanf(" %o", &num1);
  printf("Please enter the second number (octal):\n");
  scanf(" %o", &num2);
  int sum = num1 + num2;
  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum >> 3) & 1, (sum >> 5) & 1, (sum >> 7) & 1, (sum >> 11) & 1);

  printf("Bye!\n");

  return 0;
}