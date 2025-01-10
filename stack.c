#include<stdio.h>
int arr[10];
int top=-1;
int value;

void push(){
	printf("Enter the value to push:");
	scanf("%d",&value);
	if(top==9){
		printf("The stack is Overflown.");
	}
	else
	top++;
	arr[top]=value;
	printf("the item pushed is:%d\n",arr[top]);
}
void pop(){
	printf("Enter the value to pop:");
	scanf("%d",&value);
	if(top==-1){
		printf("The stack is Underflown.");
	}
	else 
	value=arr[top];
	top--;

}
void show(){
	if(top==-1){
		printf("Nothing to show.");
	}
	else 
	printf("the current stack is:\n");
	for(int i=top;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}
int main()
{
int op;
do{

printf("please select the operation.\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
scanf("%d",&op);
switch(op){
	case 1:
		push();
		break;
	case 2:
		pop();
		break;
	case 3:
		show();
		break;
	case 4:
	    printf("exit");
	    return 0 ; 
	    break;
	default:
	printf("invalid choice");
}

}
while(op=4);
return 0;
}
