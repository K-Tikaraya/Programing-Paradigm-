#include<stdio.h>
#include<math.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
    }Node;

struct Node* addNode(Node* start, int elem){

    Node *N=(Node *)malloc(sizeof(Node));
    N->data=elem;
    N->next=NULL;
    if(start==NULL){
     start=N;
     return start;
    }

   Node* ptr =start;
   while(ptr->next!=NULL){
    ptr=ptr->next;
   }
   ptr->next=N;
   return start;
}

void printLL(Node * start){
   if(start==NULL){
    printf("Linked List is empty");
    return;
    }
   Node* ptr=start;
   while(ptr!=NULL){
    printf("%d-> ",ptr->data);
    ptr=ptr->next;
   }
   printf("NULL");
   return;

}


void Least(Node* start ){
   Node*p=start;
   Node*min=start;
   while(p->next!=NULL){
    if(p->next->data<min->data){
        min=p->next;
    }
    p=p->next;
   }

   int temp=start->data;
   start->data=min->data;
   min->data=temp;

  return;
}


struct Node* sort(Node* start){
    Node* ptr=start;
    Node* current=start;
    if(ptr->next==NULL){
        return ptr;
    }

    //while(ptr->next!=NULL){
        Least(ptr);
        ptr=ptr->next;
        sort(ptr);
    

    return current;
    


}

int main(){
int n,d,i,x;
    struct Node *first=NULL;
    printf("Enter size of linked list:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
      printf("Enter element:");
      scanf("%d",&d);
      first=addNode(first,d);
    }

    printLL(first);
    first=sort(first);
    printf("\n sorted linked list is:");
    printLL(first);



}


