#include<stdio.h>
int main(){
	int n,d,rev=0;
	printf("enter a number;\n");
	scanf("%d",&n);
	if(n!=0){
		while(n!=0){
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
}
	printf("%d",rev);
	return 0;
}