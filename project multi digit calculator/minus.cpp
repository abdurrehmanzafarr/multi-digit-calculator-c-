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
if(sign=='-')
	{
		int subtract[size];
		int minus=-1;
		for(int a=size-1;a>=0;a--)
		{
			if(digit1[0]<digit2[0])
			{		
				if(digit2[a]<digit1[a]&&a!=0)
				{
					digit2[a-1]=digit2[a-1]-1;
					digit2[a]=digit2[a]+10;
					subtract[a]=digit2[a]-digit1[a];
				}
				else
					subtract[a]=digit2[a]-digit1[a];
				if(subtract[a]<0&&a!=0)
				{
					subtract[a]=-1*subtract[a];
				}	
				if(a==0)
				subtract[a]=minus*subtract[a];
			}
			else
			{
				if(digit1[a]<digit2[a]&&a!=0)
				{
					digit1[a-1]=digit1[a-1]-1;
					digit1[a]=digit1[a]+10;
					subtract[a]=digit1[a]-digit2[a];
				}
				else
					subtract[a]=digit1[a]-digit2[a];
				if(subtract[a]<0&&a!=0)
				{
					subtract[a]=minus*subtract[a];
				}	
			}
		}
		cout<<"difference is ";
		for(int o=0;o<size;o++)
		{
			cout<<subtract[o];
		}
	}
}
