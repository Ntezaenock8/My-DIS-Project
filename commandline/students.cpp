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
char trs[4]={' ',' ',' ',' '};

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
void attempt_test(char *ptr){
         for(i=0;i<strlen(ptr);i++){
         trs[i]=ptr[i];
         printf("%c\n",trs[i]);
 }
for(int k=0;k<4;k++){
        letter=trs[k];
	    i=0;
	    marks=0;
	    printf("draw pattern for letter %c\n",letter);
	    start=clock();
		do{

		for(j=0;j<4;j++){
		printf("you are editing row %d cell %d\n",i+1,j+1);
		drawboard();
		printf("please enter 1 to draw in box 0 to skip box\n");
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
    double time_taken=(double)(stop-start)/1000;
    printf("\n\nit took %f seconds\n",time_taken);
    printf("\n%d\n",marks);
	if(marks==28){
	printf("\npassed\n");
	}
	else{
	printf("\nfailed\n");
	}
}
}

int main(){
 char test[4];
 MYSQL *conn;
 MYSQL_RES *res, *res1, *res2, *res3,*res4, *res5, *res6, *res7, *res8;
 MYSQL_ROW row;

 char *server = "localhost";
 char *user = "root";
 char *password = ""; /*password is not set in this example*/
 char *database = "kindacare";

 conn = mysql_init(NULL);

 /* Connect to database */
 if (!mysql_real_connect(conn, server,
 user, password, database, 0, NULL, 0))
 {
   printf("Failed to connect MySQL Server %s. Error: %s\n", server, mysql_error(conn));
   return 0;
 }

 /* send SQL query */
 if (mysql_query(conn, "select Q1 from assignment where AssignmentID = 2"))
 {
   printf("Failed to execute query. Error: %s\n", mysql_error(conn));
   return 0;
 }


 res = mysql_store_result(conn);
 if (res == NULL)
 {
   return 0;
 }

 int columns = mysql_num_fields(res);

 int i = 0;

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


 mysql_free_result(res);
 mysql_close(conn);


	attempt_test(test);

}

