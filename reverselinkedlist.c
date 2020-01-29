#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* rev(struct node * root,struct node **head){
    if(root->next==NULL){
        *head=root;
        return root;
    }

    struct node* temp=rev(root->next,head);
    struct node *lol=temp->next;
    temp->next=root;
    root->next=lol;
    return root;
}

struct node* reverse(struct node * curr){
    struct node * head=curr;
    rev(curr,&head);
    return head;
}

/*struct node* reverse(struct node * curr){
    struct node* first=curr;
    struct node* second;
    if(first){
        second=first->next;
    }
    if(!second){
        return first;
    }
    else{
        struct node* h=reverse(second);
        first->next=second->next;
        second->next=first;
        return h;
    }


};

*/
int main()
{
    struct node* first = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    first->data=11;
    first->next=second;
    second->data=22;
    second->next=third;
    third->data=33;
    third->next=NULL;
    struct node* head = first;
    head=reverse(head);
    struct node* curr=head;
    while(curr!=NULL){
        printf("%d \n",curr->data);
        curr=curr->next;
    }


}
