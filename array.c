#include <stdio.h>

int main(){
	int t,n,a[10000],s,p,q,sum=0,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&s);
		while(s--)
		{l=0;
		sum=0;
			scanf("%d %d",&p,&q);
			for(int j=p;j<=q;j++)
			{
				sum=a[j]+sum;
				
			}
			l=sum/(q-p+1);
			printf("%d\n",l);
		}

	}
}
