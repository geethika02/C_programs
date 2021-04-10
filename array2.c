#include <stdio.h>


void ge(int a[],int n)
{
	for( int i=0;i<n;i++)
	{
		int u=-1;
		for(int j=i+1;j<n;j++)
		{
           if(a[i]<a[j])
		   {
			   u=a[j];
			   break;
		   }
		}
		
		printf("%d ",u);
}
}

int main(){
	int n,u;
	scanf("%d", &n); 
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}    
	ge(a,n);

}
