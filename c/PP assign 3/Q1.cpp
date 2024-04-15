#include<iostream>

using namespace std;
  
  class Student{
    private:
        string Name;
        int Age;
        string Department;
        int Year;

    public:
       void ReadStudentData(){
          cout<<"Enter Name:";
          cin>>Name;
          this->Name=Name;
          cout<<"Enter Age:";
          cin>>Age;
          this->Age=Age;
          cout<<"Enter Deparment:";
          cin>>Department;
          this->Department=Department;
          cout<<"Enter Year:";
          cin>>Year;
          this->Year=Year;
       }

       void PrintStudentData(){
        cout<<"Name is "<<this->Name<<endl;
        cout<<"Age is "<<this->Age<<endl;
        cout<<"Department is "<<this->Department<<endl;
        cout<<"Year is "<<this->Year<<endl;


       }

  };


  int main(){
    int N;
    cout<<"Enter N:";
    cin>>N;
    Student s[N];
    for(int i=0;i<N;i++){
        cout<<"Enter data of student-"<<i+1<<endl;
        s[i].ReadStudentData();
    }

    for(int i=0;i<N;i++){
        cout<<"For student-"<<i+1<<endl;
        s[i].PrintStudentData();
    }
    return 0;
  }