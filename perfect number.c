#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
     if(n!=0){
		for(i=1;i<=n;i++){
			if(n%i==0){
				sum+=i;
			}
		}
	if(sum==n){
		printf("%d number is perfect number:",n);
	}
	else{
		printf("%d number is not a perfect number:",n);
	}
}
else{
	printf("!! error");
}
	return 0;
}