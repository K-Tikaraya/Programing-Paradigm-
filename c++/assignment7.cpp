
#include<iostream>
using namespace std;
class A
{
public:
void displayA()
{
cout<<"In class A"<<endl;
}

};
class B:private A
{
public:
A::displayA;
void displayB()
{
cout<<"In class B"<<endl;
}

};

main()
{

B b;
b.displayA();
}