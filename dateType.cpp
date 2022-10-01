//Homework 25

/*
 *  Filename:           dateType.cpp
 * 
 *  Purpose:            The purpose of this program is to implement the 
 *                      member functions of the dateType class header.
 *                      definitions.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */

//Preprocessor directives
#include "dateType.h"
#include <iostream>

//Namespace
using namespace std;

//--------------------------------------------------------------------------//
//Function Definitions

//Function:     setDate(int, int, int)
//
//Inputs:       int month, int day, int year
//Outputs:      None, type void.
//Purpose:      The purpose of this function is to set the member variables
//              of the dateType class to the values passed in the parameter
//              of the function. The value of dMonth is set to month. The 
//              value of dDay is set to day. The value of dYear is set to
//              year. The function will evaluate the values passed in to
//              the parameters of the function to verify correct input. The
//              program will check if February has the correct amount of
//              days, which is determined by whether or not it is currently
//              a leap year.
void dateType::setDate(int month, int day, int year)
{
    //Check validity of month.
    if((month > 0 && month < 13))
    {
        //Set member variables to values passed in from argument.
        dMonth = month;
    
    }
    else
    {
        //Set member variable to default value.
        dMonth = 1;
        cout << "Incorrect month entered." << endl;
        cout << "Month set to January by default." << endl;
    }
    //If the month is January, March, May, July, August, October, or
    //December, check that the month has 31 days.
    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || 
       month == 10 || month == 12) && (day > 0) && (day < 32))
    {
        //Set member variables to values passed in from argument.
        dDay = day;
    }
    else
    {
        //Set member variable to default value.
        dDay = 1;
        cout << "Incorrect days for month entered." << endl;
        cout << "Day set to the 1st of the month by default." << endl;
    }
    //If February AND a leap year, the month has 29 days.
    if((month == 2) && (customIsLeapYear(year)))
    {
        if(day > 0 && day < 30)
        {
            //Set member variables to values passed in from argument.
            dDay = day;
        }
        else
        {
            //Set member variable to default value.
            dDay = 1;
            cout << "Incorrect days for February entered." << endl;
            cout << "Day set to the 1st of the month by default." << endl;
        }
    }
    //If February and NOT a leap year, the month has 28 days.
    if((month == 2) && (!customIsLeapYear(year)))
    {
        if(day > 0 && day < 29)
        {
            //Set member variables to values passed in from argument
            dDay = day;
        }
        else
        {
            //Set member variable to default value.
            dDay = 1;
            cout << "Incorrect days for February entered." << endl;
            cout << "Day set to the 1st of the month by default." << endl;
        }
    }
    //If April, June, September, or November, check that the month has
    //30 days.
    if (month == 4 | month == 6 || month == 9 || month == 11)
    {
        if(day > 0 && day < 31)
        {
            //Set member variables to values passed in from argument.
            dDay = day;
        }
        else
        {
            //Set member variable to default value.
            dDay = 1;
            cout << "Incorrect days for month entered." << endl;
            cout << "Day set to the 1st of the month by default." << endl;
        }
    }
    //Check year for validity.
    if(year > 0)
    {
        //Set member variables to values passed in from argument.
        dYear = year;
    }
    else
    {
        //Set member variable to default value.
        dYear = 1900;
        cout << "Incorrect year entered." << endl;
        cout << "Year set to  by default." << endl;
    }   
}

//Function:     getDay() const
//
//Inputs:       None.
//Outputs:      Return type of int.
//Purpose:      The purpose of this function is to return the value of 
//              the private member variable dDay. The function is declared
//              a constant function to prevent the program from 
//              unintentionally modifying the value of dDay.
int dateType::getDay() const
{
    //Return value of member variable dDay
    return dDay;
}

//Function:     getMonth() const
//
//Inputs:       None.
//Outputs:      Return type of int.
//Purpose:      The purpose of this function is to return the value of the
//              private member variable dMonth. The function is declared
//              a constant function to prevent the program from 
//              unintentionally modifying the value of dMonth.
int dateType::getMonth() const
{
    //Return value of member variable dMonth
    return dMonth;
}

//Function:     getYear() const
//
//Inputs:       None.
//Outputs:      Return type of int.
//Purpose:      The purpose of this function is to return the value of the
//              private member variable dYear. The function is declared
//              a constant function to prevent the program from 
//              unintentionally modifying the value of dYear.
int dateType::getYear() const
{
    //Return value of member variable dYear
    return dYear;
}

//Function:     setMonth(int)
//
//Inputs:       int month
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to set the value of the
//              private member variable dMonth. The member variable dMonth
//              is set to the value of the variable month passed in from
//              the function parameters.
void dateType::setMonth(int month)
{
    //Set value of member variable dMonth to month.
    dMonth = month;
}

//Function:     setDay(int)
//
//Inputs:       int day
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to set the value of the
//              private member variable dMonth. The member variable dMonth
//              is set to the value of the variable month passed in from
//              the function parameters.
void dateType::setDay(int day)
{
    //Set value of member variable dDay to day.
    dDay = day;
}

//Function:     setYear(int)
//
//Inputs:       int year
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to set the value of the
//              private member variable dYear. The member variable dYear
//              is set to the value of the variable year passed in from
//              the function parameters.
void dateType::setYear(int year)
{
    //Set value of member variable dYear to year.
    dYear = year;
}

//Function:     getDaysInMonth()
//
//Inputs:       None.
//Outputs:      Return type int.
//Purpose:      The purpose of this function is to determine the number
//              of days in a given month. The program will first determine
//              if the month is February and it is currently a leap year.
//              If it is, the function will return 29 days for the month.
//              If the month is February and it is not a leap year, the 
//              program will return 28 days for the month. If the month isn't
//              February, the program will check to see if the month is
//              January, March, May, July, August, October, or December. If
//              it is, the function will return 31 days for the month.
//              Otherwise, the month is either April, June, September, or
//              November, and the function will return 30 days for the month.
int dateType::getDaysInMonth()
{
    //If February AND Leap Year
    if(dMonth == 2 && isLeapYear())
    {
        //29 days in month
        return 29;
    }
    //If February and NOT Leap Year
    else if(dMonth == 2)
    {
        //28 days in month
        return 28;
    }
    //Else if January, March, May, July, August, October, or December
    else if (dMonth == 1 || dMonth == 3 || dMonth == 5 || dMonth == 7
             || dMonth == 8 || dMonth == 10 || dMonth == 12)
    {
        //31 days in month
        return 31;
    }
    //Else if April, June, September, or November
    else
    {
        //30 days in month
        return 30;
    }
}

//Function:     numberOfDaysPassed()
//
//Inputs:       None.
//Outputs:      Return type int.
//Purpose:      The purpose of this function is to determine how many days
//              have passed for a particular month (including the current
//              day). The function declares two separate arrays of length
//              12. These arrays hold the values for the day in each month.
//              The months are arranged alphabetically. The array
//              daysInYear[] contains the values of days for each month
//              for a non-leap year. The array daysInLYear[] contains the
//              values of days for each month for a leap year. The function
//              will add the days of the previous months, then add the
//              current value of the private member variable dDay. The
//              function will simply return the value of dDay if the current
//              month is January. The function will take leap years into
//              consideration when tabulating the days.
int dateType::numberOfDaysPassed()
{
    int daysPassed = 0;
    int daysInYear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysInLYear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //If month isn't January
    if(dMonth != 1)
    {
        //If leap year
        if(isLeapYear())
        {
            //Start from first month and end at month before current month
            for(int i = 0; i < dMonth; i++)
            {
                //Sum days of previous months
                daysPassed += daysInLYear[i];
            }
        }
        //Else, not leap year
        else
        {
            //Start from first month and end at month before current month
            for(int i = 1; i <= dMonth; i++)
            {
                //Sum days of previous months
                daysPassed += daysInYear[i];
            }
        }
        //Add days passed in current month
        daysPassed += dDay;
    }
    //Month is January
    //Days passed is equal to the current day
    else
    {
        //Add days passed in current month
        daysPassed += dDay;
    }
    //Return days passed
    return (daysPassed);
}

//Function:     numberOfDaysLeft()
//
//Inputs:       None.
//Outputs:      Return type int.
//Purpose:      The purpose of this function is to determine how many days
//              in a year remain for a particular month day of the month.
//              The function declares two separate arrays of length
//              12. These arrays hold the values for the day in each month.
//              The months are arranged alphabetically. The array
//              daysInYear[] contains the values of days for each month
//              for a non-leap year. The array daysInLYear[] contains the
//              values of days for each month for a leap year. The function
//              will add the days of the successive months, then add the
//              current value of the private member variable dDay. The
//              function will simply return the value of dDay subtracted from
//              31 if the current month is December. The function will take 
//              leap years into consideration when tabulating the days.
int dateType::numberOfDaysLeft()
{
    int index = 0;
    //Variable of remaining days
    int daysLeft = 0;
    //Array for days in a regular year
    int daysInYear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //Array for days in a leap year
    int daysInLYear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //If month isn't December, determine days left in year
    if(dMonth != 12)
    {
        //If it is a leap year
        if(isLeapYear())
        {
            //Determine days left in months besides current month
            //The control portion of the for loop must be dMonth + 1 to avoid
            //off by one errors with arrays.
            //Loop to cycle through months that succeed current month
            for(int i = 11; i >= dMonth + 1 ; i--)
            {
                //Add days of month to variable for remaining days
                daysLeft += daysInLYear[i];
                //Return index of current month
                index = dMonth - 1;
            }
            //Add remaining days in current month
            daysLeft += (daysInLYear[index] - dDay);
        }
        //If not a leap year
        else
        {
            //Determine days left in months besides current month
            //The control portion of the for loop must be dMonth + 1 to avoid
            //off by one errors with arrays.
            //Loop to cycle through months that succeed current month
            for(int i = 11; i >= dMonth + 1 ; i--)
            {
                //Add days of month to variable for remaining days
                daysLeft += daysInYear[i];
                //Return index of current month
                index = dMonth - 1;
            }
            //Add remaining days in current month
            daysLeft += (daysInYear[index] - dDay);
        }
    }
    //If month is December, return the current day subtracted from the days
    //in September
    else
    {
        //Days left if current month is December
        daysLeft = 31 - dDay;
    }
    return daysLeft;
} 

//Function:     incrementDate(int)
//
//Inputs:       int nDays.
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to change the current date
//              by incrementing the date by a number of days nDays passed in
//              from the argument of the function. The function will create a
//              loop that adds each day to the current day, and decrement
//              the number of days until no days remain.
void dateType::incrementDate(int nDays)
{
    //While there are still days to be added
    while(nDays > 0)
    {
        //Determine whether the current day is the last day of the month
        //using the functions getDay() and getDaysInMonth().
        if((getDay() + 1) > getDaysInMonth())
        {
            //Set the next day to 1
            setDay(1);
            //If the last day of the month AND the last month of the year
            //using the getMonth() function.
            if(getMonth() + 1 > 12)
            {
                //Set the month to the first month of the year
                //using set
                //(January)
                setMonth(1);
                //Set the year to the next year using the setYear(int) and
                //getYear() functions.
                setYear(getYear() + 1);
            }
            //If last day of the month and NOT the last month of the year,
            else
            {
                //increment the month by one using the getMonth() function
                setMonth(getMonth() + 1);
            }
        }
        //Else, not the last day of the month.
        else
        {
            //Increment day by one using the setDay(int) and getDay() 
            //functions
            setDay(getDay() + 1);
        }
        //Decrement days to represent days remaining
        nDays--;
    }
}

//Function:     printDate() const
//
//Inputs:       None.
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to print the current date.
//              The function will output the values of the member variables
//              in the format "dMonth-dDay-dYear"
void dateType::printDate() const
{
    //Print member variables with previously specified format
    cout << dMonth << "-" << dDay << "-" << dYear << endl;
}

//Function:     Default Constructor (dateType)
//
//Inputs:       int month, int day, int year.
//Outputs:      None, constructor implementation.
//Purpose:      The purpose of this function is to declare a default
//              constructor for the dateType class. The constructor can
//              accept arguments passed in the parameter. If no arguments
//              are passed in the parameter, the member variables will be
//              set to the values specified in the header file
dateType::dateType(int month, int day, int year)
{
    //Check validity of month.
    if((month > 0 && month < 13))
    {
        //Set member variables to values passed in from argument.
        dMonth = month;
    
    }
    else
    {
        //Set member variable to default value.
        dMonth = 1;
        cout << "Incorrect month entered." << endl;
        cout << "Month set to January by default." << endl;
    }
    //If the month is January, March, May, July, August, October, or
    //December, check that the month has 31 days.
    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || 
       month == 10 || month == 12) && (day > 0) && (day < 32))
    {
        //Set member variables to values passed in from argument.
        dDay = day;
    }
    else
    {
        //Set member variable to default value.
        dDay = 1;
        cout << "Incorrect days for month entered." << endl;
        cout << "Day set to the 1st of the month by default." << endl;
    }
    //If February AND a leap year, the month has 29 days.
    if((month == 2) && (customIsLeapYear(year)))
    {
        if(day > 0 && day < 30)
        {
            //Set member variables to values passed in from argument.
            dDay = day;
        }
        else
        {
            //Set member variable to default value.
            dDay = 1;
            cout << "Incorrect days for February entered." << endl;
            cout << "Day set to the 1st of the month by default." << endl;
        }
    }
    //If February and NOT a leap year, the month has 28 days.
    if((month == 2) && (!customIsLeapYear(year)))
    {
        if(day > 0 && day < 29)
        {
            //Set member variables to values passed in from argument
            dDay = day;
        }
        else
        {
            //Set member variable to default value.
            dDay = 1;
            cout << "Incorrect days for February entered." << endl;
            cout << "Day set to the 1st of the month by default." << endl;
        }
    }
    //If April, June, September, or November, check that the month has
    //30 days.
    if (month == 4 | month == 6 || month == 9 || month == 11)
    {
        if(day > 0 && day < 31)
        {
            //Set member variables to values passed in from argument.
            dDay = day;
        }
        else
        {
            //Set member variable to default value.
            dDay = 1;
            cout << "Incorrect days for month entered." << endl;
            cout << "Day set to the 1st of the month by default." << endl;
        }
    }
    //Check year for validity.
    if(year > 0)
    {
        //Set member variables to values passed in from argument.
        dYear = year;
    }
    else
    {
        //Set member variable to default value.
        dYear = 1900;
        cout << "Incorrect year entered." << endl;
        cout << "Year set to  by default." << endl;
    }   
}

//Function:     isLeapYear()
//
//Inputs:       None.
//Outputs:      Return type boolean.
//Purpose:      The purpose of this function is to determine whether the
//              current year is a leap year.
bool dateType::isLeapYear()
{
    //If the year is divisible by four and not 100, or if the year is 
    //divisible by four and 400, the year is a leap year.
    if(dYear % 4 == 0 && (dYear % 100 != 0 || dYear % 400 == 0))
    {
        return true;
    }
    //Otherwise, the year is not a leap year.
    else
    {
        return false;
    }
}

//Function:     customIsLeapYear(int)
//
//Inputs:       int year.
//Outputs:      Return type bool.
//Purpose:      The purpose of this function is to expand on the previously
//              defined isLeapYear() function. This function will determine
//              whether a user input year is a leap year and will return the
//              correct boolean value (true of false).
bool dateType::customIsLeapYear(int year)
{
    //If the year is divisible by four and not 100, or if the year is 
    //divisible by four and 400, the year is a leap year.
    if(year % 4 == 0 && (year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    //Otherwise, the year is not a leap year.
    else
    {
        return false;
    }
}

//--------------------------------------------------------------------------//