#include <stdio.h>
int main(){
	int permission_type;
	printf("Enter the permission variable \n(Read=1, Write=2, Execute=4):");
	scanf("%d",&permission_type);
	if(permission_type & 4){
		printf("\nAccess granted: full control");
	}
	else if ((permission_type & 1) && (permission_type & 2)){
		printf("Access granted: read and write");
	}

	else if(permission_type & 2){
		printf("\nAccess granted: write-only");
	}
		
	else{
		printf("\nAccess Denied");
	}
	return 0;
}
