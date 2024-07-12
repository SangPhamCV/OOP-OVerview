#include "Employee.h"
#include <vector>

class Company {
private:
    std::vector<Employee*> employeeList;

public:
    ~Company();

    void addEmployee(Employee* employee);
    double calculateTotalSalary() const;
    void displayAllEmployees() const;
    Employee* findEmployeeByName(const std::string& name) const;
};


