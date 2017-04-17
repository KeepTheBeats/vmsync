#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	MYSQL *c;
	MYSQL_RES *re;
	MYSQL_ROW ro;

	char s[] = "localhost";
	char u[] = "root";
	char p[] = "root";
	char db[] = "mysql";

	c = mysql_init(NULL);

	if(!mysql_real_connect(c,s,u,p,db,0,NULL,0))
	{
		fprintf(stderr,"%s\n",mysql_error(c));
		exit(1);
	}


/*	if(mysql_query(c,"show databases"))
	{
		fprintf(stderr,"%s\n",mysql_error(c));
	}

	if(mysql_query(c,"show tables"))
	{
		fprintf(stderr,"%s\n",mysql_error(c));
	}
*/
	if(mysql_query(c,"use mysql"))
	{
		fprintf(stderr,"%s\n",mysql_error(c));
	}

	if(mysql_query(c,"select host,user from user"))
	{
		fprintf(stderr,"%s\n",mysql_error(c));
	}

	re = mysql_use_result(c);

	printf("MySQL Tables in mysql database:\n");
	
	int i;

	while((ro = mysql_fetch_row(re))!=NULL)
	{
		printf("|\t");
		for(i=0;i<2;i++)
		{
			printf("%-20s\t|\t",ro[i]);
		
		}
		printf("\n");
	}

	mysql_free_result(re);
	mysql_close(c);

	printf("finish!\n");
	return 0;
}
