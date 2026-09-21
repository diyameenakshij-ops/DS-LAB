#include<stdio.h>
#define MAX 5
int stack [MAX];
int top=-1;
void push (int value){
if(top==MAX-1){
printf("stack overflow/n");
}else{
top++;
stack[top]= value;
printf("%d pushed into stack\n",value);
}
}
int main(){
push(10);
push(25);
push(32);
push(43);
push(89);
return 0;
}
