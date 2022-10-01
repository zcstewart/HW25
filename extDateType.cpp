//Homework 25

/*
 *  Filename:           extDateType.cpp
 * 
 *  Purpose:            The purpose of this program is to implement the
 *                      member functions of the extDate
 * Type class header file.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */


#include "extDateType.h"

//--------------------------------------------------------------------------//
//Function Definitions


//Function:     printLongDate()
//
//Inputs:       None.
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to print the current date.
//              The month will be displayed in text format, while the day
//              and year will be displayed in numerical format.
void extDateType::printLongDate()
{
    cout << month << " " << dateType::getDay() << ", ";
    cout << dateType::getYear() << endl;
}

//Function:     printLongDate()
//
//Inputs:       None.
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to print the name of the
//              month and the year as it would be seen on a calendar page
//              for a given month of the year.
void extDateType::printLongMonthYear()
{
    cout << "         ";
    cout << month << " " << dateType::getYear() << endl;
}

//Function:     setDate()
//
//Inputs:       int month, int day, int year.
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to set the current date
//              to the date specified by the input argument.
void extDateType::setDate(int month, int day, int year)
{
    dateType::setDate(month, day, year);
    setMonth(getMonth());
}

//Function:     setMonth(int)
//
//Inputs:       int month
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to determine the string
//              representation of a month using the the numerical 
//              representation of the month. The string representation is 
//              stored into the value of the private member variable month.
void extDateType::setMonth(int month)
{
    if(month == 1)
    {
        dateType::setMonth(month);
        extDateType::month = "January";
    }
    else if(month == 2)
    {
        dateType::setMonth(month);
        extDateType::month = "February";
    }
    else if(month == 3)
    {
        dateType::setMonth(month);
        extDateType::month = "March";
    }
    else if(month == 4)
    {
        dateType::setMonth(month);
        extDateType::month = "April";
    }
    else if(month == 5)
    {
        dateType::setMonth(month);
        extDateType::month = "May";
    }
    else if(month == 6)
    {
        dateType::setMonth(month);
        extDateType::month = "June";
    }
    else if(month == 7)
    {
        dateType::setMonth(month);
        extDateType::month = "July";
    }
    else if(month == 8)
    {
        dateType::setMonth(month);
        extDateType::month = "August";
    }
    else if(month == 9)
    {
        dateType::setMonth(month);
        extDateType::month = "September";
    }
    else if(month == 10)
    {
        dateType::setMonth(month);
        extDateType::month = "October";
    }
    else if(month == 11)
    {
        dateType::setMonth(month);
        extDateType::month = "November";
    }
    else
    {
        dateType::setMonth(12);
        extDateType::month = "December";
    }
}

//Function:     (Constructor) extDateType
//
//Inputs:       None.
//Outputs:      None, constructor implementation.
//Purpose:      The purpose of this constructor is to create an object of
//              type extDateType with default values. This constructor is
//              called if the object is constructed without parameters.
//              The constructor calls the default constructor of the
//              inherited class dateType.
extDateType::extDateType()
{
    dateType();
    setMonth(1);
}

//Function:     (Constructor) extDateType(int, int, int)
//
//Inputs:       int month, int day, int year.
//Outputs:      None, constructor implementation.
//Purpose:      The purpose of this constructor is to create an object of
//              type extDateType with values passed in as arguments. This
//              constructor is called if an object of type extDataType is
//              created with arguments. The constructor will invoke the
//              constructor from the inherited class dateType, then use
//              the member function setMonth(int) of the extDataType class
//              to set the member variable month to its appropriate string
//              value.
extDateType::extDateType(int month, int day, int year)
{
    dateType(month, day, year);
    setMonth(month);
}

//--------------------------------------------------------------------------//