#include <stdio.h>
#include "interface.h"

void select_option(){
	int choice; //User choice between optionns
	
	//Choice
	printf("Choose an option: \n");
	printf("1) Calulate assignment weight \n");
	printf("2) Calculate overall course weight\n");

	scanf("%d", &choice);

	if(choice == 1){
		interface_assignment_grade();
	} else if (choice == 2){
		interface_course_weight();
	}
	printf("option %d selected \n", choice);
} 

void interface_assignment_grade(){
	double user_grade, assignment_weight, overall_weight;

	printf("Enter the weighting of the assignment (0.4): \n");
	scanf("%lf",  &assignment_weight);

	printf("Enter the percentage score of the assignment (0.1) \n");
	scanf("%lf", &user_grade);

	overall_weight = user_grade * assignment_weight;

	printf("The overall weight of your grade is %.2lf \n", overall_weight);
}

void interface_course_weight(){
	printf("Enter the number of assignments in the course: \n");

}
