#include "Employee.h"

Employee::Employee(const std::string& fn, const std::string bd, double bs) :
    fullName(fn), birthDay(bd), baseSalary(bs) {}

Employee::~Employee() {}

std::string Employee::getName() const {
    return fullName;
}

std::string Employee::getBirthDay() const {
    return birthDay;
}

double Employee::getBaseSalary() const {
    return baseSalary;
}

void Employee::enterInformation() {
    std::cout << "Enter a full name of employee: ";
    std::getline(std::cin, fullName);
    std::cout << "Enter a birh day of employee: ";
    std::getline(std::cin, birthDay);
    std::cout << "Enter base salary of employee: ";
    std::getline(std::cin, baseSalary);
}

void Employee::displayInformation() {
    std::cout << "Information of Employee: " std::endl;
    std::cout << "\tName: " << fullName << std::endl;
    std::cout << "\tBirth Day: " << birthDay << std::endl;
    std::cout << "\tBase Salary: " << baseSalary << std::endl;
}
