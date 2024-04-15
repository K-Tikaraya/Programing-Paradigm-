import java.util.Scanner;

// Define the Student class
class Student {
    // Data members
    private String name;
    private int age;
    private String department;
    private int year;

    // Member function to read data from user input
    public void readData() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter name:");
        name = scanner.nextLine();
        System.out.println("Enter age:");
        age = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        System.out.println("Enter department:");
        department = scanner.nextLine();
        System.out.println("Enter year:");
        year = scanner.nextInt();
    }

    // Member function to print data
    public void printData() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Department: " + department);
        System.out.println("Year: " + year);
    }
}

// Main class to test the Student class
public class Main {
    public static void main(String[] args) {
        // Create an instance of the Student class
        Student student = new Student();

        // Read data
        System.out.println("Enter student details:");
        student.readData();

        // Print data
        System.out.println("\nStudent details:");
        student.printData();
    }
}