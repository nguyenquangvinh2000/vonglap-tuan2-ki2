#include<iostream>
using namespace std;
int main()
{
	float n,s=0,s1=0,s2=0,tu=1,mau,t=1;
	cout<<"nhap n:";
	cin>>n;
	for(int i=1;i<=n;i=i+1)
	{
		mau = float (i*i);
		s = s + float(tu/mau);
	}
	cout<<"tong s1="<<s<<endl;
	for(int j=1;j<=n;j=j+1)
	{
		mau=((1+j)*j)/2;
		s1=s1+tu/mau;
	}
	cout<<"tong s2="<<s1<<endl;
	for(int k=1;k<=n;k=k+1)
	{
		mau=((1+k)*k)/2;
		t=t*k;
		s2=s2+(t/mau);
	}
	cout<<"tong s3="<<s2<<endl;
	return 0;
}
