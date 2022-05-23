#include<iostream>
using namespace std;
int main()
{
	int size=15;
	int check1=0;
	int signcheck=1;
	int digit1[size];
	int digit2[size];
	double power;
	cout<<"enter the first multi digit number = ";
	for(int i=0;i<size;i++)
	{
		cin>>digit1[i];
	}
	char sign;
	cout<<"press the respective key. + - * / % ^ = ";
	cin>>sign;
	while(sign!='+'&&sign!='-'&&sign!='*'&&sign!='/'&&sign!='%'&&sign!='^')
		{
			signcheck=0;
			cout<<"invalid sign."<<endl;
			cout<<"press the respective key. + - * / % ^ = ";
			cin>>sign;
			if(sign=='+'||sign=='-'||sign=='*'||sign=='/'||sign=='%'||sign=='^')
			{
				signcheck=1;
				break;
			}
		}
	if(signcheck==1)
	{
		if(sign=='^')
		{
			cout<<"enter the second multi digit number = ";
			cin>>power;
		}
		else{
			cout<<"enter the second multi digit number = ";
				for(int k=0;k<size;k++)
		{
			cin>>digit2[k];
		}}
		for(int c=1;c<size;c++)
		{
			if(digit1[c]<0)
			check1=1;
			if(digit2[c]<0)
			check1=1;
		}
		if(check1==1)
		cout<<"invalid entry.";
		else 
		{
				if(sign=='^')
				{
					int copyarr[size];
					for(int e=0;e<size;e++)
					{
						copyarr[e]=digit1[e];
					}
			
					int temp=power;
					int count=0;
					while(temp!=0)
					{
						temp=temp/10;
						count++;
					}
					int arr[count]={};
					int tempo=power;
					int g=0;
					for(int k=count-1;k>=0;k--)
					{
						g=tempo%10;
						tempo=tempo/10;
						arr[k]=g;
					}
						int mainsize=size;
						for(int k=1;k<power;k++)
						{	
							int newsize=mainsize-1; 
							for(int p=mainsize-1;p>=0;p--)
							{
								newsize++;
							}
							int limit=0;
							double sum[newsize]={};
							int f=newsize-1;
							int sizeincre=mainsize;
							int s=1;
							for(int o=size-1;o>=0;o--)
							{
								int u=sizeincre-s;	
								int multiply[sizeincre]={};
								for(int l=mainsize-1;l>=0;l--)
								{	
									multiply[l]=digit1[l]*copyarr[o];
								}
								for(int j=f;j>=0&&u>=0;j--,u--)
								{	 
									if(j>=u)
									sum[j]=sum[j]+multiply[u];
									if(sum[j]>=10&&j!=0)
									{
										limit=sum[j]/10;
										sum[j-1]=sum[j-1]+limit;
										while(sum[j]>=10)
										{	
											sum[j]=sum[j]-10;
										}
									}		
								}
								sizeincre++;
								f--;
								s++;
								
							}
								digit1[newsize];
								for(int t=0;t<newsize;t++)
								{
									digit1[t]=sum[t];
								}
								mainsize=newsize;	
							if(k==power-1)
							{
							
							cout<<"multidigit number raise to power "<<power<<" is ";
							for(int m=0;m<newsize;m++)
							{
								cout<<sum[m];		
							}
				}
			
			}
		}}}
}

