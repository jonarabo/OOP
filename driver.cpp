
#include <iostream>
#include <list>
using namespace std;
#include "Employee.h"
#include "Owner.h"
#include "Waiter.h"
#include "Chef.h"

int main()

{

    Employee* employeeDatabase[6] = {                               // Creating an array that serves as a database for each employee
      new Owner(22222, "Arabo", "Jon"),                             // ID, Last, First
      new Chef(33333, "Stephan", "Matt", "Italian"),                // ID, Last, FIrst, Cuisine
      new Chef(12345, "Hindi", "Yousif", "French"),                 // ID, Last, FIrst, Cuisine
      new Waiter(11111, "Arabo", "Nick", 3),                        // ID, Last, First, Years of Service
      new Waiter(54321, "Katt", "Julius", 5),                       // ID, Last, First, Years of Service
      new Waiter(12121, "Naamo", "Jonjon", 7)                       // ID, Last, First, Years of Service
    };

    double profits;                                                 
    cout << "Enter This Month's Profits:" << endl;
    cin >> profits;                                                                                     // The user is prompted to enter in the profits for a month
    cout << endl;
    employeeDatabase[0]->Calculate_salary(profits);                                                      // The number entered in by the user is entered into the respective Calculate_salary formula
    cout << "\t\tSHOWING STATISTICS FOR OWNER" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << *employeeDatabase[0];                                                                       // The pointer is dereferenced to display the stastics for the employee at index 0, that being the owner
    cout << "----------------------------------------------------------------" << endl << endl;
    employeeDatabase[1]->Calculate_salary(profits);
    cout << "\t\tSHOWING STATISTICS FOR CHEF 1" << endl;                                                // Chef 1 and Chef 2's statistics will also be outputted with the owner's statistics after the user enters in the profits for the month
    cout << "----------------------------------------------------------------" << endl;
    cout << *employeeDatabase[1];                                   
    cout << "----------------------------------------------------------------" << endl << endl;
    employeeDatabase[2]->Calculate_salary(profits);
    cout << "\t\tSHOWING STATISTICS FOR CHEF 2" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << *employeeDatabase[2];
    cout << "----------------------------------------------------------------" << endl << endl;
                                                                        
                                                                                                        // After the owner and both chef's statistics are displayed, we will begin to call the user to enter in the tips for all three waiters
    double tip1;
    cout << "Enter The Tips For Waiter 1:" << endl;
    cin >> tip1;                                                                                         // The user is prompted to enter in the tips for Waiter 1
    cout << endl; 
    employeeDatabase[3]->Calculate_salary(tip1);                                                        // The number entered in by the user is entered into the respective Calculate_salary formula
    cout << "\t\tSHOWING STATISTICS FOR WAITER 1" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << *employeeDatabase[3];                                                                       // The pointer is dereferenced to display the stastics for the employee at index 3, that being the first waiter
    cout << "----------------------------------------------------------------" << endl << endl;

    double tip2;
    cout << "Enter The Tips For Waiter 2:" << endl;
    cin >> tip2;                                                                                    // The user is then prompted to enter in the tips for Waiter 2
    cout << endl;
    employeeDatabase[4]->Calculate_salary(tip2);                                                    // The number entered in by the user is entered into the respective Calculate_salary formula
    cout << "\t\tSHOWING STATISTICS FOR WAITER 2" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << *employeeDatabase[4];                                                                   // The pointer is dereferenced to display the stastics for the employee at index 4, that being the second waiter   
    cout << "----------------------------------------------------------------" << endl << endl;

    double tip3;
    cout << "Enter The Tips For Waiter 3:" << endl;
    cin >> tip3;                                                                                     // The user is then prompted to enter in the tips for Waiter 3
    cout << endl;
    employeeDatabase[5]->Calculate_salary(tip3);                                                     // The number entered in by the user is entered into the respective Calculate_salary formula
    cout << "\t\tSHOWING STATISTICS FOR WAITER 3" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << *employeeDatabase[5];                                                                      // The pointer is dereferenced to display the stastics for the employee at index 5, that being the third waiter   
    cout << "----------------------------------------------------------------" << endl << endl;

}