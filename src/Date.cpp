// Date.cpp - Date class implementation.

#include "Date.h"

//---------------------------------------------------------------------------------
//A default constructor
Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
}

//---------------------------------------------------------------------------------
//A non default constructor
 Date::Date(unsigned d, unsigned m, unsigned y)
 {
    day = d;
    month = m;
    year = y;

 }

 //---------------------------------------------------------------------------------
 // A getter for day
unsigned Date::GetDay()
{
    return day;
}

//---------------------------------------------------------------------------------
// A getter for month
unsigned Date::GetMonth()
{
    return month;
}

//---------------------------------------------------------------------------------
// A getter for year
unsigned Date::GetYear()
{
    return year;
}

//---------------------------------------------------------------------------------
// A setter for day
bool Date::SetDay(unsigned d)
{
    if (d > 0 && d <= 31)
    {
        day = d;
        return true;
    }
    else
    {
        day = 0;
        return false;
    }

}

//---------------------------------------------------------------------------------
// A setter for month
bool Date::SetMonth(unsigned m)
{
    if (m > 0 && m<= 12 )
    {
        month = m;
        return true;
    }
    else
    {
        month = 0;
        return false;
    }
}

//---------------------------------------------------------------------------------
// A setter for year
bool Date::SetYear(unsigned y)
{
    if (y > 0 )
    {
        year = y;
        return true;
    }
    else if (y < 0)
    {
        year = 0;
        return false;
    }
    return false;
}


//---------------------------------------------------------------------------------
// Function to convert unsigned month to string month
string Date::GetStringMonth(unsigned m)
{
    string mon;
    switch(m)
    {
    case 1:
        mon = "January";
        break;
    case 2:
        mon = "February";
        break;
    case 3:
        mon = "March";
        break;
    case 4:
        mon = "April";
        break;
    case 5:
        mon = "May";
        break;
    case 6:
        mon = "June";
        break;
    case 7:
        mon = "July";
        break;
    case 8:
        mon = "August";
        break;
    case 9:
        mon = "September";
        break;
    case 10:
        mon = "October";
        break;
    case 11:
        mon = "November";
        break;
    case 12:
        mon = "December";
        break;
    default:
        mon = "Null";
    }
    return mon;
}


//---------------------------------------------------------------------------------
//Overloaded less than operator
bool Date::operator < ( Date& thisObj)
{
    bool success = false;
    if(GetYear() < thisObj.GetYear())
    {
        success = true;
    }
    else if(GetYear() == thisObj.GetYear())
    {
        if(GetMonth() < thisObj.GetMonth())
        {
            success = true;
        }
        else if(GetMonth() == thisObj.GetMonth())
        {
            if(GetDay() < thisObj.GetDay())
            {
                success = true;
            }
        }
    }
    else
        success = false;

    return success;
}

//---------------------------------------------------------------------------------
//Overloaded more then operator
bool Date::operator > ( Date& thisObj)
{
        bool success = false;
    if(GetYear() > thisObj.GetYear())
    {
        success = true;
    }
    else if(GetYear() == thisObj.GetYear())
    {
        if(GetMonth() > thisObj.GetMonth())
        {
            success = true;
        }
        else if(GetMonth() == thisObj.GetMonth())
        {
            if(GetDay() > thisObj.GetDay())
            {
                success = true;
            }
        }
    }
    else
        success = false;

    return success;

}

//---------------------------------------------------------------------------------
//Overloaded equals operator
bool Date::operator==( Date& thisObj)
{
    bool success = false;
    if(GetYear() == thisObj.GetYear())
    {
        if(GetMonth() == thisObj.GetMonth())
        {
            if(GetDay() == thisObj.GetDay())
            {
                success = true;
            }
        }
    }
    else
        success = false;

    return success;

}

//---------------------------------------------------------------------------------
//Overloaded not equals operator
bool Date::operator!=( Date& thisObj)
{
    bool success = false;
    if(GetYear() != thisObj.GetYear())
    {
        if(GetMonth() != thisObj.GetMonth())
        {
            if(GetDay() != thisObj.GetDay())
            {
                success = true;
            }
        }
    }
    else
        success = false;

    return success;

}

//---------------------------------------------------------------------------------
//Overloaded assignment operator
Date& Date::operator = ( Date& D)
{
    day = D.GetDay();
    month = D.GetMonth();
    year = D.GetYear();
    return *this;
}
//---------------------------------------------------------------------------------
// End of class
