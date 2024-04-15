#include<iostream>

using namespace std;

class MyStack{
    private:
       int top=-1;
       int *pstorage;
       int maxsize;

    public:
       
       
          MyStack(){
            cout<<"Enter size of stack:";
            cin>>maxsize;
            pstorage=new int[maxsize];
          }

          MyStack(MyStack &s){
            top=s.top;
            maxsize=s.maxsize;
            pstorage=new int [maxsize];
            for(int i=0;i<=top;i++){
                pstorage[i]=s.pstorage[i];
            }
          }

        void push(){
            int x,n;
            cout<<"Enter no. of elements you want to push:";
            cin>>n;
            for(int i=0;i<n;i++){
              if(top==maxsize-1){
              cout<<"stack is full cannot push"<<endl;
              return;
              }
              top++;
              cout<<"Enter x:";
              cin>>x;
              pstorage[top]=x;
              }
            return;
        
          }

          void pop(){
            int x,n;
            cout<<"Enter no. of elements you want to pop:";
            cin>>n;
            for(int i=0;i<n;i++){
                if(top==-1){
                cout<<"stack is empty cannot pop"<<endl;
                return;
                }
                x=pstorage[top];
                cout<<"Poped element is "<<x<<endl;
                top--;
            }
            return;
          }

          void CurrentSize(){
            cout<<"CurrentSize of stack is "<<top+1<<endl;
          }
          void IsEmpty(){
            if(top!=maxsize-1)
                cout<<"Stack is Empty"<<endl;
            else 
               cout<<"Stack is not Empty"<<endl;

            }
        void Display(){
            cout<<"MaxSize of stack is "<<maxsize<<endl;
            cout<<"Current  size of stack is "<<top+1<<endl;
            if(top!=-1){
            cout<<"element in stack is ";
            for(int i=0;i<top+1;i++){
                cout<<pstorage[i]<<endl;
                
            }
        }
         

  }
};

  int main(){

    MyStack s;
    s.push();
    s.pop();
    s.CurrentSize();
    s.IsEmpty();
    s.Display();
//multiple stack
    MyStack S[4];
    for(int i=1;i<=4;i++){
        cout<<"For stack "<<i<<endl;
        s.push();
        s.pop();
        s.CurrentSize();
        s.IsEmpty();
    }

// copy constructor 

MyStack C(s);
 
C.CurrentSize();
C.IsEmpty();
C.Display();
    
    return 0;

  }