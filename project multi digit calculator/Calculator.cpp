#include<iostream>
using namespace std;
int main()
{
	const int size=5;
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
			cout<<"enter the power to find = ";
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
			if(sign=='+')
			{
				int sum[size];
				int limit=0;
				for(int a=size-1;a>=0;a--)
				{
					sum[a]=digit1[a]+digit2[a];
					if(sum[a]>=10&&a!=0)
					{
						limit=sum[a]/10;
						digit1[a-1]=digit1[a-1]+limit;
						sum[a]=sum[a]%10;
					}
				}
				cout<<"sum is ";
				for(int l=0;l<size;l++)
				{
					cout<<sum[l];
				}
			}
			else if(sign=='-')
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
			else if(sign=='*')
			{
				int newsize=size-1;
				int limit=0;
				for(int p=size-1;p>=0;p--)
				{
					newsize++;
				}
				int f=newsize-1;
				int sum[newsize]={};
				int sizeincre=size;
				int s=1;
				for(int o=size-1;o>=0;o--)
				{
					int u=sizeincre-s;	
					int multiply[sizeincre]={};
					for(int l=size-1;l>=0;l--)
					{	
						multiply[l]=digit1[l]*digit2[o];
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
					sizeincre++;
					f--;
					s++;
				}
				cout<<"product is "<<endl;
				for(int m=0;m<newsize;m++)
				{
					cout<<sum[m];		
				}
			}
	else if(sign=='/')
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
			cout<<"quotient is "<<div<<endl;
		}
	}
	else if(sign=='%')
	{
		if(digit1[0]<0||digit2[0]<0)
		{
			cout<<" invalid entries for modulus ";
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
			cout<<"modulus is "<<final<<endl;
		}
	}
	else if(sign=='^')
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
			
	}}
	
		cout<<endl;
		system("pause");
		return 0;
		}
	}
}









