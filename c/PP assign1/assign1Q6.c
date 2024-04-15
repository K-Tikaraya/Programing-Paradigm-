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
    };

   Node* ptr=start;
   while(ptr!=NULL){
    printf("%d -> ",ptr->data);
    ptr=ptr->next;
   }

}


struct Node*  printRev(Node * start){
       if(start==NULL){
        printf("Linked list is empty");
       }
       

}

int searchinLL(Node *start,int elem){

  if(start==NULL)
    return 0;
     
  if(start->data==elem)
    return 1;
     
  else if(start->data!=elem&&start->next!=NULL){
     start=start->next;
     searchinLL(start,elem);
    }

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
     printf("Enter element to search in Linked list:");
     scanf("%d",&x);
     printf("\n%d",searchinLL(first, x));


}

