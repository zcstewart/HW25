//Homework 25

/*
 *  Filename:           dayType.cpp
 * 
 *  Purpose:            The purpose of this program is to implement the
 *                      member functions of the dayType class header file.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */


//Preprocessor directives
#include "dayType.h"

//Array of strings for days of the week.
string dayType::weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", 
                             "Thursday", "Friday", "Saturday"};

//Function:     print() const
//
//Inputs:       None
//Outputs:      None, return type void
//Purpose:      The purpose of this function is to print out the days of the
//              week to be displayed at the top of the calendar.
void dayType::print() const
{
    for(int i = 0; i < 7; i++)
    {
        //Output days of week
        //Field width of 5
        cout << setw(4) << weekDays[i].substr(0,3);
    }
    cout << endl;
}

//Function:     nextDay() const
//
//Inputs:       None
//Outputs:      Return type string
//Purpose:      The purpose of this function is to determine the next day
//              of the week, which is determined by the current value of the
//              private member variable weekDay.
string dayType::nextDay() const
{
    //If Sunday, next day is Monday.
    if(getDay() == weekDays[0])
    {
        return (weekDays[1]);
    }
    //If Monday, next day is Tuesday.
    else if(getDay() == weekDays[1])
    {
        return(weekDays[2]);
    }
    //If Tuesday, next day is Wednesday.
    else if(getDay() == weekDays[2])
    {
        return(weekDays[3]);
    }
    //If Wednesday, next day is Thursday.
    else if(getDay() == weekDays[3])
    {
        return(weekDays[4]);
    }
    //If Thursday, next day is Friday.
    else if(getDay() == weekDays[4])
    {
        return(weekDays[5]);
    }
    //If Friday, next day is Saturday.
    else if(getDay() == weekDays[5])
    {
        return(weekDays[6]);
    }
    //If Saturday, next day is Sunday.
    else 
    {
        return(weekDays[0]);
    };
}

//Function:     prevDay() const
//
//Inputs:       None
//Outputs:      Return type string
//Purpose:      The purpose of this function is to determine the previous day
//              of the week, which is determined by the current value of the
//              private member variable weekDay.
string dayType::prevDay() const
{
    //If Sunday, previous day is Saturday.
    if(getDay() == weekDays[0])
    {
        return(weekDays[6]);
    }
    //If Monday, previous day is Sunday.
    else if(getDay() == weekDays[1])
    {
        return(weekDays[0]);
    }
    //If Tuesday, previous day is Monday.
    else if(getDay() == weekDays[2])
    {
        return(weekDays[1]);
    }
    //If Wednesday, previous day is Tuesday.
    else if(getDay() == weekDays[3])
    {
        return(weekDays[2]);
    }
    //If Thursday, previous day is Wednesday.
    else if(getDay() == weekDays[4])
    {
        return(weekDays[3]);
    }
    //If Friday, previous day is Thursday.
    else if(getDay() == weekDays[5])
    {
        return(weekDays[4]);
    }
    //If Saturday, previous day is Friday.
    else 
    {
        return(weekDays[5]);
    };
}

//Function:     addDay(int)
//
//Inputs:       int nDays
//Outputs:      None, return type void
//Purpose:      The purpose of this function is to determine the day of the
//              week by incrementing the current day by the number of days
//              passed into the parameter of the function.
void dayType::addDay(int nDays)
{
    //Modulus division by seven to avoid unnecessary calculations.
    nDays = nDays % 7;
    //Loop to increment the current day by the specified value.
    for(int i = 0; i < nDays; i++)
    {
        //Increment weekDay
        weekDay = nextDay();
    }
}

//Function:     setDay(string)
//
//Inputs:       string day
//Outputs:      None, return type void
//Purpose:      The purpose of this function is to set the value of the
//              private member variable weekDay to the value of the string
//              variable day passed in through the parameter of the function.
void dayType::setDay(string day)
{
    //Set value of private member variable weekDay.
    weekDay = day;
}

//Function:     getDay() const
//
//Inputs:       None
//Outputs:      Return type string
//Purpose:      The purpose of this function is to return the value of the
//              private member variable weekDay.
string dayType::getDay() const
{
    //Return private member variable value.
    return weekDay;
}

//Function:     Constructor dayType()
//
//Inputs:       None
//Outputs:      None
//Purpose:      The purpose of this function is to create a default value for
//              the private member variable weekDay when an object of dayType
//              is declared but not initiated. 
dayType::dayType()
{
    //Set value of private member variable weekDay.
    weekDay = "Monday";
}

//Function:     Constructor dayType(string)
//
//Inputs:       string day
//Outputs:      None
//Purpose:      The purpose of this function is to declare an object with 
//              the value for the private member variable weekDay set to the
//              user specified input in the parameter of the function.
dayType::dayType(string day)
{
    //Set value of private member variable weekDay.
    weekDay = day;
}
