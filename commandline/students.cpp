#include<stdio.h>
#include<time.h>
#include<mysql.h>
char ltr[7][4],test_c;
char ans[7][4]={
                {' ',' ',' ',' '},
                {' ',' ',' ',' '},
                {' ',' ',' ',' '},
                {' ',' ',' ',' '},
                {' ',' ',' ',' '},
                {' ',' ',' ',' '},
                {' ',' ',' ',' '},
};
clock_t start,stop;
char mark='*';
int marks,i,j,choice;
char letter;
int test_results[10];
char trs[4]={' ',' ',' ',' '};
int assignNo,stdNo,finalscore;
int testduration;


void drawboard(){
	printf("   %c|   %c|   %c|   %c\n",ans[0][0],ans[0][1],ans[0][2],ans[0][3]);
	printf("____|____|____|____\n");
	printf("   %c|   %c|   %c|   %c\n",ans[1][0],ans[1][1],ans[1][2],ans[1][3]);
	printf("____|____|____|____\n");
	printf("   %c|   %c|   %c|   %c\n",ans[2][0],ans[2][1],ans[2][2],ans[2][3]);
	printf("____|____|____|____\n");
		printf("   %c|   %c|   %c|   %c\n",ans[3][0],ans[3][1],ans[3][2],ans[3][3]);
	printf("____|____|____|____\n");
		printf("   %c|   %c|   %c|   %c\n",ans[4][0],ans[4][1],ans[4][2],ans[4][3]);
	printf("____|____|____|____\n");
		printf("   %c|   %c|   %c|   %c\n",ans[5][0],ans[5][1],ans[5][2],ans[5][3]);
	printf("____|____|____|____\n");
	printf("   %c|   %c|   %c|   %c\n",ans[6][0],ans[6][1],ans[6][2],ans[6][3]);

}
int *attempt_test(char *ptr, int lngth){
         for(i=0;i<lngth;i++){
         trs[i]=ptr[i];
         printf("%c\n",trs[i]);

 }
 printf("\n%d\n",lngth);
for(int k=0;k<lngth;k++){
        letter=trs[k];
        printf("please enter 1 to draw in box 0 to skip box\n");
	    i=0;
	    marks=0;
	    printf("draw pattern for letter %c\n",letter);
	    start=clock();
		do{

		for(j=0;j<4;j++){
		printf("you are editing row %d cell %d\n",i+1,j+1);
		scanf("%d",&choice);
		if(choice==1){
			ans[i][j]='*';
		}
		else{
			ans[i][j]=' ';
		}
		}
		i++;
	}while(i<7);
    if(letter=='F'){
    			char ltr[7][4]={
	           {'*','*','*','*'},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*','*','*','*'},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='B'){
    			char ltr[7][4]={
	           {'*','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='C'){
    			char ltr[7][4]={
	           {' ','*','*','*'},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {' ','*','*','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='A'){
    			char ltr[7][4]={
	           {' ','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='D'){
    			char ltr[7][4]={
	           {'*','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='E'){
    			char ltr[7][4]={
	           {'*','*','*','*'},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*','*','*','*'},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*','*','*','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='G'){
    			char ltr[7][4]={
	           {'*','*','*','*'},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ','*','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='H'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='I'){
    			char ltr[7][4]={
	           {'*','*','*','*'},
	           {'*','*','*','*'},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {'*','*','*','*'},
	           {'*','*','*','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='J'){
    			char ltr[7][4]={
	           {'*','*','*','*'},
	           {'*','*','*','*'},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {'*','*','*',' '},
	           {'*','*','*',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='T'){
    			char ltr[7][4]={
	           {'*','*','*','*'},
	           {'*','*','*','*'},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {' ','*','*',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='K'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ','*',' '},
	           {'*','*',' ',' '},
	           {'*',' ','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},

     };


	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='X'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {' ','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='Y'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {' ','*','*',' '},
	           {' ','*','*',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='V'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {' ','*','*',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='U'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='L'){
    			char ltr[7][4]={
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*','*','*','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='M'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='N'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ','*','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
	 else if(letter=='O'){
    			char ltr[7][4]={
	           {' ','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {' ','*','*',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='P'){
    			char ltr[7][4]={
	           {'*','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='R'){
    			char ltr[7][4]={
	           {'*','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
 	}
 	 else if(letter=='Q'){
    			char ltr[7][4]={
	           {' ','*','*',' '},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*',' ','*'},
	           {' ','*','*',' '},
	           {' ',' ',' ','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='S'){
    			char ltr[7][4]={
	           {' ','*','*','*'},
	           {'*',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {' ','*','*',' '},
	           {' ',' ',' ','*'},
	           {' ',' ',' ','*'},
	           {'*','*','*',' '},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='W'){
    			char ltr[7][4]={
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*',' ',' ','*'},
	           {'*','*','*','*'},
	           {'*',' ',' ','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}
     else if(letter=='Z'){
    			char ltr[7][4]={
	           {'*','*','*','*'},
	           {' ',' ','*',' '},
	           {' ',' ',' ',' '},
	           {' ','*',' ',' '},
	           {' ',' ',' ',' '},
	           {'*',' ',' ',' '},
	           {'*','*','*','*'},

     };

	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(ans[i][j]==ltr[i][j]){
				marks++;
			}
		}
	}
	}

    stop=clock();
    drawboard();
    double time_taken=(double)(stop-start)/1000;
    testduration+=(int)(time_taken);
    finalscore+=marks;
    printf("\n\nit took %f seconds\n",time_taken);
	if(marks==28){
	printf("\npassed\n");
	}
	else{
	printf("\nfailed\n");
	}
	test_results[k]=marks;
	printf("%.1f\n",(float)(test_results[k]/28)*(100));
}
test_results[8]=(int)testduration;
printf("\nYOUR TEST DURATION IS %d:\n",test_results[8]);
test_results[9]=(int)(((finalscore/28)*100)/lngth);
return test_results;
}

int main(){
//print welcome statement
for(i = 0; i < 100; i++)
printf("=");
printf("\n\t\t\tWelcome to the KinderCare Character Draw System.\n");
for(i = 0; i < 100; i++)
printf("=");
char test[8];

 //declare mysql variables
 MYSQL *conn;
 MYSQL_RES *res, *res1, *res2, *res3,*res4, *res5, *res6, *res7, *res8;
 MYSQL_ROW row;

 //declare server variables
 char *server = "localhost";
 char *user = "root";
 char *password = ""; /*password is not set in this example*/
 char *database = "kindacare";


//login variables
 int usercode;
 char pass[20];
 char q1[]={"SELECT * FROM registerpupil WHERE UserCode =%d AND PhoneNo =\'%s\'"};
 char buff[255]={};



 conn = mysql_init(NULL);

 /* Connect to database */
 if (!mysql_real_connect(conn, server,
 user, password, database, 0, NULL, 0))
 {
   printf("Failed to connect MySQL Server %s. Error: %s\n", server, mysql_error(conn));
   return 0;
 }


int rows;
int activate_status;
while(rows!=1){
printf("\nPLEASE ENTER USERCODE\n");
scanf("%d",&usercode);
printf("\nPLEASE ENTER PASSWORD\n");
scanf("%s",&pass);
sprintf(buff,q1,usercode,pass);

//run query
if(mysql_query(conn,buff)){
	printf("\n error %s\n",mysql_error(conn));
	return 0;
}
res=mysql_store_result(conn);
rows=mysql_num_rows(res);
if(rows!=1){
    printf("\nWrong User Code or password\n");
}
}
if(rows==1){
    //declare menu variables
        char *com1 = "Viewall";
        char *com2 = "Checkstatus";
        char *com3 = "ViewMarks";
        char *com4 = "ViewComments";
        char *com5 = "RequestActivation";
        char *com6 = "ViewAssignmentDetails";
        char com[strlen(com3)];
        char option;


    //select assignment to attempt
		while(option != '1')
	{
	     //get current time
         time_t current_time;
         current_time=time(NULL);
         struct tm tm=*localtime(&current_time);

         int activationrequest;
         char query5[]={"SELECT * FROM assignment WHERE AssignEnd>=\'%d-%d-%d-%d-%d-%d\'"};
         char query6[]={"SELECT * FROM deactive WHERE UserCode=%d"};
         char query7[]={"SELECT AssignmentID, Score FROM scores WHERE UserCode=%d"};
         char query8[]={"SELECT AssignmentID, Comment FROM comment WHERE UserCode=%d"};
         char query9[]={"INSERT INTO activationrequests VALUES(%d, %d)"};
         char query10[]={"SELECT * FROM activationrequests WHERE UserCode =%d"};
         char query11[]={"INSERT INTO scores VALUES(%d ,%d ,%d, %d ,%d ,%d ,%d ,%d , %d, %d, %d, %d)"};
         char query12[]={"SELECT * FROM scores WHERE UserCode=%d AND AssignmentID=%d"};
         char query13[]={"SELECT * FROM assignment WHERE AssignmentID=%d"};
         char query14[]={"SELECT * FROM scores WHERE UserCode=%d"};
         char query15[]={"SELECT * FROM assignment WHERE AssignEnd<\'%d-%d-%d-%d-%d-%d\'"};
         char buff14[255]={};
         char buff15[255]={};
         char buff13[255]={};
         char buff12[255]={};
         char buff11[255]={};
         char buff10[255]={};
         char buff9[255]={};
         char buff8[255]={};
         char buff7[255]={};
         char buff6[255]={};
         char buff5[255]={};



         sprintf(buff8,query8,usercode);
         sprintf(buff7,query7,usercode);
         sprintf(buff6,query6,usercode);
         sprintf(buff14,query14,usercode);
         sprintf(buff15,query15,tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday,tm.tm_hour,tm.tm_min,tm.tm_sec);
         sprintf(buff5,query5,tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

        if(mysql_query(conn,buff6)){
        printf("error %s\n",mysql_error(conn));
        }
        res=mysql_store_result(conn);
        int status=mysql_num_rows(res);

         if(mysql_query(conn, buff5)){
         printf("error %s\n",mysql_error(conn));
         }
         res = mysql_store_result(conn);
         int count =mysql_num_fields(res);


		printf("\nPlease Enter any of the following commands to proceed.");
		printf("\n1. Viewall");
		printf("\n2. Checkstatus");
		printf("\n3. ViewMarks");
		printf("\n4. ViewComments");
		printf("\n5. RequestActivation");
		printf("\n6. ViewAssignmentDetails\n\n");
		printf("Enter command here(for example \"Viewall\" to view assignments): ");


		scanf("%s", &com);

		if(strcmp(com, com1)==0){
        printf("\nYou have selected option");
        puts(com1);
            while(row = mysql_fetch_row(res)){
            for(int i=0;i<count;i++){
            printf("%s\t",row[i]);
            }
             printf("\n");
            }
            if(status!=1){
                        printf("please enter assignment number\n");
    scanf("%d",&assignNo);
    char query2[]={"select Q1 from assignment where AssignmentID = %d AND AssignStart<=\'%d-%d-%d-%d-%d-%d\'"};
    char buff2[255];
    sprintf(buff2,query2,assignNo,tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday,tm.tm_hour,tm.tm_min,tm.tm_sec);
    //run query
	 if (mysql_query(conn,buff2))
    {
     printf("Failed to execute query. Error: %s\n", mysql_error(conn));
     return 0;
    }


    res = mysql_store_result(conn);
    if (res == NULL)
    {
     return 0;
    }
     int avialble=mysql_num_rows(res);

     if(avialble==1){
           int columns = mysql_num_fields(res);



     printf("Entries in the table assignment:\n");
     while(row = mysql_fetch_row(res))
     {
     for (i = 0; i < columns; i++)
     {
      printf("%s ", row[i] ? row[i] : "NULL");
     /*store test in string*/
      strcpy(test,row[i]);

      }
      printf("\n");
      }

    sprintf(buff12,query12,usercode,assignNo);
    if(mysql_query(conn,buff12)){
    printf("error %s",mysql_error(conn));
    }
    res = mysql_store_result(conn);
    int row2=mysql_num_rows(res);
    if(row2!=1){
              int testchars=strlen(test);
     int *get_testmarks;
    //get test marks
      get_testmarks=attempt_test(test,testchars);
      int testlength=sizeof(get_testmarks)/sizeof(get_testmarks[0]);
      for(i=0;i<testlength-2;i++){
      printf("%d\n",get_testmarks[i]);
    //insert marks into database
     }
     printf("\n%d\n",get_testmarks[8]);
     sprintf(buff11,query11,get_testmarks[9],assignNo,usercode,get_testmarks[0],get_testmarks[1],get_testmarks[2],get_testmarks[3],get_testmarks[4],get_testmarks[5],get_testmarks[6],get_testmarks[7],get_testmarks[8]);
     if(mysql_query(conn, buff11)){
        printf("error %s",mysql_error(conn));
     }
    }else{
    printf("\nyou already attempted this test\n");
    }

     }else{

     printf("\nTHIS TEST IS NOT YET AVAILABLE\n");
     }



     }else{
            printf("\nYOU ARE AN INACTIVE STUDENT\n");
            }


		}
		else if(strcmp(com, com2)==0){
			printf("\nYou have selected option ");
			puts(com2);
            if(mysql_query(conn,buff14)){
                printf("error %s",mysql_error(conn));
            }
            res = mysql_store_result(conn);
            int attempted = mysql_num_rows(res);
            if(mysql_query(conn,buff15)){
                printf("error %s",mysql_error(conn));
            }
            res=mysql_store_result(conn);
            int expired=mysql_num_rows(res);
            int missed = expired-attempted;

            printf("\nSTATUS REPORT\n");
            printf("Attempted: %d\n",attempted);
            printf("Missed: %.2f\n",((float)missed/(float)expired)*100);
            printf("Attempted: %.2f\n",((float)attempted/(float)expired)*100);
		}
		else if(strcmp(com, com3)==0){
			printf("\nYou have selected option ");
			puts(com3);
			if(mysql_query(conn,buff7)){
                printf("error %s",mysql_error(conn));
			}
			res = mysql_store_result(conn);
			int counts=mysql_num_fields(res);
			printf("TestID\tScore\n");
			while(row=mysql_fetch_row(res)){
                for(i=0;i<counts;i++){
                    printf("%s\t",row[i]);
                }
			}
		}
		else if(strcmp(com, com4)==0){
			printf("\nYou have selected option ");
			puts(com4);
			if(mysql_query(conn,buff8)){
                printf("error %s",mysql_error(conn));
			}
			res=mysql_store_result(conn);
			int counts=mysql_num_fields(res);
			printf("TestID\tComments\n");
			while(row=mysql_fetch_row(res)){
                for(i=0;i<counts;i++){
                    printf("%s\t",row[i]);
                }
                printf("\n");
			}
		}
		else if(strcmp(com, com5)==0){
			printf("\nYou have selected option ");
			puts(com5);
			sprintf(buff10,query10,usercode);
			if(mysql_query(conn,buff10)){
                printf("error %s",mysql_error(conn));
			}
			res=mysql_store_result(conn);
			rows=mysql_num_rows(res);
			if(rows==1){
                printf("\nYOU ALREADY SENT ACTIVATION REQUEST\n");
                activationrequest=1;
			}
			if(status!=1){
                printf("\nYOU ARE AN ACTIVE STUDENT\n");
			}

			if(status==1){

			    while(activationrequest!=1){
                printf("\nPLEASE ENTER 1 TO SEND ACTIVATION REQUEST\n");
                scanf("%d",&activationrequest);
                sprintf(buff9,query9,usercode, activationrequest);
                if(mysql_query(conn,buff9)){
                    printf("error %s",mysql_error(conn));
                }else{
                    printf("ACTIVATION REQUEST SENT");
                }
			}

			}
		}
        else if(strcmp(com, com6)==0){
			printf("\nYou have selected option ");
			puts(com6);
			printf("\nPLEASE ENTER ASSIGNMENT ID\n");
			int assID;
			scanf("%d",&assID);
			sprintf(buff13,query13,assID);
			if(mysql_query(conn,buff13)){
                printf("error %s",mysql_error(conn));
			}
			res = mysql_store_result(conn);
			int counts=mysql_num_fields(res);

			while(row=mysql_fetch_row(res)){
                  for(i=0;i<counts;i++){
                    printf("%s\t",row[i]);
                }
                printf("\n");
			}

		}

		else{
			printf("\nYou have selected an invalid option. Try again.");
		}

		printf("\nEnter 1 to quit or any other character to continue: ");
		getchar();
		option = getchar();
	}


 mysql_free_result(res);
 mysql_close(conn);


}

 /* send SQL query */

}

