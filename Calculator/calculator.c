#include <stdio.h>
#include <stdlib.h>

char operation();
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

double main()
{
	double fnum, snum;
	char oper;

	printf("Welcome to the calculator app!\n");

	oper = operation();
	
	printf("Please enter the first number: ");
	scanf("%lf", &fnum);

	printf("Please enter the second number: ");
	scanf("%lf", &snum);

	if(oper == '+'){
		printf("%lf\n", add(fnum, snum));
	} else if(oper == '-'){
		printf("%lf\n", subtract(fnum, snum));
	} else if(oper == '*'){
		printf("%lf\n", multiply(fnum, snum));
	} else{
		printf("%lf\n", divide(fnum, snum));
	}
	

	return 0;
}

char operation(){
	char operator;
	printf("Please enter the desired operation: ");
	scanf(" %c", &operator);

	return operator;

}

double add(double num1, double num2){
	double result;

	result = num1 + num2;
	return result;
}

double subtract(double num1, double num2){
	double result;

	result = num1 - num2;
	return result;
}

double multiply(double num1, double num2){
	double result;

	result = num1 * num2;
	return result;
}

double divide(double num1, double num2){
	double result;

	result = num1 / num2;
	return result;
}
