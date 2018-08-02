#include <stdio.h>
void insert(int);
void display();
void delete(int);
struct node
{
    int data;
    struct node *next;
};
struct node *new,*current,*head;
int main()
{
    int ch=1,n,c;
    head=NULL;
    while(ch==1)
    {
        printf("\n*** choose 1-insert 2-delete 3-display *** ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("\nenter the element to be insert = ");
                   scanf("%d",&n);
                   insert(n);
                   break;
            case 2:printf("\nenter the element to be delete = ");
                   scanf("%d",&n);
                   delete(n);
                   break;
            case 3:display();
                   break;
            default:printf("\nInvalid Option");
        }
        printf("\n*** enter 1-continue 0-exit ***");
        scanf("%d",&ch);
    }
    return 0;
}
void insert(int n)
{
   new=(struct node*)malloc(sizeof(struct node));
   new->data=n;
   new->next=NULL;
   if(head==NULL)
   {
        head=new;
        current=new;   
   }
   else
   {
       current->next=new;
       current=new;
   }
   printf("\nelement inserted successfully");
    
}
void display()
{
    struct node *traverse;
    traverse=head;
    if(head==NULL)
    {
        printf("List is empty");
    }
    while(traverse->next!=NULL)
    {
        printf("%d ",traverse->data);
        traverse=traverse->next;
    }
    printf("%d",traverse->data);
    
}
void delete(int n)
{
    struct node *traverse,*front;
    traverse=head;
    front=head;
    if(head==NULL)
    {
        printf("List is empty");
    }
    while(traverse->data!=n)
    {
        front=traverse;
        traverse=traverse->next;
    }
    front->next=traverse->next;
    printf("\n Element deleted successfully");
    
}
