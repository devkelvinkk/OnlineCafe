#include<stdio.h>
int main()
{
char choice;

printf("***FOOD AVAILABLE IN THE SCHOOL MESS TODAY***.\n");
printf("***/ALL THE FOOD IS AVALIBLE IN GOOD AFFORDABLE PRICES***.\n");

puts("Meals available");
puts("A-Chapo with Ndengu");
puts("B-Mchele with mbosho");
puts("C-Ugali with Mboga");
puts("D-Ugali with Matumbo");
puts("E-Githeri plain");
puts("F-Chips");

printf("Enter your meal choice:");
scanf("%c",&choice);

printf("You opted for: ");
switch(choice)
{
    case'A':
        puts("Chapo with Ndengu");
        break;
    case'B':
        puts("Mchele with mbosho");
        break;

    case'C':
        puts("Ugali with Mboga");
        break;

    case'D':
        puts("Ugali with Matumbo");
        break;

    case'E':
        puts("Githeri plain");
        break;

    case'F':
        puts("Chips");
        break;

    default:
        printf("The meal is not available.\n");
  }
  printf(" as your meal.\n");

  printf("Pay your meal via this till number 1234567.\n");
  printf("Collect your meal at counter number 10.\n");
  printf("Thank you!");
  return 0;
  }

