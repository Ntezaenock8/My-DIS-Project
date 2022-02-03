#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int i;
	char *com1 = "Viewall";
	char *com2 = "Checkstatus";
	char *com3 = "Viewassignment assignmentid";
	char *com4 = "Checkdates datefrom dateto";
	char *com5 = "RequestActivation";
	char com[strlen(com3)];
	char option;
	
	for(i = 0; i < 100; i++)
		printf("=");
	printf("\n\t\t\tWelcome to the KinderCare Character Draw System.\n");
	for(i = 0; i < 100; i++)
		printf("=");
	
	while(option != '1')
	{
		printf("\nPlease Enter any of the following commands to proceed.");	
		printf("\n1. Viewall");
		printf("\n2. Checkstatus");
		printf("\n3. Viewassignment assignmentid");
		printf("\n4. Checkdates datefrom dateto");
		printf("\n5. RequestActivation\n\n");
		printf("Enter command here(for example \"Viewall\" to view assignments): ");

		scanf("%s", &com);
		
		if(strcmp(com, com1)==0){
			printf("\nYou have selected option ");
			puts(com1);
		}
		else if(strcmp(com, com2)==0){
			printf("\nYou have selected option ");
			puts(com2);
		}
		else if(strcmp(com, com3)==0){
			printf("\nYou have selected option ");
			puts(com3);
		}
		else if(strcmp(com, com4)==0){
			printf("\nYou have selected option ");
			puts(com4);
		}
		else if(strcmp(com, com5)==0){
			printf("\nYou have selected option ");
			puts(com5);
		}
		else{
			printf("\nYou have selected an invalid option. Try again.");
		}
		
		printf("\nEnter 1 to quit or any other character to continue: ");
		getchar();	
		option = getchar();
	}

	return 0;
}
