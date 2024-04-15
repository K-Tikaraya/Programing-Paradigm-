#include<stdio.h>

int Largest(int * x,int L,int size){
    if(size==1)
        return(L);
           
    else{
        if(*(x+1)>L){
        L=*(x+1);
        }
        return(Largest(x+1,L,size-1));
     }
 }

int main(){
    int n;
    printf("\nEnter no.of  elements:");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter Elements:");
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    int large=a[0];
    int z=Largest(&a[0],large,n);
    printf("Largest Value is %d",z);

}


