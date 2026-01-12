#include<stdio.h>
int main() {
	int i,j,n=5,k=6;
	int a[5][6] = {{5,5,5,5,5,5},{0,0,0,0,0,0},{5,5,5,5,5,5},{0,0,0,0,0,0},{5,5,5,5,5,5}} ;
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%d",a[i][j]);	
		} printf("\n");	
	} 
}
