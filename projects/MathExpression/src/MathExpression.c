#include "../include/methods.h"

//	a = 7.15; b = 4.03; x = 1.28;

float a, b, x;
float expressionResults;

double ExpressionProcess(float a, float b, float x) {
	float acosExp = 2.0/(a-x);

	if ((a-x) == 0) {return 112;} //inf
	else if (acosExp < -1) {return 110;} //nan
	else if (acosExp > 1) {return 111;}; //nan
	
	float denomExp = b*cos(3.0*x);
	if (denomExp == 0) {return 120;}; //inf
	
	expressionResults = (acos(2.0 / (a-x))) / (b * cos(3.0 * x)); //expression
	//printf("ace %f dex %f exe %f", acosExp, denomExp, expressionResults); //debug ace-acos, dex-denom, exe-expResults
	return expressionResults;
}

int main() {
	system("chcp 65001");
	system("cls");
	
	a = 7.15;
	b = 4.03;
	x = 1.28;
	
	printf("Вираз: arccos(2/(a-x)) / (b*cos(3x)).\n a = 7.15 \n b = 4.03 \n x = 1.28 \n(Загальний набір даних)");
	printf("\nВикористати загальні значення(1) для розрахунку чи ввести свої?(2): ");
	
	int choice;
	scanf("%d", &choice);
	if (choice == 2) {
		printf("\nВведіть значення a: ");
		scanf("%f", &a);
		
		printf("\nВведіть значення b: ");
		scanf("%f", &b);
		
		printf("\nВведіть значення x: ");
		scanf("%f", &x);
	}
	else if (choice == 1) {}
	else { printf("\n//Неіснуючий вибір. Використання загальних значень...//"); }
	
	float expressionResults = ExpressionProcess(a, b, x);
	
	printf("\nРезультат виразу: ");
	
	if (expressionResults == 110) {
		printf("Функція не має дійсних значень! (acos < -1)\n");
	}
	else if (expressionResults == 111) {
		printf("Функція не має дійсних значень! (acos > 1)\n");
	}
	else if (expressionResults == 112 || expressionResults == 120) {
		printf("Функція не має дійсних значень! (нуль в знаменнику)\n");
	}
	else {
		printf("%f\n", expressionResults);
	};
	
	printf("\n*Кінець*: ");
	_getch();
	
	return 0;
}