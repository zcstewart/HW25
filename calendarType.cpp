//Homework 25

/*
 *  Filename:           calendarType.cpp
 * 
 *  Purpose:            The purpose of this program is to implement the 
 *                      member functions of the calendarType class header.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */

//Preprocessor directives
#include "calendarType.h"

//--------------------------------------------------------------------------//

//Function:     firstDayOfMonth()
//
//Inputs:       None
//Outputs:      Return type dayType
//Purpose:      The purpose of this function is to determine which day of the
//              week the first of the month is. The function will return an
//              object of type dayType.
dayType calendarType::firstDayOfMonth()
{
    //Declare variables
    bool done = false;
    string day;
    extDateType initialDate;
    dayType initialDay;
    //Initialize variables
    initialDate.setDate(1, 1, 1500);
    initialDay.setDay("Monday");
    while(!done)
    {
        //If incremented variables == firstDate member variables
        if((initialDate.getMonth() == firstDate.getMonth()) && 
           (initialDate.getYear() == firstDate.getYear()))
        {
            //Loop Done
            done = true;
            //Set Day
            day = firstDay.getDay();
            firstDay.setDay(day);
        }
        else
        {
            //Increment variables
            initialDate.incrementDate(1);
            initialDay.setDay(initialDay.nextDay());
        }
    }
    //Return values
    return initialDay;
}

//Function:     printTitle()
//
//Inputs:       None
//Outputs:      None, return type void
//Purpose:      The purpose of this function is to display the month and
//              year above the days of the month, in a similar fashion as 
//              a real calendar.
void calendarType::printTitle()
{
    firstDate.printLongMonthYear();
}

//Function:     printDates()
//
//Inputs:       None
//Outputs:      None, return type void
//Purpose:      The purpose of this function is to display the days of the
//              month for a given month and year.
void calendarType::printDates()
{
    firstDay.print();
}

//--------------------------------------------------------------------------//

//Function:     setMonth(int)
//
//Inputs:       int month
//Outputs:      None, return type void
//Purpose:      The purpose of this function is to set the member variable of
//              firstDate and firstDay to the equivalent value passed in the
//              argument of the function.
void calendarType::setMonth(int month)
{
    dayType temp = firstDayOfMonth();
    firstDate.setMonth(month);
    firstDay.setDay(temp.getDay());
}

//Function:     setYear(int)
//
//Inputs:       int year
//Outputs:      None, return type void
//Purpose:      The purpose of this function is to set the member variable of
//              firstDate and firstDay to the equivalent value passed in the
//              argument of the function.
void calendarType::setYear(int year)
{
    firstDate.setYear(year);
}

//Function:     getMonth()
//
//Inputs:       None
//Outputs:      int
//Purpose:      The purpose of this function is to return the value of 
//              the member variable representing the month.
int calendarType::getMonth()
{
    return firstDate.getMonth();
}

//Function:     getYear()
//
//Inputs:       None
//Outputs:      int
//Purpose:      The purpose of this function is to return the value of 
//              the member variable representing the year.
int calendarType::getYear()
{
    return firstDate.getYear();
}

//Function:     printCalendar()
//
//Inputs:       None
//Outputs:      None, return type void
//Purpose:      the purpose of this function is to print the entire calendar
void calendarType::printCalendar()
{
    string weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", 
                          "Thursday", "Friday", "Saturday"};
    string day = firstDay.getDay();
    int index = 0;
    
    //Print functions
    printTitle();
    printDates();
    
    //Print days of week
    for(int i = 0; i < 7; i++)
    {
        if(day == weekDays[i])
        {
            index = i;
        }
    }
    //Leading space for amount of days
    for(int i = 0; i < index; i++)
    {
        cout << "    ";
    }
    //Print days of month
    for(int i = 0; i < firstDate.getDaysInMonth(); i++)
    {
        cout << setw(4) << (i+1);
        index++;
        if(index % 7 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
}

//Default Constructor
//
//Inputs:       None
//Outputs:      None
//Purpose:      Initialize an object of class calendarType upon declaration.
calendarType::calendarType()
{
    firstDate.setDate(1, 1, 1500);
    firstDay.setDay("Monday");
}

//Default Constructor with parameters
//
//Inputs:       int m, int y
//Outputs:      None
//Purpose:      Initialize an object of class calendarType with specified
//              values m and y for month and year, respectively.
calendarType::calendarType(int m, int y)
{
    dayType temp = firstDayOfMonth();
    firstDate.setDate(m, 1, y);
    firstDay.setDay("Monday");
    firstDay = firstDayOfMonth();
    firstDay.setDay(temp.getDay());
}

//--------------------------------------------------------------------------//