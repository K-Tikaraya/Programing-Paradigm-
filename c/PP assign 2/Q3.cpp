#include<iostream>
using namespace std;


template <typename X>

void swap(X *a, X *b){
    X c;
    c=a;
    a=b;
    b=c;
}

struct s{
    int x;
    double y;

};


int main(){
    cout<<"Swap integers:"<<endl;
    int a=11,b=8;
    cout<<"original values are: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"values after swapping are: "<<a<<" "<<b<<endl;
    

    cout<<"Swap short:"<<endl;
    short c=7,d=3;
     cout<<"original values are: "<<c<<" "<<d<<endl;
    swap(c,d);
    cout<<"values after swapping are: "<<c<<" "<<d<<endl;
    

    cout<<"Swap float:"<<endl;
    float e=56.24, f=78.4;
    cout<<"original values are: "<<e<<" "<<f<<endl;
    swap(e,f);
    cout<<"values after swapping are: "<<e<<" "<<f<<endl;
  

    cout<<"Swap double:"<<endl;
    double g=4567.3467,h=938596.3456;
     cout<<"original values are: "<<g<<" "<<h<<endl;
    swap(g,h);
    cout<<"values after swapping are: "<<g<<" "<<h<<endl;

    

   cout<<"Swap struct:"<<endl;
   s str1,str2;
   str1.x=35;
   str1.y=78.90;
   str2.x=700;
   str2.y=345.908;

   swap(str1,str2);
   cout<<"values after swapping are:str1 x="<<str1.x<<" y="<<str1.y<<endl;
   cout<<"values after swapping are:str2 x="<<str2.x<<" y="<<str2.y<<endl;




}



