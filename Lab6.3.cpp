#include<stdio.h>
int main() {
	int a[3][4];
	int i,j,n,k,min=999 ;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d ",(a[i][j])+1);
		} printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	} printf("%d",min);
}
