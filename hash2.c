#include <stdio.h>

int main(){
	int n,a[10000],i=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}     
	int max=a[i];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}         			
int H[max+1];
for(i=0;i<max+1;i++)
{
	H[i]=0;
}
for(i=0;i<n;i++)
{
	H[a[i]]=H[a[i]]+1;
}
i=0;
int max2=H[i];
for(i=1;i<max+1;i++)
{
	if(max2<H[i])
	{
		max2=H[i];
	}
}
for(i=0;i<max+1;i++)
{
	if(max2==H[i])
	{
		printf("%d ",i);
	}
}
}
