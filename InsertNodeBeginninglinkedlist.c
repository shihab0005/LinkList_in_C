//	 Insert Node at the Beginning of a linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data ;
	struct node* next;
};
struct node* head;

void print(){
	 struct node* temp;
	 head =temp;
	 while(temp != NULL){
	 	printf("%d ",temp->data);
	 	temp =temp->next;
	 }
}
void insert(int value){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data =value;
    temp->next =head;  
    head =temp;
 	
}

int main(){
	head =NULL;
	
	insert(1);
	insert(2);
	insert(4);
	print();
	
}
