#ifndef EMPLOYEE_HH
#define EMPLOYEE_HH

#include <string>

class Employee {
    std::string name;
    long id;
    public:
        Employee(std::string name, long id);
        virtual void print()const; //virtual tells the compilator that there are other implementations in the child classes which
};

#endif