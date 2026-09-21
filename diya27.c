#include <stdio.h>
#define MAX 5  

int stack[MAX];
int top = -1;  
int pop() {
if (top == -1) {
printf("Stack Underflow! The stack is empty.\n");
return -1; 
}

int popped_value = stack[top];
top--; 
return popped_value;
}
void push(int value) {
if (top == MAX - 1) {
printf("Stack Overflow! Cannot push %d\n", value);
} else {
top++;
stack[top] = value;
printf("Pushed %d onto the stack\n", value);
}
}
int main() {
push(10);
push(20);
push(30);
printf("Popped value: %d\n", pop());
printf("Popped value: %d\n", pop());
printf("Popped value: %d\n", pop());
printf("Popped value: %d\n", pop());

    return 0;
}





