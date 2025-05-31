#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *prev;
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
    printf("*DOUBLE LINKED LIST*\n");
    printf("1.EXIT\n2.DISPLAY\n3.CREATE\n4.INSERT AT BEGINNING\n5.INSERT AT END\n6.DELETE FROM BEGINNING\n7.DELETE FROM END\n");
    while(1)
    {
        printf("enter your choice:");
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
            default:printf("invalid choice!!\n");
        }
    }
}

void traverse()
{
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            printf("%d\t",temp->info);
            ptr=temp;
            temp=temp->next;
        }
        printf("\n");
        temp=ptr;
        while(temp!=NULL)
        {
            printf("%d\t",temp->info);
            temp=temp->prev;
        }
    }
}

void create()
{
    int total,index=1,item;
    struct node *newnode;
    printf("Enter the total number of nodes you want to insert:");
    scanf("%d",&total);
    for(index=1;index<=total;index++)
    {
        printf("Enter value to store:");
        scanf("%d",&item);
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->prev=NULL;
        newnode->info=item;
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
        }
        else
        {
            start->prev=newnode;
            newnode->next=start;
            start=newnode;
        }
    }

}
void insert_begin()
{
    int item;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a value");
    scanf("%d",&item);
    newnode->prev=NULL;
    newnode->info=item;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        start->prev=newnode;
        newnode->next=start;
        start=newnode;
    }
}

void insert_end()
{
    int item;
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value to insert at end:");
    scanf("%d",&item);
    newnode->prev=NULL;
    newnode->info=item;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode->prev=temp;
        temp->next=newnode;
    }
}

void delete_begin()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=start;
        start=temp->next;
        start->prev=NULL;
        free(temp);
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
        while(temp!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        temp->prev=NULL;
        ptr->next=NULL;
        free(temp);
    }
}