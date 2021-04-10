#include <stdio.h>

int sum(int n)
{
	int s=0;
	while(n>0 || s>9)
	{
		if(n==0)
		{
			n=s;
			s=0;
		}
		s=s+(n%10);
		n=n/10;
	}
	return s;
}

int main(){
	int num,n,k;
	scanf("%d", &num);       
	while(num--)
	{
scanf("%d",&n);

k=sum(n);
printf("%d\n",k);
	}
}
