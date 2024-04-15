import java.util.ArrayList;
import java.util.Scanner;

// Abstract base class Shape
abstract class Shape {
    // Abstract method to calculate area (must be implemented by subclasses)
    public abstract double calculateArea();
}

// Triangle class (inherits from Shape)
class Triangle extends Shape {
    private double base;
    private double height;

    // Constructor
    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    // Implement abstract method to calculate area for Triangle
    @Override
    public double calculateArea() {
        return 0.5 * base * height;
    }
}

// Rectangle class (inherits from Shape)
class Rectangle extends Shape {
    private double length;
    private double width;

    // Constructor
    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Implement abstract method to calculate area for Rectangle
    @Override
    public double calculateArea() {
        return length * width;
    }
}

// Circle class (inherits from Shape)
class Circle extends Shape {
    private double radius;

    // Constructor
    public Circle(double radius) {
        this.radius = radius;
    }

    // Implement abstract method to calculate area for Circle
    @Override
    public double calculateArea() {
        return Math.PI * radius * radius;
    }
}

// Main class to demonstrate the program
public class AreaCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Shape> shapes = new ArrayList<>();

        // Ask user for number of shapes
        System.out.print("Enter the number of shapes: ");
        int numberOfShapes = scanner.nextInt();

        // Input details for each shape
        for (int i = 0; i < numberOfShapes; i++) {
            System.out.println("\nEnter details for shape " + (i + 1) + ":");
            System.out.print("Enter shape type (Triangle, Rectangle, or Circle): ");
            String shapeType = scanner.next();

            // Process based on the shape type
            switch (shapeType.toLowerCase()) {
                case "triangle":
                    System.out.print("Enter base length: ");
                    double base = scanner.nextDouble();
                    System.out.print("Enter height: ");
                    double height = scanner.nextDouble();
                    shapes.add(new Triangle(base, height));
                    break;
                case "rectangle":
                    System.out.print("Enter length: ");
                    double length = scanner.nextDouble();
                    System.out.print("Enter width: ");
                    double width = scanner.nextDouble();
                    shapes.add(new Rectangle(length, width));
                    break;
                case "circle":
                    System.out.print("Enter radius: ");
                    double radius = scanner.nextDouble();
                    shapes.add(new Circle(radius));
                    break;
                default:
                    System.out.println("Invalid shape type. Please try again.");
                    i--; // Decrement i to retry current shape input
                    break;
            }
        }

        // Calculate total area covered by all shapes
        double totalArea = 0;
        for (Shape shape : shapes) {
            totalArea += shape.calculateArea();
        }

        // Display total area
        System.out.println("\nTotal area covered by all shapes: " + totalArea);

        scanner.close();
    }
}
