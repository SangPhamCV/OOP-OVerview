#include "Employee.h"

class ManagerEmployee : public Employee {
private:
    double positionCoefficient;
    double bonus;

public:
    ManagerEmployee(const std::string& name, const std::string& birthDate, double baseSalary, double positionCoefficient, double bonus);

    double calculateSalary() const override;
    void enterInformation() override;
    void displayInformation() const override;
};

