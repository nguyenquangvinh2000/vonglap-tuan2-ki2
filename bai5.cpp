#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x,s=1,tu=1,mau=1;
	cout<<"nhap x:";
	cin>>x;
	for(int i=1;i<100;i=i+1)
	{
		tu=pow(x,i);
		mau=mau*i;
		s=s+float(tu/mau);
	}
	cout<<"e^x = "<<s<<endl;
	return 0;
}
