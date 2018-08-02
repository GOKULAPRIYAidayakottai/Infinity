#include <stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
struct node
{
    int data;
    struct node *next;
}*head,*current,*new;

int main()
{
   int ch=1,n;
   head=NULL;
   while(1)
   {
       printf("\n1-insert\n2-delete\n3-dispaly\n4-exit  ");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("enter the element to be push:  ");
                scanf("%d",&n);
                push(n);
                break;
           case 2:pop();
                break;
           case 3:display();
                break;
           case 4:
                return 0;
                break;
           default:printf("Invalid Option  ");
        }
   }

    return 0;
}
void push(int n)
{
    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    if(head==NULL)
    {
       new->next=NULL;
       head=new;
    }
    else
    {
        new->next=head;
        head=new;
    }
    printf("Element Pushed  ");
}
void pop()
{
    if(head!=NULL)
    {
    current=head;
    if(current->next==NULL)
    {
        current=NULL;
        head=NULL;
    }
    else
    {
       head=current->next;
       current=NULL;
    }
    printf("Element Poped  ");
    }
    else
    {
        printf("stack already empty");
    }
    
}
void display()
{
     if(head==NULL)
    {
        printf("stack is empty");
        
    }
    else
    {
    current=head;
    while(current->next!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("%d ",current->data);
    }
}
