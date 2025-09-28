#include <stdio.h>
int main(){
	int power_light;
	char color;
	printf("Check the traffic light power (On = 1, Off = 0): ");
	scanf("%d",&power_light);
	if(power_light==1){
		printf("\nCheck the light color ('R','Y','G'): ");
		scanf(" %c",&color);
		if(color=='R'||color=='r'){
			printf("Color is Red \"Stop\"");}
			else if(color=='G'||color=='g'){
			printf("Color is Green \"Go\"");
		}
		else if(color=='Y'||color=='y'){
			printf("Color is Yellow \"Caution\"");}
			else{
				printf("Invalid Color");
			}
	}
	else{
		printf("\"Signal Off\"");
			}
	return 0;
}
