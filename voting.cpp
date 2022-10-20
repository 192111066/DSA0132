#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"you are eligible for voting";
	}
	else
	{
		cout<<"you are not eligible for voting";
	}
	cout<<"still u have"<<age-18<<"years";
	return 0;
}
