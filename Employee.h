#pragma once

#include <iostream>
using namespace std;

#ifndef EMPLOYEE
#define EMPLOYEE

class Employee
{
public:
    Employee(void);                                  // Declaring the default constructor for Employee

    virtual void display(ostream& out) const;        // Declaring the virtual display function

    virtual void Calculate_salary(double value) = 0; // Declaing the pure virtual function of Calculate_salary


protected:                                           // Data members that are common in every child class
    int myIdNum;      
    string myLastName;   
    string myFirstName;
    char myClass;     
    int mySalary;
    int calcSalary;
};

inline Employee::Employee(void) {                    // Inline function definition of the default constructor that contains the data members that will be used in every child class
    myIdNum = 0;
    myFirstName = " ";
    myLastName = " ";
    myClass = ' ';
    mySalary = 0;
}


inline void Employee::display(ostream& out) const   // Inline function defintion that will display the ID, Last Name, First Name, and Class for each employee.
{
    out << "ID NUMBER: " << myIdNum << " | " << "FULL NAME: " << myLastName << ", " << myFirstName << " | " << "EMPLOYEE CLASS: " << myClass << "  " << endl;
}

inline ostream& operator<<(ostream& out, const Employee& emp)   // Overloading output function
{
    emp.display(out);
    return out;
};



#endif
