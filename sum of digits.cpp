#include<iostream>
int main(){
	int sum=0,n,i,d;
	printf("enter a number:\n");
	scanf("%d",&n);
	if(n!=0){
		while(n!=0){
		d=n%10;
		sum=sum+d;
		n/=10;
	}
		printf(" sum of digits=%d",sum);
	}
	else{
		printf("!!error");
	}
	return 0;
}