#include <iostream>
#include <iomanip>

int main() {
    double weight = 0.0;
    double height = 0.0;
    double bmi = 0.0;

    // User for input
    std::cout << "Enter weight in pounds: ";
    std::cin >> weight;

    std::cout << "Enter height in inches: ";
    std::cin >> height;

    // Data validation
    if (weight <= 0 || height <= 0) {
        std::cout << "Error: Weight and height must both be greater than zero." << std::endl;
        return 1; // End program due to error
    }

    // Calculate BMI
    bmi = (weight * 703.0) / (height * height);

    // Format output to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nYour BMI is: " << bmi << std::endl;

    // Determine and display classification based on unrounded BMI
    std::cout << "Your Category is: ";
    if (bmi < 18.5) {
        std::cout << "Underweight" << std::endl;
    } 
    else if (bmi >= 18.5 && bmi <= 25.0) {
        std::cout << "Optimal weight" << std::endl;
    } 
    else {
        std::cout << "Overweight" << std::endl;
    }

    return 0;
}
