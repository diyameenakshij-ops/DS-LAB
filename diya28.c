#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1; 
int isEmpty() {
return top == -1;
}
int isFull() {
return top == MAX_SIZE - 1;
}
void push(int value) {
if (isFull()) {
printf("Stack Overflow! Cannot push %d\n", value);
return;
}
top++;
stack[top] = value;
printf("Pushed %d onto the stack.\n", value);
}
int peek() {
if (isEmpty()) {
printf("Stack Underflow! The stack is empty.\n");
return -1; 
}
return stack[top];
}
int main() {

int topElement = peek();
push(10);
push(20);
push(30);
printf("\n top element value\n");
topElement = peek();
if (topElement != -1) {
printf("The top element is: %d\n", topElement);
}

return 0;
}

