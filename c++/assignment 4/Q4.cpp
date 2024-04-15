#include <iostream>
#include <vector>
#include <cmath>

// Base class Shape
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for calculating area
};

// Triangle class
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Calculate area of the triangle
    double area() const override {
        return 0.5 * base * height;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Calculate area of the rectangle
    double area() const override {
        return length * width;
    }
};

// Circle class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Calculate area of the circle
    double area() const override {
        return M_PI * radius * radius;
    }
};

// ShapeStack class
class ShapeStack {
private:
    std::vector<Shape*> shapes;

public:
    // Push a shape onto the stack
    void push(Shape* shape) {
        shapes.push_back(shape);
    }

    // Pop a shape from the stack
    Shape* pop() {
        if (!shapes.empty()) {
            Shape* shape = shapes.back();
            shapes.pop_back();
            return shape;
        } else {
            return nullptr;
        }
    }

    // Display all shapes in the stack
    void display() const {
        std::cout << "Shapes in the stack:" << std::endl;
        for (const auto& shape : shapes) {
            std::cout << "- Area: " << shape->area() << std::endl;
        }
    }

    // Calculate total area covered by all shapes in the stack
    double totalAreaCovered() const {
        double total_area = 0;
        for (const auto& shape : shapes) {
            total_area += shape->area();
        }
        return total_area;
    }
};

int main() {
    // Create a ShapeStack object
    ShapeStack stack;

    // Push some shapes onto the stack
    stack.push(new Triangle(5, 8));
    stack.push(new Rectangle(6, 10));
    stack.push(new Circle(4));

    // Display all shapes in the stack
    stack.display();

    // Calculate total area covered by all shapes in the stack
    double total_area = stack.totalAreaCovered();
    std::cout << "Total area covered by all shapes: " << total_area << std::endl;

    // Clean up dynamic memory
    Shape* shape;
    while ((shape = stack.pop()) != nullptr) {
        delete shape;
    }

    return 0;
}
