#include<iostream>
using namespace std;
void check(char*);
int main()
{
	char *s="admin";
	check(s);
	return 0;
}

void check(char *f)
{
	if (f="admin")
	{
		cout<<"correct";
		
	}
	else
	{
		cout<<"incorrect";
	}
}
