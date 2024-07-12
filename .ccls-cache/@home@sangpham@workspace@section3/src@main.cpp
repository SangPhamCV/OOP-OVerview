#include "Company.h"
#include "OfficeEmployee.h"
#include "ProductionEmployee.h"
#include "ManagerEmployee.h"

int main() {
    Company company;

    while (true) {
        std::cout << "\n1. Add office employee\n";
        std::cout << "2. Add production employee\n";
        std::cout << "3. Add manager employee\n";
        std::cout << "4. Display all employees\n";
        std::cout << "5. Calculate total salary of the company\n";
        std::cout << "6. Find employee by name\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose an option: ";

        int choice;
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline character

        if (choice == 0) break;

        std::string name, birthDate;
        double baseSalary;
        Employee* employee = nullptr;

        switch (choice) {
        case 1: {
            int workingDays;
            double allowance;
            std::cout << "Enter office employee information:\n";
            employee = new OfficeEmployee("", "", 0, 0, 0);
            employee->enterInformation();
            company.addEmployee(employee);
            break;
        }
        case 2: {
            int numberOfProducts;
            std::cout << "Enter production employee information:\n";
            employee = new ProductionEmployee("", "", 0, 0);
            employee->enterInformation();
            company.addEmployee(employee);
            break;
        }
        case 3: {
            double positionCoefficient, bonus;
            std::cout << "Enter manager employee information:\n";
            employee = new ManagerEmployee("", "", 0, 0, 0);
            employee->enterInformation();
            company.addEmployee(employee);
            break;
        }
        case 4: {
            std::cout << "All employees information:\n";
            company.displayAllEmployees();
            break;
        }
        case 5: {
            std::cout << "Total salary of the company: " << company.calculateTotalSalary() << "\n";
            break;
        }
        case 6: {
            std::string name;
            std::cout << "Enter the name of the employee to find: ";
            std::getline(std::cin, name);
            Employee* foundEmployee = company.findEmployeeByName(name);
            if (foundEmployee) {
                foundEmployee->displayInformation();
                std::cout << "Salary: " << foundEmployee->calculateSalary() << "\n";
            }
            else {
                std::cout << "Employee not found.\n";
            }
            break;
        }
        }
    }

    return 0;
}

