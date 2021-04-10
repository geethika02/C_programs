#include <stdio.h>

int main(){
	int t,roll,r;
	unsigned long long int l=1;
	scanf("%d", &t);  
	while(t--)
	{l=1;
scanf("%d %d",&roll,&r);
for(int i=1;i<=r;i++)
{
	
	l=l*roll;
}
printf("%llu\n",l);
	}   
}      
