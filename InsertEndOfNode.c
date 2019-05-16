#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node* link;


};
struct node* head;

void print()
{
    struct node* temp;
    temp=head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
void insert(int value)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node* t;
        t=head;
        while(t->link !=NULL)
        {
            t = t->link;
        }
        t->link=temp;


    }

}
int main()
{
    head=NULL;
    insert(2);
    insert(5);
    insert(2);
    insert(50);
     insert(20);
    insert(125);
    print();

}
