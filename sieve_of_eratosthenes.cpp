#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t,i,j;
	cin>>t;
	bool prime[1000001]; 
	memset(prime,true,sizeof(prime));
	for(i=2;i<=sqrt(1000000);i++)
	{
		if(prime[i]==true)
		{
			for(j=i*i;j<=1000000;j+=i)
			prime[j]=false;
		}
	}
	int hash[1000001],p=2,g=0;
	hash[0]=0;
	hash[1]=0;
	for(int i=2;i<=1000000;i++){
		if(prime[i])
			g++;
		hash[p]=g;
		p++;
	}
	while(t--){
		long long int n;
		cin>>n; 
		cout<<hash[n]+1<<endl;
	}
	}

