//Homework 25

/*
 *  Filename:           dayType.h
 * 
 *  Purpose:            The purpose of this program is to define the private
 *                      and public members of the dateType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               2/23/2017 16:20 PST
 */

//Preprocessor directives
#ifndef DATETYPE_H
#define DATETYPE_H

//Class dateType declaration
class dateType
{
private:
    int dMonth;     //variable to store the month
    int dDay;       //variable to store the day
    int dYear;      //variable to store the year
public:
    void setDate(int month, int day, int year);
    //Function to set the date.
    //The member variables dMonth, dDay, and dYear are set according
    //to the parameters.
    //Postcondition: dMonth = month; dDay = day; dYear = year;
       
    int getDay() const;
    //Function to return the day.
    //Postcondition: The value of dDay is returned.
    
    int getMonth() const;
    //Function to return the month.
    //Postcondition: The value of dMonth is returned.
    
    int getYear() const;
    //Function to return the year.
    //Postcondition: The value of dYear is returned.
    
    void setMonth(int month);
    //Function to set the month.
    //Postcondition: The value of dMonth is set to month.
    
    void setDay(int day);
    //Function to set the day.
    //Postcondition: The value of dDay is set to day.
    
    void setYear(int year);
    //Function to set the year.
    //The value of dYear is set to year.
    
    int getDaysInMonth();
    //Function to get the number of days in a month
    //Postcondition:
    
    int numberOfDaysPassed();
    //Function to get the number of days that has passed.
    //Postcondition: 
    
    int numberOfDaysLeft();
    //Function to get the number of days that remain.
    //Postcondition: 
    
    void incrementDate(int nDays);
    //Function to increment the date
    
    
    void printDate() const;
    //Function to output the date in the form mm-dd-yyyy.
    
    dateType(int month = 1, int day = 1, int year = 1900);
    //Constructor to set the date.
    //The member variables dMonth, dDay, and dYear are set according
    //to the parameters.
    //Postcondition: dMonth = month; dDay = day; dYear = year;
    //               If no values are specified, the default values are used
    //               to initialize the member variables.
    
    bool isLeapYear();
    //Function to determine whether the current year is a leap year
    //The member variable dYear will be tested with Modulus division to
    //determine its leap year status.
    
    bool customIsLeapYear(int year);
    //Function to determine whether the current year is a leap year
    //The input variable year will be tested with Modulus division to
    //determine its leap year status.
};

#endif /* DATETYPE_H */

