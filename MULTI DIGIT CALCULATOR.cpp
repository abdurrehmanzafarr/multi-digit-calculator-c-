#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int size=15;
	int check1=0;
	int signcheck=1;
	int digit1[size];
	int digit2[size];
	int power;
	char exit;
	while(exit!='e')
	{
		cout<<"	  CALCULATOR"<<endl<<endl;
		cout<<"enter the first "<<size<<" digit number = ";
		for(int i=0;i<size;i++)
		{
			cin>>digit1[i];
		}
		for(int x=0;x<size;x++)
		{
			while(digit1[x]>=10)
			{
				digit1[size]={};
				cout<<"invalid entry. Kindly enter single digit at a time only."<<endl;
				cout<<"enter the first multi digit number = ";
				for(int i=0;i<size;i++)
				{
					cin>>digit1[i];
				}		
				for(int s=0;s<size;s++)
				{
					if(digit1[s]>=10)
					x=0;
				}
			}
			if(x!=0&&digit1[x]<0)
			{
				while(x!=0&&digit1[x]<0)
				{
					cout<<"invalid entry. Kindly enter number only."<<endl;
					cout<<"enter the first multi digit number = ";	
					for(int i=0;i<size;i++)
					{
						cin>>digit1[i];
					}
					for(int s=1;s<size;s++)
					{	
						if(digit1[s]<0)
						x=0;
					}
				}		
			}
		}
		char sign;
		cout<<endl;
		cout<<"press '+' for addition "<<endl;
		cout<<"press '-' for subtraction "<<endl;
		cout<<"press '*' for multiplication "<<endl;
		cout<<"press '/' for division "<<endl;
		cout<<"press '%' for modulus "<<endl;
		cout<<"press '^' for power "<<endl;
		cout<<"press the respective key = ";
		cin>>sign;
		if(sign!='+'&&sign!='-'&&sign!='*'&&sign!='/'&&sign!='%'&&sign!='^')
		{
			while(sign!='+'&&sign!='-'&&sign!='*'&&sign!='/'&&sign!='%'&&sign!='^')
			{
				signcheck=0;
				cout<<"invalid sign."<<endl;
				cout<<"press '+' for addition "<<endl;
				cout<<"press '-' for subtraction "<<endl;
				cout<<"press '*' for multiplication "<<endl;
				cout<<"press '/' for division "<<endl;
				cout<<"press '%' for modulus "<<endl;
				cout<<"press '^' for power "<<endl;
				cout<<"press the respective key = ";
				cin>>sign;
				if(sign=='+'||sign=='-'||sign=='*'||sign=='/'||sign=='%'||sign=='^')
				{
					signcheck=1;
					break;
				}
			}
		}
		if(signcheck==1)
		{
			if(sign=='^')
			{
				cout<<endl<<"enter the power = ";
				cin>>power;
				while(power<0)
				{
					cout<<"invalid entry."<<endl;
					cout<<endl<<"kindly enter the power again= ";
					cin>>power;
				}
			}
			else
			{
				cout<<endl<<"enter the second "<<size<<" digit number = ";
				for(int k=0;k<size;k++)
				{
					cin>>digit2[k];
				}
				for(int x=0;x<size;x++)
				{	
					while(digit2[x]>=10)
					{
						digit2[size]={};
						cout<<"invalid entry. Kindly enter single digit at a time only."<<endl;
						cout<<"enter the second multi digit number = ";
						for(int i=0;i<size;i++)
						{
							cin>>digit2[i];
						}		
						for(int s=0;s<size;s++)
						{
							if(digit2[s]>=10)
							x=0;
						}
					}
					if(x!=0&&digit2[x]<0)
					{
						while(x!=0&&digit2[x]<0)
						{
							cout<<"invalid entry. Kindly enter number only."<<endl;
							cout<<"enter the second multi digit number = ";	
							for(int i=0;i<size;i++)
							{
								cin>>digit2[i];
							}
							for(int s=1;s<size;s++)
							{	
								if(digit2[s]<0)
								x=0;
							}
						}
					}
				}
			}
			if(sign=='+')
			{
				int sine=0;
				int tempa=digit1[0];
				int tempb=digit2[0];
				int sincheck=0;
				if(digit1[0]<0&&digit2[0]<0)
				{
					digit1[0]=(-1)*digit1[0];
					digit2[0]=(-1)*digit2[0];
					sine=1;
					sincheck=tempa;
				}
				else if(digit1[0]<0||digit2[0]<0)
				{
					if(digit1[0]<0)
					{
						sine=digit1[0];
						digit1[0]=(-1)*digit1[0];
					}
					if(digit2[0]<0)
					{
						sine=digit2[0];
						digit2[0]=(-1)*digit2[0];
					}
					if(digit1[0]>digit2[0])
						sincheck=tempa;
					else if(digit2[0]>digit1[0])
						sincheck=tempb;
				}
				if(sine<0)
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
							if(subtract[a]<0)
							{
								subtract[a]=-1*subtract[a];
							}	
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
					cout<<endl;
					cout<<"sum is ";
					if(sincheck<0)
						cout<<"-";
					for(int o=0;o<size;o++)
					{
						cout<<subtract[o];
					}
				}
				else
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
					cout<<endl;
					cout<<"sum is ";
					if(sincheck<0)
						cout<<"-";
					for(int l=0;l<size;l++)
					{
						cout<<sum[l];
					}
				}
			}
			else if(sign=='-')
			{
				int sine=0;
				int show=0;
				int tempa=digit1[0];
				int tempb=digit2[0];
				int sincheck=0;
				if(digit1[0]<0&&digit2[0]<0)
				{
					digit1[0]=(-1)*digit1[0];
					digit2[0]=(-1)*digit2[0];
					sine=1;
					sincheck=tempa;
				}
				else if(digit1[0]<0||digit2[0]<0)
				{
					if(digit1[0]<0)
					{
						sine=digit1[0];
						digit1[0]=(-1)*digit1[0];
					}
					if(digit2[0]<0)
					{
						sine=digit2[0];
						digit2[0]=(-1)*digit2[0];
					}
					if(digit1[0]==digit2[0])
						show=1;
					else if(digit1[0]>digit2[0])
						sincheck=tempa;
					else if(digit2[0]>digit1[0])
						sincheck=tempb;	
				}
				if(sine<0)
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
					cout<<endl;
					cout<<"difference is ";
					if(sincheck>0&&sum[0]!=0)
						cout<<"-";
					else if(show==1&&sum[0]!=0)
						cout<<"-";
					for(int l=0;l<size;l++)
					{
						cout<<sum[l];
					}
				}
				else 
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
					cout<<endl;
					cout<<"difference is ";
					if(sincheck<0&&subtract[0]!=0)
						cout<<"-";
					for(int o=0;o<size;o++)
					{
						cout<<subtract[o];
					}
				}
			}
			else if(sign=='*')
			{
				int sine=0;
				if(digit1[0]<0&&digit2[0]<0)
				{
					digit1[0]=(-1)*digit1[0];
					digit2[0]=(-1)*digit2[0];
					sine=1;
				}
				else if(digit1[0]<0||digit2[0]<0)
				{
					if(digit1[0]<0)
					{
						sine=digit1[0];
						digit1[0]=(-1)*digit1[0];
					}
					if(digit2[0]<0)
					{
						sine=digit2[0];
						digit2[0]=(-1)*digit2[0];
					}
				}		
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
				cout<<endl;
				cout<<"product is "<<endl;
				if(sine<0)
					cout<<"- ";
				for(int m=0;m<newsize;m++)
				{
					cout<<sum[m]<<" ";		
				}
			}
			else if(sign=='/')
			{
				int sine=0;
				if(digit1[0]<0&&digit2[0]<0)
				{
					digit1[0]=(-1)*digit1[0];
					digit2[0]=(-1)*digit2[0];
					sine=1;
				}
				else if(digit1[0]<0||digit2[0]<0)
				{
					if(digit1[0]<0)
					{
						sine=digit1[0];
						digit1[0]=(-1)*digit1[0];
					}
					if(digit2[0]<0)
					{
						sine=digit2[0];
						digit2[0]=(-1)*digit2[0];
					}
				}
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
				cout<<endl;
				if(sine<0)
					div=(-1)*div;
				cout<<"quotient is "<<div<<endl;
			}
			else if(sign=='%')
			{
				int sine=0;
				if(digit1[0]<0&&digit2[0]<0)
				{
					digit1[0]=(-1)*digit1[0];
					digit2[0]=(-1)*digit2[0];
					sine=1;
				}
				else if(digit1[0]<0||digit2[0]<0)
				{
					if(digit1[0]<0)
					{
						sine=digit1[0];
						digit1[0]=(-1)*digit1[0];
					}
					if(digit2[0]<0)
					{
						sine=digit2[0];
						digit2[0]=(-1)*digit2[0];
					}
				}
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
				cout<<endl;
				if(sine<0)
				final=(-1)*final;
				std::cout<<std::setprecision(size);
				cout<<"modulus is "<<final<<endl;
			}
			else if(sign=='^')
			{
				int zeropow=1;
				if(power==0)
					cout<<"multidigit number raise to power "<<power<<" is "<<endl<<zeropow<<endl;
				else if(power==1)
				{
					for(int y=0;y<size;y++)
					{
						cout<<digit1[y];
					}
				}
				else if(power>1)
				{	
					int sine=0;
					if(digit1[0]<0)
					{
						sine=digit1[0];
						digit1[0]=(-1)*digit1[0];
					}
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
						cout<<endl;	
						if(k==power-1&&power!=1)
						{
							cout<<"multidigit number raise to power "<<power<<" is "<<endl;
							if(power%2!=0)
							{
								if(sine<0)
								{
									cout<<"- ";
								}
							}
							for(int m=0;m<newsize;m++)
							{
								cout<<sum[m]<<" ";		
							}
						}
					}
				}
			}
		cout<<endl<<endl<<"Press any key to continue. Press 'e' to exit.";
		cin>>exit;
		}
	}
}
