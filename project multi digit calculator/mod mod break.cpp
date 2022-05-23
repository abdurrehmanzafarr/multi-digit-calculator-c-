#include<iostream>
using namespace std;
int main()
{
	double mod=123456789123456;
	double tempo=mod;
	double g;
	int arr[15];
	for(int k=15-1;k>=0;k--)
	{
		while(tempo>=10)
		{
			tempo=tempo-10;
		}
		arr[k]=tempo;
		mod=mod/10;
		tempo=mod;
		cout<<arr[k]<<endl;
	}
	return 0;
}
