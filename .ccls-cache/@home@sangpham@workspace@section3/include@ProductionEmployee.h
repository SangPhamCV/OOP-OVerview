#include "Employee.h"

class ProductionEmployee : public Employee {
private:
    int numberOfProducts;

public:
    ProductionEmployee(const std::string& name, const std::string& birthDate, double baseSalary, int numberOfProducts);

    double calculateSalary() const override;
    void enterInformation() override;
    void displayInformation() const override;
};

