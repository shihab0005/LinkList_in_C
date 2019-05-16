#include<stdio.h>
#include<conio.h>
struct node{
    int data;
    struct node* link;

};
struct node* head ;
void print()
{
    struct node* temp;
    temp = head;
    while(temp !=NULL){

        printf("%d ",temp->data);
        temp=temp->link;

    }
}

int main()
{

    head=NULL;
    head =(struct node*)malloc(sizeof(struct node));
    head->data=2;
    head->link =(struct node*)malloc(sizeof(struct node));

    head->link->data=4;
    head->link->link=(struct node*)malloc(sizeof(struct node));

    head->link->link->data=6;
    head->link->link->link=NULL;

    print();


}
