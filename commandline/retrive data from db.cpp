
#include <mysql.h>
#include <stdio.h>
int main()
{
char ltr[4]={' ',' ',' ',' '};
 MYSQL *conn;
 MYSQL_RES *res, *res1, *res2, *res3,*res4, *res5, *res6, *res7, *res8;
 MYSQL_ROW row;
 char ltrs[4];

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
     strcpy(ltrs,row[i]);

   }
   printf("\n");
 }
 printf("%s\n",ltrs);

 mysql_free_result(res);
 mysql_close(conn);

 return 1;
}
