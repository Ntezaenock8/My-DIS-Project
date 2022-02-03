#include <stdio.h>
#include <time.h>
struct TIME{
    int hour;
    int min;
    int seconds;
};
void attempt(
    struct TIME t1,
    struct TIME t2,
    struct TIME *t3);
int main(){
    char assign[8];
    struct TIME start, end, dur;
    int option;

    printf("\nAssignment Menu\n");
    printf("================================================\n");
    printf("Please Enter 1 to attempt assignment.\n");
    scanf("%d", &option);
	printf("================================================\n");

	while(option==1){	    
    	attempt(start, end, &dur);
    	printf("\nPlease Enter any other number to stop.\n");
    	scanf("%d", &option);
    }
    
	return 0;
}
void attempt(struct TIME start,
             struct TIME end,
             struct TIME *dur){
    printf("Enter start time.\n");
    printf("Enter hours, minutes and seconds respectively:\n");
    scanf("%d %d %d", &start.hour, &start.min, &start.seconds);

    printf("Enter stop time.\n");
    printf("Enter hours, minutes and seconds respectively:\n");
    scanf("%d %d %d", &end.hour, &end.min, &end.seconds);
    
    while(start.seconds > end.seconds){
        --end.min;
        end.seconds += 60;
    }
    dur->seconds = end.seconds - start.seconds;
    while(start.min > end.min){
        --end.hour;
        end.min += 60;
    }
    dur->min = end.min - start.min;
    dur->hour = end.hour - start.hour;
    
    printf("Duration = %dhours %dminutes %dseconds", dur->hour, dur->min, dur->seconds);
}
