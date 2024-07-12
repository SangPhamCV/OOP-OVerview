#include "ManagerEmployee.h"
#include <iostream>

ManagerEmployee::ManagerEmployee(const std::string& name, const std::string& birthDate, double baseSalary, double positionCoefficient, double bonus)
    : Employee(name, birthDate, baseSalary), positionCoefficient(positionCoefficient), bonus(bonus) {}

double ManagerEmployee::calculateSalary() const {
    return baseSalary * positionCoefficient + bonus;
}

void ManagerEmployee::enterInformation() {
    Employee::enterInformation();
    std::cout << "Enter position coefficient: ";
    std::cin >> positionCoefficient;
    std::cout << "Enter bonus: ";
    std::cin >> bonus;
    std::cin.ignore(); // Ignore newline character
}

void ManagerEmployee::displayInformation() const {
    Employee::displayInformation();
    std::cout << "Position coefficient: " << positionCoefficient << "\n";
    std::cout << "Bonus: " << bonus << "\n";
}

