#include <stdio.h>
int main(){
	int age;
	int age_adult, child_age, old_age;
	printf("Enter the Age: ");
	scanf("%d",&age);
	if(age<5){
		printf("Kids tickets are \"free\" of cost");
	}
	else if(age>65){
		printf("Tickets \"Discount\" Available for Senior people");
	
	
	}
	else{
		printf("Adult pay \"standard\" Ticket price ");
	}
	return 0;
}
