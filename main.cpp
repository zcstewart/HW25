//Homework 25

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to implement the
 *                      calendar function by including all the correct 
 *                      header files and executing the program through the
 *                      main function.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */

//Preprocessor Directives
#include "calendarType.h"
#include "dateType.h"
#include "dayType.h"
#include "extDateType.h"
#include <iostream>
#include <cstdlib>


//Namespace
using namespace std;

//--------------------------------------------------------------------------//

int main(int argc, char** argv)
{
    int input, day; 
    int month = 1;
    int year = 1500;
    
    do
    {
        calendarType calendar(month, year);
        cout << "Gregorian Calendar: A C++ Approach" << endl;
        calendar.printCalendar();
        cout << "|----------------------------------------|" << endl;
        cout << "| 1. Enter \"1\" to set the current month. |" << endl;
        cout << "| 2. Enter \"2\" to set the current year.  |" << endl;
        cout << "| 3. Enter \"3\" to print the calendar.    |" << endl;
        cout << "| 4. Enter \"4\" to create new calendar    |" << endl;
        cout << "| 5. Enter \"5\" to exit                   |" << endl;
        cout << "|----------------------------------------|" << endl;
        cout << "Enter input: " << endl;
        cin >> input;        
        switch(input)
        {
            case 1:
                cout << "Enter the number of the month to be entered: ";
                cin >> month;
                calendar.setMonth(month);
                break;
            case 2:
                cout << "Enter the year to be entered: ";
                cin >> year;
                calendar.setYear(year);
                break;
            case 3:
                calendar.printCalendar();
                break;
            case 4:
                cout << "Enter the month: " << endl;
                cin >> month;
                cout << "Enter the year: " << endl;
                cin >> year;
                break;
            case 5:
                exit(EXIT_SUCCESS);
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
        }
    }while(input != 100);
    
    //Exit upon successful operation
    exit(EXIT_SUCCESS);
}

//--------------------------------------------------------------------------//

