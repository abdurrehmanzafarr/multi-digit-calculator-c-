#include<iostream>
using namespace std;
int main()
{
	int size=15;
	int a[size];
	int b[size];
	int limit=0;
	cout<<"enter the first number"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the second number"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>b[i];
	}
	int newsize=size-1;
	for(int p=size-1;p>=0;p--)
	{
		newsize++;
	}
	int f=newsize-1;
	cout<<"newsize"<<newsize<<endl;
	cout<<"array number"<<f<<endl;
	int sum[newsize]={};
	cout<<"sum ";
	for(int i=0;i<newsize;i++)
	{
		cout<<sum[i];
	}
	cout<<endl;
	int sizeincre=size;
	int s=1;
	for(int o=size-1;o>=0;o--)
	{
		int u=sizeincre-s;	
		int multiply[sizeincre]={};
		for(int l=size-1;l>=0;l--)
		{
			multiply[l]=a[l]*b[o];
		}
		for(int j=f;j>=0&&u>=0;j--,u--)
		{	 
			if(j>=u)
			sum[j]=sum[j]+multiply[u];
				if(sum[j]>=10&&j!=0)
				{
					limit=sum[j]/10;
					sum[j-1]=sum[j-1]+limit;
					sum[j]=sum[j]%10;
				}		
			}
		cout<<"product is ";
		for(int m=0;m<sizeincre;m++)
		{
			cout<<multiply[m];
		}
		cout<<endl;
		sizeincre++;
		f--;
		s++;
	}
		cout<<"sum is "<<endl;
		for(int m=0;m<newsize;m++)
		{
			cout<<sum[m];		
		}
}

