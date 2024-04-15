class Person {
    protected String name;
    protected int age;
    protected String gender;
    protected String department;

    // Constructor
    public Person(String name, int age, String gender, String department) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.department = department;
    }

    // Method to display profile details
    public void displayProfile() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Gender: " + gender);
        System.out.println("Department: " + department);
    }
}

// Define the Student class inheriting from Person
class Student extends Person {
    private int year;

    // Constructor
    public Student(String name, int age, String gender, String department, int year) {
        super(name, age, gender, department);
        this.year = year;
    }

    // Method to display profile details of a student
    @Override
    public void displayProfile() {
        super.displayProfile();
        System.out.println("Year: " + year);
    }
}

// Define the Professor class inheriting from Person
class Professor extends Person {
    private int courseLoad;
    private double salary;

    // Constructor
    public Professor(String name, int age, String gender, String department, int courseLoad, double salary) {
        super(name, age, gender, department);
        this.courseLoad = courseLoad;
        this.salary = salary;
    }

    // Method to display profile details of a professor
    @Override
    public void displayProfile() {
        super.displayProfile();
        System.out.println("Course Load: " + courseLoad + " courses");
        System.out.println("Salary: $" + salary);
    }
}

// Main class to test the Student and Professor classes
public class Men{
    public static void main(String[] args) {
        // Create a Student object
        Student student = new Student("Alice", 20, "Female", "Computer Science", 3);
        
        // Create a Professor object
        Professor professor = new Professor("Dr. Smith", 45, "Male", "Computer Science", 4, 80000.0);

        // Display profile details of student and professor
        System.out.println("Student Profile:");
        student.displayProfile();
        System.out.println("\nProfessor Profile:");
        professor.displayProfile();
    }
}
