/*
 * Name: Conner Tash
 * Date Submitted: 10-3-21
 * Lab Section: 003
 * Assignment Name: Searching and Sorting
 */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>

template <class T>
int linearSearch(std::vector<T> data, T target)
{
    // Checks if the target value is in the array using the algorithm function
    // count
    if (!std::count(data.begin(), data.end(), target)) 
    {
        return -1;
    }
    
    // Loop to look for target
    for(unsigned i = 0; i < data.size(); ++i)
    {
        if(data[i] == target)
        {
            return i;
        }
    }
    return 0;
}


template <class T>
int binarySearch(std::vector<T> data, T target)
{
    int lowIndex = 0;
    int highIndex = data.size();
    int midIndex = (highIndex + lowIndex) / 2;

    // Checks if the target value is in the array using the algorithm function
    // count
    if (!std::count(data.begin(), data.end(), target)) 
    {
        return -1;
    }

    // Goes through shrinking or growing the array until the target is found
    while(1)
    {
        if (data[midIndex] < target)
        {
            lowIndex = midIndex + 1;
            
        }
        else if (data[midIndex] > target)
        {
            highIndex = midIndex - 1;
            
        }
        else if (data[midIndex] == target)
        {
            return midIndex;
        }
    }
    return midIndex;
}
