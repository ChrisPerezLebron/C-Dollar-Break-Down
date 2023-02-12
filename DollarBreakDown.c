#include <stdio.h>

int main( ) {
	printf("Enter a dollar amount: ");

	int amount;

	scanf("%d", &amount);

	int twenties, tens, fives, ones;


	twenties = amount / 20;

	//update amount by subtracting twenties*20 from it
	amount -= (twenties * 20);


	tens = amount / 10;

	//update amount
	amount -= (tens * 10);


	fives = amount / 5;

	//update amount
	amount -= (fives * 5);


	ones = amount / 1;


	printf("$20 bills: %d\n", twenties);

	printf("$10 bills: %d\n", tens);

	printf("$5 bills: %d\n", fives);

	printf("$1 bills: %d\n", ones);
}
