#include<stdio.h>
#include<string.h>
int main(){
char string[100];
int length;
	printf("enter a string:\n");
	scanf("%s",&string);
	length=strlen(string);
	printf("length of string is %d",length);
	return 0;
}