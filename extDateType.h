//Homework 25

/*
 *  Filename:           extDateType.h
 * 
 *  Purpose:            The purpose of this program is to define the private
 *                      and public member variables of the extDataType
 *                      class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */

//Preprocessor Directives
#ifndef EXTDATETYPE_H
#define EXTDATETYPE_H

#include "dateType.h"
#include <string>
#include <iostream>

//Namespace
using namespace std;

//DClass definition
class extDateType: public dateType
{
    private:
        string month;
    public:
        void printLongDate();
        // Prints Month Day, Year using a string name for the
        // month. 

        void printLongMonthYear();
        // Prints the Month and Year using a string name for the
        // month. 

        void setDate(int month, int day, int year);
        // Function to store the month, day, and year in numerical
        // format. Also stores the string name of the month 
        void setMonth(int month);
        // Function to store the month in numerical format.
        // Also stores the string name of the month 
        

        extDateType();
        // Default Constructor
        
        extDateType(int month, int day, int year);
        // Constructor, should call dateType constructor, as
        // necessary, and also store month in string format.        
};

#endif /* EXTDATETYPE_H */

