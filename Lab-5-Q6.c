#include <stdio.h>
int main(){
	char room;
	char action;
	printf("Enter the Room (L=Living room, K=Kitchen): ");
	scanf(" %c",&room);
	printf("\nEnter the action (L=light, T=thermostat): ");
	scanf(" %c",&action);
	switch(room){
	
	case 'l':
	case 'L':
	switch(action){
	
	case 'l':
	case 'L':
	printf("Living Room Lights: \"Adjusting ambient lighting\"");
	break;
	case 'T':
	case 't':
	printf("Living Room Thermostat: \"Setting living room temperature\"");
	default : printf("Invalid action for living Room");}
	
	break;
	case 'k':
	case 'K':
	switch(action){
	
	case 'l':
	case 'L':
	printf("Kitchen Lights: \"Turning on bright task lighting\"");
	break;
	case 'T':
	case 't':
	printf("Kitchen Thermostat: \"Setting kitchen temperature\"");
	break;
	printf("Invalid action");}
	break;
    default :printf("Invalid room");
	}
	
	return 0;
}
