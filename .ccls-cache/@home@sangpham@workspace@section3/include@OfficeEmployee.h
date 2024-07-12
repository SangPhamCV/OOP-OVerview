#include "Employee.h"

class OfficeEmployee : public Employee {
private:
    int workingDays;
    double allowance;

public:
    OfficeEmployee(const std::string& name, const std::string& birthDate, double baseSalary, int workingDays, double allowance);

    double calculateSalary() const override;
    void enterInformation() override;
    void displayInformation() const override;
};

