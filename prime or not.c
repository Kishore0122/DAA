#include<stdio.h>
int main(){
int n,i;
printf("enter a number:");
scanf("%d",&n);
if(n>=2){
	while(n>=2){
	for(i=1;i<=n;i++){
		if(n%2==0){
			printf("%d is prime number",n);
		}
		else if(n==3){
			printf("%d is prime number",n);
		}
		else if(n%3==0){
			printf("%d is prime number",n);
		}
	}
}
}
	else{
			printf("!!error");
	}
	return 0;
}