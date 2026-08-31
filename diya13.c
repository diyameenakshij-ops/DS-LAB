#include <stdio.h>
#include <stdlib.h>


struct Node {
int data;           
struct Node* next;  
};


void traverseLinkedList(struct Node* head) {
struct Node* current = head;
printf("Linked List: ");
while (current != NULL) {
printf("%d -> ", current->data); 
current = current->next;         
}
printf("NULL\n");
}


struct Node* createNode(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
if (newNode == NULL) {
printf("Memory allocation failed!\n");
exit(1);
}
newNode->data = value;
newNode->next = NULL;
return newNode;
}

int main() {
struct Node* head = createNode(10);
struct Node* second = createNode(20);
struct Node* third = createNode(30);
head->next = second;
second->next = third;
third->next = NULL; 
traverseLinkedList(head);
free(head);
 free(second);
free(third);
return 0;
}

