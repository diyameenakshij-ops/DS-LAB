#include <stdio.h>
#include <stdlib.h>


struct Node {
int data;
struct Node* next;
};


void insertAtBeginning(struct Node** head_ref, int new_data) {
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
if (new_node == NULL) {
printf("Memory allocation failed!\n");
return;
}
new_node->data = new_data;
 new_node->next = (*head_ref);
 (*head_ref) = new_node;
}
void insertAfter(struct Node* prev_node, int new_data) {
if (prev_node == NULL) {
printf("The given previous node cannot be NULL\n");
return;
}
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
if (new_node == NULL) {
printf("Memory allocation failed!\n");
return;
}
new_node->data = new_data;
new_node->next = prev_node->next;
prev_node->next = new_node;
}
void insertAtEnd(struct Node** head_ref, int new_data) {
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
if (new_node == NULL) {
printf("Memory allocation failed!\n");
return;
}
struct Node* last = *head_ref;
new_node->data = new_data;
new_node->next = NULL;
if (*head_ref == NULL) {
*head_ref = new_node;
return;
}
while (last->next != NULL) {
last = last->next;
}
last->next = new_node;
}
void printList(struct Node* node) {
while (node != NULL) {
printf("%d -> ", node->data);
node = node->next;
}
printf("NULL\n");
}
void freeList(struct Node* head) {
struct Node* temp;
while (head != NULL) {
temp = head;
head = head->next;
free(temp);
}
}
int main() {
struct Node* head = NULL;
printf("1. Inserting 10 at the end:\n");
insertAtEnd(&head, 10);
printList(head);
printf("\n2. Inserting 20 at the beginning:\n");
insertAtBeginning(&head, 20);
printList(head);
printf("\n3. Inserting 30 at the beginning:\n");
insertAtBeginning(&head, 30);
printList(head);
printf("\n4. Inserting 40 at the end:\n");
insertAtEnd(&head, 40);
printList(head);
printf("\n5. Inserting 50 after the second node (value 20):\n");
insertAfter(head->next, 50);
printList(head);
freeList(head);
return 0;
}

