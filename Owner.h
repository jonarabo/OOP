#pragma once


#ifndef OWNER
#define OWNER

#include "Employee.h"

class Owner : public Employee
{
public:
    Owner(void);                                    // Declaring the default constructor for Owner

    Owner(int id, string last, string first);       // Declaring the explicit value constructor for Owner

    virtual void display(ostream& out) const;       // Declaring the virtual display function 

    virtual void Calculate_salary(double value);    // Declaring the virtual Calculate_salary function for Owner (Different from the pure virtual function used in Employee.h)

protected:
    double mySalary;                                // Data members that are respective to the owner
    double profitShare;
};

inline Owner::Owner(void) {                         // Inline function definition of the default constructor for Owner
    myIdNum = 0;
    myFirstName = " ";
    myLastName = " ";
    myClass = 'C';
    mySalary = 15000;
    profitShare = 0.0;
}

inline Owner::Owner(int id, string last, string first) {     // Inline function definition of the explicit value constructor for Owner
    myIdNum = id;
    myFirstName = first;
    myLastName = last;
    myClass = 'O';
    mySalary = 15000;
    profitShare = 0.6;
}

inline void Owner::Calculate_salary(double value) {         // Inline function definition for Calculate_salary for Owner
    calcSalary = mySalary + (profitShare * value);          // calcSalary will be set equal to the value that is calculated by the formula

}

inline void Owner::display(ostream& out) const              // Inline function that will display the calcSalary for the owner.
{
    Employee::display(out);
    out << "THIS MONTH'S SALARY: $" << calcSalary << endl;
}

#endif