#include<stdio.h>

int main(){
	float C,F;
	printf("Enter the temperature in C\n");
	scanf("%f",&C);
	F=C*9/5+32;
	printf("%.1f C = %.1f F\n",C,F);

	printf("Enter the temperature in F\n");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("%.1f F = %.1f C\n",F,C);
}
