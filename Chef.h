#pragma once

#ifndef CHEF
#define CHEF

#include "Employee.h"

class Chef : public Employee
{
public:
    Chef(void);                                                     // Declaring the default constructor for Chef

    Chef(int id, string last, string first, string cuisine);        // Declaring the explicit value constructor for Chef

    virtual void display(ostream& out) const;                       // Declaring the virtual display function 

    virtual void Calculate_salary(double value);                    // Declaring the virtual Calculate_salary function for Chef (Different from the pure virtual function used in Employee.h)

protected:                                                          // Data members that are respective to the chef
    double mySalary;
    string myCuisine;
    double profitShare;
};

inline Chef::Chef(void) {                                           // Inline function definition of the default constructor for Chef
    myIdNum = 0;
    myFirstName = " ";
    myLastName = " ";
    myClass = 'C';
    mySalary = 10000;
    myCuisine = " ";
    profitShare = 0.0;
}

inline Chef::Chef(int id, string last, string first, string cuisine) {     // Inline function definition of the explicit value constructor for Chef
    myIdNum = id;
    myFirstName = first;
    myLastName = last;
    myCuisine = cuisine;
    myClass = 'C';
    mySalary = 10000;
    profitShare = 0.2;
}

inline void Chef::Calculate_salary(double value) {                        // Inline function definition for Calculate_salary for Chef
    calcSalary = mySalary + (profitShare * value);                        // calcSalary will be set equal to the value that is calculated by the formula

}
inline void Chef::display(ostream& out) const                             // Inline function that will display the Chef's specialty and the calcSalary for the Chef.
{
    Employee::display(out);               
    out << "MY SPECIALTY IS: " << myCuisine << endl;
    out << "THIS MONTH'S SALARY: $" << calcSalary << endl;
}

#endif
