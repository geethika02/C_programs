#include <stdio.h>
int pos(int n)
{
	if(n<0)
	return n;

    n=n-5;
	printf("%d ",n);
	pos(n);
}
void neg(int n,int p)
{
	if(n==p)
    return;

	n=n+5;
	printf("%d ",n);
	neg(n,p);
}
int main(){
	int n;
	scanf("%d", &n); 
	printf("%d ",n);
	int p=n;
	int l=pos(p);
    neg(l,p);
	
}
