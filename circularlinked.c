#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *next;
};
struct node *start=NULL;
void insert_begin();
void traverse();
void create();
void insert_end();
void delete_begin();
void delete_end();

main()
{
    int choices;
    printf("1.exit\n2.traverse\n3.create\n4.insert at begin\n5.insert at end\n6.delete from beginning\n7.delete from end\n");
    while(1)
    {
        printf("Enter choices:");
        scanf("%d",&choices);
        switch(choices)
        {
            case 1:exit(0);
            case 2:traverse();
                break;
            case 3:create();
                break;
            case 4:insert_begin();
                break;
            case 5:insert_end();
                break;
            case 6:delete_begin();
                break;
            case 7:delete_end();
                break;
            default:printf("invalid choice\n");
        }
    }
}

void insert_begin()
{
    struct node *newnode,*temp;
    int item;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value to store:");
    scanf("%d",&item);
    newnode->info=item;
    newnode->next=newnode;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        temp=start;
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        newnode->next=start;
        start=newnode;
        temp->next=start;
    }
}

void traverse()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=start;
        do
        {
            printf("%d\t",temp->info);
            temp=temp->next;
        } while (temp!=start);
        printf("\n");
        
    }
}

void create()
{
    int total,i,item;
    struct node *newnode,*temp;
    printf("Enter the total number of nodes:");
    scanf("%d",&total);
    for(i=1;i<=total;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter value to store:");
        scanf("%d",&item);
        newnode->info=item;
        newnode->next=newnode;
        if(start==NULL)
        {
            start=newnode;
        }
        else
        {
            temp=start;
            while(temp->next!=start)
            {
                temp=temp->next;
            }
            newnode->next=start;
            start=newnode;
            temp->next=newnode;
        }
    }
}

void insert_end()
{
    int item;
    struct node *newnode,*temp;
    printf("Enter value to insert at end:");
    scanf("%d",&item);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->info=item;
    newnode->next=newnode;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        temp=start;
        do
        {
            temp=temp->next;
        } while (temp->next!=start);
        newnode->next=start;
        temp->next=newnode;
    }
} 

void delete_begin()
{
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("LIst is empty\n");
    }
    else
    {
        temp=start;
        do
        {
            temp=temp->next;
        } while (temp->next!=start);
        ptr=start;
        start=ptr->next;
        temp->next=start;
        free(ptr);
    }
}

void delete_end()
{
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=start;
        do
        {
            ptr=temp;
            temp=temp->next;
        } while (temp->next!=start);
        ptr->next=start;
        free(temp);
    }
}