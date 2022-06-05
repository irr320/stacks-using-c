#include<stdio.h>
int top=-1;
int n=5;
void main()
{
	int a[5],x;
	do{
	printf("1.push  2.pop  3.display\n");
	scanf("%d",&x);
		if(x==1){
			push(a);
		}
		else if(x==2){
			pop(a);
		}
		else if(x==3){
			display(a);
		}
		else{
			break;
		}
	}while(x>=1 && x<=3);
}
void push(int a[]){
	if(top>=n){
		printf("stack overflow\n");
	}
	else{
		top++;
		printf("enter the ele");
		scanf("%d",&a[top]);
	}}
void pop(int a[]){
	if(top==-1){
		printf("stack underflow\n");
	}
	else{
		printf("element popped is %d\n",a[top]);
		top--;
	}}
void display(int a[]){
	int i;
	printf("elements in stack\n");
	for(i=top;i>=0;i--){
		printf("%d\n",a[i]);
		
	}}
