#include <stdio.h>
int main(){
	float principal, rate, time, simpleinterest;
	
	printf("Enter principal amount: ");
	scanf("%f", &principal);
	
	printf("Enter rate of interest: ");
	scanf("%f", &rate);
	
	printf("Enter time (in year): ");
	scanf("%f", &time);
	
	simpleinterest = (principal * rate * time)/100;
	
	printf("simple interest = %f \n", simpleinterest);
	
	return 0;
}