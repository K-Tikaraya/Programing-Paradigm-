#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
    char gender;

public:
    // Parameterized constructor
    Person(const string& n, int a, char g) : name(n), age(a), gender(g) {}

    // Virtual function to display profile details
    virtual void displayProfile() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string dept;
    int year;

public:
    // Parameterized constructor
    Student(const string& n, int a, char g, const string& d, int y)
        : Person(n, a, g), dept(d), year(y) {}

    // Override displayProfile function
    void displayProfile() const override {
        Person::displayProfile();
        cout << "Department: " << dept << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class Clerk
class Clerk : public Person {
private:
    int workload;
    double salary;

public:
    // Parameterized constructor
    Clerk(const string& n, int a, char g, int w, double s)
        : Person(n, a, g), workload(w), salary(s) {}

    // Override displayProfile function
    void displayProfile() const override {
        Person::displayProfile();
        cout << "Workload: " << workload << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class Professor
class Professor : public Person {
private:
    string dept;
    int courseLoad;
    double salary;

public:
    // Parameterized constructor
    Professor(const string& n, int a, char g, const string& d, int c, double s)
        : Person(n, a, g), dept(d), courseLoad(c), salary(s) {}

    // Override displayProfile function
    void displayProfile() const override {
        Person::displayProfile();
        cout << "Department: " << dept << endl;
        cout << "Course Load: " << courseLoad << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Creating objects of different classes
    Student student("kiran", 20, 'F', "Computer Science", 2);
    Clerk clerk("Alice", 35, 'F', 40, 50000.0);
    Professor professor("David", 45, 'M', "Electrical Engineering", 4, 80000.0);

    // Displaying profiles
    cout << "Student Profile:" << endl;
    student.displayProfile();
    cout << endl;

    cout << "Clerk Profile:" << endl;
    clerk.displayProfile();
    cout << endl;

    cout << "Professor Profile:" << endl;
    professor.displayProfile();
    cout << endl;

    return 0;
}
