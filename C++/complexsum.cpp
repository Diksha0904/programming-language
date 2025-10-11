#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex() : real(0.0), imag(0.0) {}

    // Parameterized constructor
    Complex(double r, double i) : real(r), imag(i) {}

    // Operator overloading for addition (+)
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display the complex number
    void display() const {
        if (imag >= 0) {
            std::cout << real << " + " << imag << "i" << std::endl;
        } else {
            std::cout << real << " - " << -imag << "i" << std::endl;
        }
    }
};

int main() {
    // Create two complex numbers
    Complex c1(3.5, 2.0);
    Complex c2(1.2, -4.5);

    // Add the complex numbers using the overloaded operator
    Complex sum = c1 + c2;

    // Display the complex numbers and their sum
    std::cout << "Complex Number 1: ";
    c1.display();
    std::cout << "Complex Number 2: ";
    c2.display();
    std::cout << "Sum: ";
    sum.display();

    // Example with user input
    double r1, i1, r2, i2;
    std::cout << "\nEnter real and imaginary parts for the first complex number: ";
    std::cin >> r1 >> i1;
    std::cout << "Enter real and imaginary parts for the second complex number: ";
    std::cin >> r2 >> i2;

    Complex user_c1(r1, i1);
    Complex user_c2(r2, i2);
    Complex user_sum = user_c1 + user_c2;

    std::cout << "User Complex Number 1: ";
    user_c1.display();
    std::cout << "User Complex Number 2: ";
    user_c2.display();
    std::cout << "User Sum: ";
    user_sum.display();

    return 0;
}