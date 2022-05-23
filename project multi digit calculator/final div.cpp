#include<iostream>
using namespace std;
int main()
{
	const int size=5;
	int digit1[size];
	int digit2[size];
	cout<<"enter the first multi digit number = ";
	for(int i=0;i<size;i++)
	{
		cin>>digit1[i];
	}
	char sign;
	cout<<"press the respective key. + - * / % ^ = ";
	cin>>sign;
	cout<<"enter the second multi digit number = ";
	for(int k=0;k<size;k++)
	{
		cin>>digit2[k];
	}
	if(sign=='/')
	{
		if(digit1[0]<0||digit2[0]<0)
		{
			cout<<" invalid entries for divison ";
		}
		else
		{
			double main=1;
			for(int y=2;y<=size;y++)
			{
				main=main*10;
			}
			
			double number[size]={};
			double f=main;
			for(int i=0;i<size;i++)
			{
				number[i]=f; 
				f=f/10;
			}
			double arr[size]={};
			for(int m=0;m<size;m++)
			{
				arr[m]=digit1[m]*number[m];
			}
			double final=0;
			for(int j=0;j<size;j++)
			{
				final=final+arr[j];
			}
			
			double num[size]={};
			double d=main;
			for(int i=0;i<size;i++)
			{
				num[i]=d; 
				d=d/10;
			}
			double array[size]={};
			for(int m=0;m<size;m++)
			{
				array[m]=digit2[m]*num[m];
			}
			double second=0;
			for(int j=0;j<size;j++)
			{
				second=second+array[j];
			}
			int div=0;
			while(final>=second)
			{	
				final=final-second;
				div++;
			}
			cout<<"division is "<<div<<endl;
			cout<<"modulus is "<<final<<endl;
		}
	}
}
