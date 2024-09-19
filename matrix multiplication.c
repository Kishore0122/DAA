#include<stdio.h>
int main(){
	int i,j,k,n;
	printf("enter a number:");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
	printf("enter elements of matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				c[i][j]=0;
}
}
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				for(k=0;k<n;k++){
					c[i][j]+=a[i][k]*b[k][j];
				}
		}
	}
	printf("multiplication of matrix=\n%d");
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
	printf("\n");	
	}
	return 0;
}