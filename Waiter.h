#pragma once


#ifndef WAITER
#define WAITER

#include "Employee.h"

class Waiter : public Employee
{
public:
    Waiter(void);                                               // Declaring the default constructor for Waiter

    Waiter(int id, string last, string first, int years);       // Declaring the explicit value constructor for Waiter

    virtual void display(ostream& out) const;                   // Declaring the virtual display function 

    virtual void Calculate_salary(double value);                // Declaring the virtual Calculate_salary function for Waiter (Different from the pure virtual function used in Employee.h)

    
protected:                                                      // Data members that are respective to the waiter
    double myYearsService;
    double mySalary;
};

inline Waiter::Waiter(void) {                                   // Inline function definition of the default constructor for Waiter
    myIdNum = 0;
    myFirstName = " ";
    myLastName = " ";
    myClass = 'W';
    mySalary = 3000;
    myYearsService = 0;
}

inline Waiter::Waiter(int id, string last, string first, int years) {      // Inline function definition of the explicit value constructor for Waiter
    myIdNum = id;
    myFirstName = first;
    myLastName = last;
    myClass = 'W';
    mySalary = 3000;
    myYearsService = years;
}

inline void Waiter::Calculate_salary(double value) {                   // Inline function definition for Calculate_salary for Waiter
    calcSalary = mySalary +  value;                                    // calcSalary will be set equal to the value that is calculated by the formula (Different than owner and chef as they do not have a profitShare)

}
inline void Waiter::display(ostream& out) const                        // Inline function that will display the years of service and calcSalary for the waiter.
{
    Employee::display(out);
    out << "YEARS OF SERVICE: " << myYearsService << endl;
    out << "THIS MONTH'S SALARY: $" << calcSalary << endl;

}

#endif

