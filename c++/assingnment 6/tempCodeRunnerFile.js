import java.util.Scanner;
public class StudentInfo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask the user for the number of students
        System.out.print("Enter the number of students: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        // Input student details
        for (int i = 0; i < n; i++) {
            System.out.println("Enter details for student " + (i + 1) + ":");
            System.out.print("Name: ");
            String name = scanner.nextLine();
            System.out.print("Roll Number: ");
            int rollNumber = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            System.out.println("Student " + (i + 1) + ":");
            System.out.println("Name: " + name);
            System.out.println("Roll Number: " + rollNumber);
        }

        scanner.close();
    }
}
