#include <stdio.h>

int main()  {
	
	double balance;
	printf("Enter your initial balance:");
	scanf("%lf", &balance);
	printf("Your account balance is: %lf \n ", balance);
	
	double withdraw_amount;
	withdraw_amount = balance/2;
	balance -= withdraw_amount;
	printf("Enter your withdrawn amount: %lf\n", withdraw_amount);
	printf("Enter your new balance: %lf\n", balance);
	
	balance = balance + 300; // balance += 300; de yazabilirim //
	printf("your new balance: %lf\n", balance);
	
	--balance;
	printf("your new remaining balance: %lf\n", balance);
	balance--;
	printf("your new remaining balance: %lf\n", balance);
	withdraw_amount = 500,
	balance -= withdraw_amount;
	printf("enter your new balance: %lf\n", balance);
	
	balance++;
	printf("your new balance: %lf\n", balance);
	++balance;
	printf("your new balance: %lf\n", balance);
	balance = balance * 2;
	printf("your new balance: %lf\n", balance);
	
	

	return 0;
	
}
	
	

