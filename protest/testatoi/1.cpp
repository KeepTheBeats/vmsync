#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]){

	int i = 0;
	int j = 0;
	int k = 0;

	string s1;
	const char *s2;
	char *s3;

	int a;

	getline(cin,s1,'\n');

	s2 = s1.data();

	s3 = new char[strlen(s2)+1];

	strcpy(s3,s2);

	a = atoi(s3);

	cout<<s1<<endl<<s2<<endl<<s3<<endl<<endl;
	printf("%d\n",a);

	return 0;
}
