#include <iostream>

using namespace std;

int main() {
	int n,i,flag=0,s;
	int a[100000];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>s;
	for(i=1;i<=n;i++)
	{
if(a[i]==s)
{
	flag=1;
	break;
}
	}
if(flag==1)
cout<<i;
else
cout<<"-1";
	}
