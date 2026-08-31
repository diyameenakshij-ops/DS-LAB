#include <stdio.h>
#include <stdlib.h>


struct Node {
int data;
struct Node* next;
};
void displayList(struct Node* head) {
if (head == NULL) {
printf("List is empty.\n");
return;
}
struct Node* temp = head;
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
struct Node* deleteBeginning(struct Node* head) {
if (head == NULL) {
printf("List is already empty. Nothing to delete.\n");
return NULL;
}
struct Node* temp = head; 
head = head->next;        
free(temp);               
return head;
}
struct Node* deleteEnd(struct Node* head) {
if (head == NULL) {
printf("List is empty. Nothing to delete.\n");
return NULL;
}
if (head->next == NULL) {
free(head);
return NULL;
}
struct Node* current = head;
while (current->next->next != NULL) {
current = current->next;
}
free(current->next);
current->next = NULL; 
return head;
}
struct Node* deleteAtPosition(struct Node* head, int position) {
if (head == NULL) {
printf("List is empty. Nothing to delete.\n");
return NULL;
}
if (position == 0) {
struct Node* temp = head;
head = head->next;
free(temp);
return head;
}
struct Node* prev = NULL;
struct Node* current = head;
for (int i = 0; current != NULL && i < position; i++) {
prev = current;
current = current->next;
}
if (current == NULL) {
printf("Position %d is out of bounds.\n", position);
return head;
}
prev->next = current->next;
free(current); 
return head;
}
struct Node* insertBeginning(struct Node* head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head;
    return newNode;
}


int main() {
    struct Node* head = NULL;

    
    head = insertBeginning(head, 10);
    head = insertBeginning(head, 20);
    head = insertBeginning(head, 30);
    head = insertBeginning(head, 40);
    head = insertBeginning(head, 50);
    printf("Original List: \n");
    displayList(head);
    printf("\nAfter deleting from beginning:\n");
    head = deleteBeginning(head);
    displayList(head);
    printf("\nAfter deleting from end:\n");
    head = deleteEnd(head);
    displayList(head);
    printf("\nAfter deleting node at index 1:\n");
    head = deleteAtPosition(head, 1);
    displayList(head);
    return 0;
    }


