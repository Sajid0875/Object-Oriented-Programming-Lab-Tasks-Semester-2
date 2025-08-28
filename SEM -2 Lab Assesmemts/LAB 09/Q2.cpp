#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string name, int id) : name(name), id(id) {}
    virtual float CalculateSalary() = 0;
    virtual void DisplayDetails() = 0;
    virtual ~Employee() {}
};

class PermanentEmployee : virtual public Employee {
protected:
    float salary;

public:
    PermanentEmployee(string name, int id, float salary)
        : salary(salary), Employee("", 0) {}

    float CalculateSalary() override {
        return salary;
    }

    void DisplayDetails() override {
        cout << "Permanent Employee\n";
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << CalculateSalary() << "\n\n";
    }
};

class ContractEmployee : public Employee {
private:
    int hours;
    float wage;

public:
    ContractEmployee(string name, int id, int hours, float wage)
        : Employee(name, id), hours(hours), wage(wage) {}

    float CalculateSalary() override {
        return hours * wage;
    }

    void DisplayDetails() override {
        cout << "Contract Employee\n";
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << CalculateSalary() << "\n\n";
    }
};

class Manager : public PermanentEmployee {
private:
    float bonus;

public:
    Manager(string name, int id, float salary, float bonus)
        : Employee(name, id), PermanentEmployee("", 0, salary), bonus(bonus) {
        this->name = name;
        this->id = id;
    }

    float CalculateSalary() override {
        return salary + bonus;
    }

    void DisplayDetails() override {
        cout << "Manager\n";
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << CalculateSalary() << "\n\n";
    }
};

int main() {
    Employee* employees[4];

    employees[0] = new PermanentEmployee("Ali", 101, 50000);
    employees[1] = new ContractEmployee("Sara", 102, 160, 200);
    employees[2] = new Manager("Zain", 103, 60000, 10000);
    employees[3] = new ContractEmployee("Ahmed", 104, 100, 180);

    for (int i = 0; i < 4; i++) {
        employees[i]->CalculateSalary();
        employees[i]->DisplayDetails();
    }

    for (int i = 0; i < 4; i++) {
        delete employees[i];
    }

    return 0;
}

