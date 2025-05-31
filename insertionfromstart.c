#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start=0;
struct node *start1=0;
struct node *start2=0;
void create();
void insert_begin();
void insert_end();
void insert_after();
void insert_at();
void delete_begin();
void delete_end();
void delete_after();
void delete_at();
void create1();
void create2();
void reverse();
void merging();
void sorting();
void traverse();
main()
{
    int choice;
    printf("1.exit\n2.traverse\n3.create\n4.insert at beginning\n5.insert at end\n6.delete from beginning\n7.delete from end\n8.insert after a given node\n9.insert at a given location\n10.delete after a node\n11.delete at a given location\n12.reverse\n13.merging\n14.sorting\n");
    while(1)
    {
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice)
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
            case 8:insert_after();
                    break;
            case 9:insert_at();
                    break;
            case 10:delete_after();
                    break;
            case 11:delete_at();
                break;
            case 12:reverse();
                break;
            case 13:merging();
                break;
            case 14:sorting();
                break;
            default:printf("Invalid choice\n");
        }
    }
}

//create
void create()
{
    int total,index,item;
    struct node *newnode;
    printf("Enter the total no. of nodes you want to insert");
    scanf("%d",&total);
    for(index=1;index<=total;index++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter values to store:");
        scanf("%d",&item);
        newnode->info=item;
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
        }
        else
        {
            newnode->next=start;
            start=newnode;
        }
    }
}

//create
void create1()
{
    int total,item,i;
    struct node *temp;
    struct node *newnode;
    printf("Enter total number of nodes you want to insert:");
    scanf("%d",&total);
    for(i=1;i<=total;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter value to store:");
        scanf("%d",&item);
        newnode->info=item;
        newnode->next=NULL;
        if(start1==NULL)
        {
            start1=newnode;
        }
        else
        {
            newnode->next=start1;
            start1=newnode;
        }
    }
}

//create
void create2()
{
    int total,item,i;
    struct node *newnode;
    printf("Enter total number of nodes you want to insert:");
    scanf("%d",&total);
    for(i=1;i<=total;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter value to store:");
        scanf("%d",&item);
        newnode->info=item;
        newnode->next=NULL;
        if(start2==NULL)
        {
            start2=newnode;
        }
        else
        {
            newnode->next=start2;
            start2=newnode;
        }
    }
}

//merging
void merging()
{
    struct node *temp;
    create1();
    create2();
    temp=start1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=start2;
    start=start1;
}

//insertion at beginning
void insert_begin()
{
    int item;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a value");
    scanf("%d",&item);
    newnode->info=item;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        newnode->next=start;
        start=newnode;
    }
}

//traverse
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
        while(temp!=NULL)
        {
            printf("%d\t",temp->info);
            temp=temp->next;
        }
        printf("\n");
    }
}

//inserting at the end
void insert_end()
{
    int item;
    struct node *newnode;
    struct node *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter item to insert at end:");
    scanf("%d",&item);
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
        temp->next=newnode;

    }
}

//delete from beginning
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
        printf("%d value is deleted\n",temp->info);
        start=temp->next;
        free(temp);
    }
}

//delete from end
void delete_end()
{
    struct node *temp;
    struct node *ptr;
    if(start==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=NULL;
        free(temp);
    }
}

//insertion after a given specific position
void insert_after()
{
    int value,item;
    struct node *temp;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value to store:");
    scanf("%d",&item);
    newnode->info=item;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        temp=start;
        printf("Enter value after which you want to insert:");
        scanf("%d",&value);
        while(temp!=NULL && temp->info!=value)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("The value is not present\n");
            }
            else
            {
                newnode->next=temp->next;
                temp->next=newnode;
            }
        }
    }
}

//insert at a specific location
void insert_at()
{
    int pos,item,count;
    struct node *newnode;
    struct node *temp, *ptr;
    printf("Enter position to insert:");
    scanf("%d",&pos);
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value to insert at a specific location:");
    scanf("%d",&item);
    newnode->info=item;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        temp=start;
        count=1;
        while(temp!=NULL && count!=pos)
        {
            count=count+1;
            ptr=temp;
            temp=temp->next;
            if(temp==NULL)
            {
                printf("node is not present\n");
            }
            else
            {
                ptr->next=newnode;
                newnode->next=temp;
            }
        }
    }
}

//delete after a given node
void delete_after()
{
    int value;
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Enter value you want do delete:");
        scanf("%d",&value);
        temp=start;
        while(temp!=NULL && temp->info!=value)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("node is not present\n");
            }
            else
            {
                ptr=temp->next;
                temp->next=ptr->next;
                free(ptr);
            }
        }
    }
}

//delete at a specific location
void delete_at()
{
    struct node *temp,*ptr;
    int loc,count;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Enter location which you want to delete:");
        scanf("%d",&loc);
        temp=start;
        count=1;
        while(temp!=NULL && count!=loc)
        {
            count=count+1;
            ptr=temp;
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Node is not present\n");
            }
            else
            {
                ptr->next=temp->next;
                free(temp);
            }
        }
    }
}
//reverse
void reverse()
{
    struct node *temp,*temp1,*temp2;
    if (start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp1=NULL;
        temp2=NULL;
        temp=start;
        while(temp!=NULL)
        {
            temp1=temp->next;
            temp->next=temp2;
            temp2=temp;
            temp=temp1;
        }
        start=temp2;
    }
}

//sorting
void sorting()
{
    int item;
    struct node *temp,*min,*ptr;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        {
            min=temp;
            ptr=temp->next;
            while(ptr!=NULL)
            {
                if(ptr->info<min->info)
                {
                    min=ptr;
                }
                 ptr=ptr->next;
            }
            if(temp!=min)
            {
                item=temp->info;
                temp->info=min->info;
                min->info=item;
            }
            temp=temp->next;
        }
    }
}