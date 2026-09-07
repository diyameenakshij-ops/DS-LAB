#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *prev;
struct node *next;
};
struct node * head = NULL;

struct node *newnode=malloc(sizeof(struct node));
newnode->data=x;
if(head!=NULL){
struct node*temp=head;
for(int i=1;i<pos&& temp!=NULL;i++){
temp=temp->next;
}
if(temp!=NULL){
if(temp->prev!=NULL){
temp->prev->next=temp->next;
}else{
head=temp->next;
if(temp->next!=NULL){
temp->next->prev=temp->prev;
free(temp);
}
}




