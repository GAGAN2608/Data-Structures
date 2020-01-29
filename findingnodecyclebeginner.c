#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void cycle (struct node** head,int k)
{
    struct node *curr=*head;
    while(curr->data!=k)
    {
        curr=curr->next;
    }
    struct node *curr1=*head;
    while(curr1->next!=NULL)
    {
            curr1=curr1->next;
    }
    curr1->next=curr;
}

struct node* findcycle(struct node** head)
{
    struct node* curr=*head;
    struct node* ptr1=*head;
    struct node* ptr2=*head;
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    while(ptr1==ptr2)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    if(ptr1!=ptr2)
        return NULL;
    ptr1=*head;
    while(ptr1!=ptr2)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return ptr1;
}
int main()
{
    struct node *prev,*head,*p;
    int n,i;
    printf ("number of elements:");
    scanf("%d",&n);
    head=(struct node *)malloc(sizeof(struct node));
    prev=head;
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        head->next=p;
        head=head->next;
//        printf("%d",head->next);
    }
    int a;
   scanf("%d",&a);
    cycle(&prev,a);
    struct node* t;
    t=findcycle(prev);

    printf("CYCLE STARTS FROM : %d",t->data);
    /*struct node* curr=head;
    while(curr!=NULL)
        {
            printf("%d \n",curr->data);
            curr=curr->next;
        }*/
    return 0;
}
