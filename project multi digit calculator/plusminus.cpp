#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int size=15;
	int check1=0;
	int signcheck=1;
	int digit1[size];
	int digit2[size];
	int power;
	char exit;
	while(exit!='E')
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
					int sin=0;
					if(digit1[0]<0&&digit2[0]<0)
					{
						digit1[0]=(-1)*digit1[0];
						digit2[0]=(-1)*digit2[0];
						sine=1;
						sin=1;
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
					if(digit1[0]>digit2[0])
					sin=1;
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
					cout<<"sum is ";
					if(sin==1)
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
					if(sin==1)
					cout<<"-";
					for(int l=0;l<size;l++)
					{
						cout<<sum[l];
					}
				}}
			}}}
