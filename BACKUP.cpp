

#include "dayType.h"

static string weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", 
                             "Thursday", "Friday", "Saturday"};

//Function:     print() const
//
//Inputs:       None.
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to print out the days of the
//              week to be displayed at the top of the calendar.
void dayType::print() const
{
    for(int i = 0; i < 7; i++)
    {
        //Output days of week
        //Field width of 5
        cout << setw(5) << weekDays[i];
    }
    cout << endl;
}

//Function:     nextDay() const
//
//Inputs:       None.
//Outputs:      Return type string.
//Purpose:      The purpose of this function is to determine the next day
//              of the week, which is determined by the current value of the
//              private member variable weekDay.
string dayType::nextDay() const
{
    switch(weekDay)
    {
        //If Sunday, next day is Monday.
        case "Sunday":
            weekDay = weekDays[1];
            break;
        //If Monday, next day is Tuesday.
        case "Monday":
            weekDay = weekDays[2];
            break;
        //If Tuesday, next day is Wednesday.
        case "Tuesday":
            weekDay = weekDays[3];
            break;
        //If Wednesday, next day is Thursday.
        case "Wednesday":
            weekDay = weekDays[4];
            break;
        //If Thursday, next day is Friday.
        case "Thursday":
            weekDay = weekDays[5];
            break;
        //If Friday, next day is Saturday.
        case "Friday":
            weekDay = weekDays[6];
            break;
        //If Saturday, next day is Sunday.
        case "Saturday":
            weekDay = weekDays[0];
            break;
        //If Sunday, next day is Monday.
        default:
            weekDay = weekDays[1];
    }
}

//Function:     prevDay() const
//
//Inputs:       None.
//Outputs:      Return type string.
//Purpose:      The purpose of this function is to determine the previous day
//              of the week, which is determined by the current value of the
//              private member variable weekDay.
string dayType::prevDay() const
{
    switch(weekDay)
    {
        //If Sunday, the previous day is Saturday
        case "Sunday":
            weekDay = weekDays[6];
            break;
        //If Monday, the previous day is Sunday
        case "Monday":
            weekDay = weekDays[0];
            break;
        //If Tuesday, the previous day is Monday.
        case "Tuesday":
            weekDay = weekDays[1];
            break;
        //If Wednesday, the previous day is Tuesday.
        case "Wednesday":
            weekDay = weekDays[2];
            break;
        //If Thursday, the previous day is Wednesday.
        case "Thursday":
            weekDay = weekDays[3];
            break;
        //If Friday, the previous day is Thursday.
        case "Friday":
            weekDay = weekDays[4];
            break;
        //If Saturday, the previous day is Friday.
        case "Saturday":
            weekDay = weekDays[5];
            break;
        //If invalid, previous day is Monday by default.
        default:
            weekDay = weekDays[1];
    }
}

//Function:     addDay(int)
//
//Inputs:       int nDays
//Outputs:      None, return type void.
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
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to set the value of the
//              private member variable weekDay to the value of the string
//              variable day passed in through the parameter of the function.
void dayType::setDay(string day)
{
    weekDay = day;
}

string dayType::getDay() const
{
    return weekDay;
}

dayType::dayType()
{
    weekDay = "Monday";
}

dayType::dayType(string day)
{
    weekDay = day;
}
