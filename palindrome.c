#include<stdio.h>
int main(){
	int n,i,d,on,rev=0;
	printf("enter a number:");
	scanf("%d",&n);
	on=n;
	if(n!=0){
		while(n!=0){
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
}
	if(rev==on){
		printf("%d is palindrome number",on);
	}
	else{
		printf("%d is not a palindrome number",on);
	}
	return 0;
}