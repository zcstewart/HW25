//Homework 25

/*
 *  Filename:           calendarType.h
 * 
 *  Purpose:            The purpose of this program is to define the private
 *                      and public members of the calendarType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */


//Preprocessor directives
#ifndef CALENDARTYPE_H
#define CALENDARTYPE_H
#include "dateType.h"
#include "dayType.h"
#include "extDateType.h"

class calendarType
{
    private:
        dayType firstDayOfMonth();
        // Function to determine the weekday of the first day of
        // the month, based on the year.
        void printTitle();
        // Function to print the title (header information) for the
        // calendar
        void printDates();
        // Function to print the dates in the month
        extDateType firstDate;
        // firstDate object of type extDateType
        dayType firstDay;
        // firstDay object of type dayType 
    public:
        void setMonth(int month);
        // Sets the month inside the firstDate object of type
        // extDateType
        void setYear(int year);
        // Sets the year inside the firstDate object of type
        // extDateType
        int getMonth();
        // Gets the month from the firstDate object
        int getYear();
        // Gets the year from the firstDate object
        void printCalendar();
        // Prints the calendar based upon the current month and
        // year in firstDate 
        calendarType();
        // Default constructor, defaults to January 1, 1500, which
        // is a Monday.
        // Set the appropriate month, day, year, and weekday in
        // firstDate
        calendarType(int m, int y);
        // Sets the month, year, (and day) in firstDate. The day
        // should default to 1.
        // The weekday should be set appropriately. 
};

#endif /* CALENDARTYPE_H */

