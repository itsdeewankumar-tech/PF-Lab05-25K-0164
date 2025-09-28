#include <stdio.h>
int main(){
	char user_name[30];
	int password;
	printf("Enter the User Name: ");
	scanf("%s",user_name);
	if(strcmp(user_name,"Fast")==0){
		printf("\nEnter the Password: ");
	scanf("%d",&password);
		if(password==1234){
			printf("\nUser logged in successfully");
		}
		else{
			printf("Incorrect Password");
		}
	}
	else{
		printf("Username not found");
	}
	return 0;
}
