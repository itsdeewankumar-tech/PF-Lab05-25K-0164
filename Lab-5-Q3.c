#include <stdio.h>
int main(){
	float a;
	float b;
	float c;
	float discriminant;
	printf("Solve for Quadradic equation: ");
	printf("\nEnter a = ");
	scanf("%f",&a);
		printf("\nEnter b = ");
	scanf("%f",&b);
		printf("\nEnter c = ");
	scanf("%f",&c);
	discriminant = b*b-4*a*c;
	printf("\nDiscriminat: %.2f",discriminant);
	if(discriminant<0){
		printf("\nImaginary Roots");
	}
	else if(discriminant==0){
		printf("\nOne Real Root");
	}
	else{
		printf("\nTwo Real Roots");
	}
	return 0;
}
