#include "Employee.h"

Employee::Employee(const std::string& name, const std::string& birthDate, double baseSalary)
    : name(name), birthDate(birthDate), baseSalary(baseSalary) {}

Employee::~Employee() {}

std::string Employee::getName() const {
    return name;
}

std::string Employee::getBirthDate() const {
    return birthDate;
}

double Employee::getBaseSalary() const {
    return baseSalary;
}

void Employee::enterInformation() {
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Enter birth date: ";
    std::getline(std::cin, birthDate);
    std::cout << "Enter base salary: ";
    std::cin >> baseSalary;
}

void Employee::displayInformation() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Birth Date: " << birthDate << "\n";
    std::cout << "Base Salary: " << baseSalary << "\n";
}

