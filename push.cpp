#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int id;
    struct node *next;
};

void push(node **head_ref,int id){
    node *new_node=(node*)malloc(sizeof(node));
    node *temp=*head_ref;
    new_node->id=id;
    new_node->next=*head_ref;

    if(*head_ref!=NULL){
        while(temp->next!=*head_ref){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    else{
        new_node->next=new_node;
    }

    *head_ref=new_node;
}

void printlist(node *n){
    node *temp=n;
    if(n!=NULL){
        do{
            cout<<temp->id<<endl;
            temp=temp->next;
        }
        while(temp!=n);
    }
}

int main(){
    node *head=NULL;
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);

    printlist(head);
}
