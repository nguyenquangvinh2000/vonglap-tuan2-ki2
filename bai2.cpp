#include<iostream>
using namespace std;

int main()
{
	int n,giaithua=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		giaithua=giaithua*i;
	}
	cout<<"giai thua n:"<<giaithua<<endl;
	return 0;
}
