#include "OfficeEmployee.h"

OfficeEmployee::OfficeEmployee(const std::string& name, const std::string& birthDate, double baseSalary, int workingDays, double allowance)
    : Employee(name, birthDate, baseSalary), workingDays(workingDays), allowance(allowance) {}

double OfficeEmployee::calculateSalary() const {
    return baseSalary + workingDays * 100000 + allowance;
}

void OfficeEmployee::enterInformation() {
    Employee::enterInformation();
    std::cout << "Enter number of working days: ";
    std::cin >> workingDays;
    std::cout << "Enter allowance: ";
    std::cin >> allowance;
    std::cin.ignore(); // Ignore newline character
}

void OfficeEmployee::displayInformation() const {
    Employee::displayInformation();
    std::cout << "Number of working days: " << workingDays << "\n";
    std::cout << "Allowance: " << allowance << "\n";
}

