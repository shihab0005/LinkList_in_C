//Delete a node from the Linked List 

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head;

void print(){
	struct node* temp;
	temp =head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp= temp->next;
	}
	
}

void deleteNode(int position){
	if(position ==1){
		struct node* temp;
		temp =head;
		head =head->next;
		free(temp);
	}
	else{
		int i;
		struct node* temp1;
		temp1=head;
		for( i=1; i<=position-2; i++){
			temp1= temp1->next;
		}
		
		struct node* temp2;
		temp2= temp1->next;
		temp1->next =temp2->next;
		free(temp2);
	}
}


void insert(int value){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data =value;
	temp->next =NULL;
	if(head ==NULL){
		head =temp;
	}
	else{
		struct node* t;
		t= head;
		while(t->next !=NULL){
			t=t->next;
		}
		t->next =temp;
	}
}
int main(){
	
	head =NULL;
	insert(4);
	insert(3);
	insert(76);
	insert(21);
	insert(13);
	insert(32);
	print();
	printf("\nAfter Delete NOde :\n");
	deleteNode(1);
	deleteNode(4);
    print();
}

