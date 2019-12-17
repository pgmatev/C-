#include "employee.hh"
#include "manager.hh"

#include <vector>
using namespace std;

void printALL(vector<Employee*>& v) {
    for (vector<Employee*>::iterator it = v.begin(); it != v.end(); it++){
        (*it) -> print();
    }
}

int main() {
    vector<Employee*> employees;

    Employee e = Employee("Ivan", 123);
    Manager m = Manager("Petkan", 1234, 10);

    employees.push_back(&e);
    employees.push_back(&m);

    printALL(employees);

    return 0;


}