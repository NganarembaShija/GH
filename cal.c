#include<stdio.h>
int main(){
	char op;
	float operand1, operand2;
	printf("Enter 1st operand: ");
	scanf("%f",&operand1);
	printf("Enter the operator eg( + , - , / , * ): ");
	scanf(" %c",&op);
	printf("Enter 2nd operand: ");
	scanf("%f",&operand2);
	switch(op){
		case '+': printf("%.2f + %.2f = %.2f",operand1, operand2, operand1+operand2);
		break;

		case '-': printf("%.2f - %.2f = %.2f",operand1, operand2, operand1-operand2);
		break;

		case '/': printf("%.2f / %.2f = %.2f",operand1, operand2, operand1/operand2);
		break;

		case '*': printf("%.2f x %.2f = %.2f",operand1, operand2, operand1*operand2);
		break;
		
		default: printf("Enter valid operator\n");
	}
	printf("\n");
}
