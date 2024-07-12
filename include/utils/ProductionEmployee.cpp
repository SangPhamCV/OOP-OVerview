#include "ProductionEmployee.h"

ProductionEmployee::ProductionEmployee(const std::string& name, const std::string& birthDate, double baseSalary, int numberOfProducts)
    : Employee(name, birthDate, baseSalary), numberOfProducts(numberOfProducts) {}

double ProductionEmployee::calculateSalary() const {
    return baseSalary + numberOfProducts * 2000;
}

void ProductionEmployee::enterInformation() {
    Employee::enterInformation();
    std::cout << "Enter number of products: ";
    std::cin >> numberOfProducts;
    std::cin.ignore(); // Ignore newline character
}

void ProductionEmployee::displayInformation() const {
    Employee::displayInformation();
    std::cout << "Number of products: " << numberOfProducts << "\n";
}

