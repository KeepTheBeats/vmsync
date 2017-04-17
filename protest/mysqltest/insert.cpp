#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>

double random(double a,double b)
{
	return a+(b-a)*rand()/RAND_MAX;
}
//ascii: 97:a,122:z

int main()
{
	MYSQL *c;
	
	char name[5];
	int i;
	int j;

	c=mysql_init(NULL);

	mysql_real_connect(c,"localhost","root","root","test",0,NULL,0);
	
	for(i=0,j=3;i<5;i++,j++)
	{
		
		mysql_query(c,"insert into grade ("++",name,english,chinese,math) values (2,'yifeng',50,90,70)");  //这个程序未完成
	}

	return 0;
}
