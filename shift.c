#include <stdio.h>


int main(){
	int t,n,k;
	scanf("%d", &t); 
	while(t--)
	{
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d", &k);
		for(int i=k;i<n;i++)
		{
			printf("%d ",a[i]);
		}
			
			for(int j=0;j<k;j++)
			{
				printf("%d ",a[j]);
			}
		
		printf("\n");
	}

}     
	        

