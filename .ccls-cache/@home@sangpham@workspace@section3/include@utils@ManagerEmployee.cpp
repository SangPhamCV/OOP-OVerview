#include "ManagerEmployee.h"


ManagerEmployee::ManagerEmployee(const std::string& fn, const std::string& bd, double bs, double pc, double bn) :
    Employee(fn, bd, bs), positionCoefficient(pc), numberOfProduct(bn) {}

double ManagerEmployee::calculateSalary() const {
    return baseSalary * positionCoefficient + bonus;
}


void ManagerEmployee::enterInformation() {
    Employee::enterInformation();
    std::cout << "Enter position coefficient: ";
    std::getline(std::cin, positionCoefficient);
    std::cout << "Enter bonus: ";
    std::getline(std::cin, bonus);
}

void ManagerEmployee::displayInformation() const {
    Employee::displayInformation();
    std::cout << "Position Coefficient: " << positionCoefficient << std::endl;
    std::cout << "Bonus: " << bonus << std::endl;
}
