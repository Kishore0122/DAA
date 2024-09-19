#include<stdio.h>
int main(){
	int n,arr[100],i,max,min;
	 printf("enter a number:\n");
    scanf("%d",&n);
	printf("enter elements in array:\n");
	for(i=0;i<=n;i++){
	scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for(i=0;i<=n;i++){
if(arr[i]>max){
	max=arr[i];
}
else if(arr[i]<min){
	min=arr[i];
}
}
	printf("maximum:%d\n",max);
	printf("minimum:%d\n",min);
return 0;
}