#include "ProductionEmployee.h"


ProductionEmployee::ProductionEmployee(const std::string& fn, const std::string& bd, double bs, int np) :
    Employee(fn, bd, bs), numberOfProduct(np) {}

double ProductionEmployee::calculateSalary() const {
    return baseSalary + numberOfProduct*2000;
}


void ProductionEmployee::enterInformation() {
    Employee::enterInformation();
    std::cout << "Enter number of production: ";
    std::cin >> numberOfProduct;
    std::cin.ignore();
}

void ProductionEmployee::displayInformation() const {
    Employee::displayInformation();
    std::cout << "Number Of Product: " << numberOfProduct << std::endl;
}
