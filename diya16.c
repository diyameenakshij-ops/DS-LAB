#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};



int searchElement(struct Node* head, int target) {
struct Node* current = head;
int index = 0;
while (current != NULL) {
if (current->data == target) {
return index;
}
current = current->next;
index++;
}
return -1;
}
void insertAtHead(struct Node** head_ref, int new_data) {
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
if (new_node == NULL) {
printf("Memory allocation failed!\n");
return;
}
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
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
int target, result;
insertAtHead(&head, 10);
insertAtHead(&head, 20);
insertAtHead(&head, 30);
insertAtHead(&head, 40);
printf("Linked List elements: ");
printList(head);
target = 20;
result = searchElement(head, target);
if (result != -1) {
printf("Element %d found at index: %d\n", target, result);
} else {
printf("Element %d not found in the list.\n", target);
}
target = 99;
result = searchElement(head, target);
if (result != -1) {
printf("Element %d found at index: %d\n", target, result);
} else {
printf("Element %d not found in the list.\n", target);
}
freeList(head);
return 0;
}

