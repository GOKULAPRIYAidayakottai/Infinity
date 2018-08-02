#include <stdio.h>
void push(int);
void pop();
void display();
int stack[100],top=-1;
int s=5;
int main()
{
    int ch,n,c=1;
    
    while(c==1)
    {
    printf("1-Insert\n2-Delete\n3-Display ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter num to be insert : ");
               scanf("%d",&n);
               push(n);
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        default:printf("Invalid option  ");
    }
    printf("\n1-continue   2-exit  ");
    scanf("%d",&c);
    }
    return 0;
}
void push(int n)
{
    if(top<s-1)
    {
        top++;
        stack[top]=n;
        printf("successfully inserted  ");
    }
    else
    {
        printf("stack is full  ");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty  ");
    }
    else
    {
        top--;
         printf("successfully deleted  ");
    }
    
}
void display()
{
    int temp,i;
    if(top==-1)
    {
         printf("stack is empty  ");
    }
    else
    {
        temp=top;
        for(i=temp;i>=0;i--)
        {
            printf("%d ",stack[i]);    
        }
    }
}
