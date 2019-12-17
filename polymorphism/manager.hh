#ifndef MANAGER_HH
#define MANAGER_HH

#include "employee.hh"
#include <string>

class Manager : public Employee {
    int level;
    public:
        Manager(std::string name, long id, int level);
        void print()const;
};

#endif