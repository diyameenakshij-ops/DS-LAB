#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
int isFull(){
return top==-1;
}
int main(){
if(isFull()){
printf("stack is full\n");
}else{
printf("stack is empty\n");
return 0;
}
}
