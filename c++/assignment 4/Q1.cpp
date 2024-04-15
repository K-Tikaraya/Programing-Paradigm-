
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    double price;
    string manufacturer;

public:
    // Default constructor
    Vehicle() : price(0.0), manufacturer("") {}

    // Parametrized constructor
    Vehicle(double p, const string& m) : price(p), manufacturer(m) {}

    // Copy constructor
    Vehicle(const Vehicle& other) : price(other.price), manufacturer(other.manufacturer) {}

    // Assignment operator
    Vehicle& operator=(const Vehicle& other) {
        if (this != &other) {
            price = other.price;
            manufacturer = other.manufacturer;
        }
        return *this;
    }

    // Read data
    void readData() {
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter manufacturer: ";
        cin >> manufacturer;
    }

    // Display data
    void displayData() const {
        cout << "Price: " << price << endl;
        cout << "Manufacturer: " << manufacturer << endl;
    }
};

class Car : public Vehicle {
private:
    string color;
    int numberOfSeats;
    string model;

public:
    // Default constructor
    Car() : Vehicle(), color(""), numberOfSeats(0), model("") {}

    // Parametrized constructor
    Car(double p, const string& m, const string& c, int n, const string& mod)
        : Vehicle(p, m), color(c), numberOfSeats(n), model(mod) {}

    // Copy constructor
    Car(const Car& other) : Vehicle(other), color(other.color), numberOfSeats(other.numberOfSeats), model(other.model) {}

    // Assignment operator
    Car& operator=(const Car& other) {
        if (this != &other) {
            Vehicle::operator=(other);
            color = other.color;
            numberOfSeats = other.numberOfSeats;
            model = other.model;
        }
        return *this;
    }

    // Read data
    void readData() {
        Vehicle::readData();
        cout << "Enter color: ";
        cin >> color;
        cout << "Enter number of seats: ";
        cin >> numberOfSeats;
        cout << "Enter model: ";
        cin >> model;
    }

    // Display data
    void displayData() const {
        Vehicle::displayData();
        cout << "Color: " << color << endl;
        cout << "Number of seats: " << numberOfSeats << endl;
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car car;
    car.readData();
    car.displayData();
    return 0;
}
