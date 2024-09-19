#include<stdio.h>
int main(){
	int n,i;
	printf("enter a number:");
		scanf("%d",&n);
		if(n!=0){
			for(i=1;i<=n;i++){
				if(n%i==0){
					printf("%d",i);
				}
			}
			printf("\n");
		}
		else{
			printf("!!error:");
		}
	return 0;
}