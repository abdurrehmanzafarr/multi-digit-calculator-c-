#include<iostream>
using namespace std;
int main()
{
	int digit1,digit2;
	cin>>digit1>>digit2;
	int tempa=digit1;
	int tempb=digit2;
	int sincheck=0;
	if(digit1<0)
	digit1=(-1)*digit1;
	if(digit2<0)
	digit2=(-1)*digit2;
	if(digit1>digit2)
	sincheck=tempa;
	else if(digit2>digit1)
	sincheck=tempb;
	if(sincheck<0)
	cout<<"-";
	else
	cout<<"+";
}
