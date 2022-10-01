//Homework 25

/*
 *  Filename:           dayType.h
 * 
 *  Purpose:            The purpose of this program is to define the private
 *                      and public members of the dayType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */



//Preprocessor directives
#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <iostream>
#include <string>
#include <iomanip>

//Namespace
using namespace std;

//Class Definition
class dayType
{
private:
    string weekDay;
    // Stores the current day as a string
public:
    static string weekDays[7];
    // Stores the days of the week in string format
    
    void print() const;
    // Prints the weekday as a string. 

    string nextDay() const;
    // Returns the string of the next day

    string prevDay() const;
    // Returns the string of the previous day

    void addDay(int nDays);
    // Calculates and stores the appropriate day by adding a
    // certain number of days to the current day. 

    void setDay(string day);
    // Set the day to the input 

    string getDay() const;
    // Get the current day. 

    dayType();
    // Default constructor, set to Sunday. 

    dayType(string day);
    // Constructor, set day to input. 
};

#endif /* DAYTYPE_H */

