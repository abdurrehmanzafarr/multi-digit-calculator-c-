#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int div=0;
	while(a>=b)
	{
		a=a-b;
		div++;
	}
	cout<<"answer is "<<div;
}
