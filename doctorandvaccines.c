#include <stdio.h>

int main(){
	int t,n,k;
	scanf("%d", &t);              	
	while(t--)
	{
		int i,j;
		scanf("%d",&n);
		int a[n];
		for(int p=0;p<n;p++)
		{
			scanf("%d",&a[p]);
		}
		scanf("%d",&k);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((a[i]+a[j])==k)
				break;


			}
			
		}
	printf("%d %d",i,j);	
	printf("\n");

	}
}

