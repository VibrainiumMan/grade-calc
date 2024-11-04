#include <stdio.h>
#include "interface.h"

void select_option(){
	int choice; //User choice between optionns
	
	//Choice
	printf("Choose an option: \n");
	printf("1) Calulate assignment weight \n");
	printf("2) Calculate overall course weight\n");

	scanf("%d", &choice);
	printf("option %d selected \n", choice);
} 
