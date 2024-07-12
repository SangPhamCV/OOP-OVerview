#include "Company.h"

Company::~Company() {
    for (Employee* employee : employeeList) {
        delete employee;
    }
}

void Company::addEmployee(Employee* employee) {
    employeeList.push_back(employee);
}

double Company::calculateTotalSalary() const {
    double totalSalary = 0;
    for (Employee* employee : employeeList) {
        totalSalary += employee->calculateSalary();
    }
    return totalSalary;
}

void Company::displayAllEmployees() const {
    for (Employee* employee : employeeList) {
        employee->displayInformation();
        std::cout << "Salary: " << employee->calculateSalary() << "\n";
        std::cout << "--------------------------\n";
    }
}

Employee* Company::findEmployeeByName(const std::string& name) const {
    for (Employee* employee : employeeList) {
        if (employee->getName() == name) {
            return employee;
        }
    }
    return nullptr;
}

