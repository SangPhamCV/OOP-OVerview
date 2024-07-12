#pragma once
#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    std::string birthDate;
    double baseSalary;

public:
    Employee(const std::string& name, const std::string& birthDate, double baseSalary);
    virtual ~Employee();

    std::string getName() const;
    std::string getBirthDate() const;
    double getBaseSalary() const;

    virtual double calculateSalary() const = 0; // Pure virtual method
    virtual void enterInformation();
    virtual void displayInformation() const;
};

