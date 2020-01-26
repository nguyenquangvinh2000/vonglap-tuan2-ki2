#include<iostream>
using namespace std;

int main()
{
	int n,f,f0=1,f1=1;
	cout<<"nhap n:"<<endl;
	cin>>n;
	if(n==0)
		cout<<"khong co so nao"<<endl;
	else if(n==1)
	{
		cout<<f0<<endl;
	}
	else if(n==2)
	{
		cout<<f0<<endl;
		cout<<f1<<endl;
	}
	else if(n>2)
	{
		cout<<f0<<endl;
		cout<<f1<<endl;
	}
		
		for(int i=0;i<=n-1;i=i+1)
		{
			f=f0+f1;
			f0=f1;
			f1=f;
			cout<<f<<endl;
			
		}
		return 0;
}

