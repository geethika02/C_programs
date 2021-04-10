#include <stdio.h>

int main(){
	int n,k,c=0;
	scanf("%d", &n);              			
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int p=j+1;p<n;p++)
			{
				if((a[i]+a[j]+a[p])==k)
				c=c+1;
			}
		}
	}
	printf("%d",c);
}
