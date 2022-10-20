#include<iostream>
using namespace std;
void sum(int,int,int,int);
int main()
{
	int a,b,c,x;
	a=6;b=5;c=6;
	sum(x=0,a,b,c);
}
void sum(int y,int x,int m,int n)
{
	int o=y+x+m+n;
	std::cout<<o;
}
