/*
 * Name: Conner Tash
 * Date Submitted: 10-3-21
 * Lab Section: 003
 * Assignment Name: Searching and Sorting
 */

#pragma once

#include <vector>
#include <iostream>
#include <cstdlib>

template <class T>
std::vector<T> mergeSort(std::vector<T> lst)
{
    /*
    if(lst.size() != 1)
    {
        std::vector<T> half1 = 
        std::cout << "BOY" << std::endl;
    }
    return lst;
    */
}

template <class T>
std::vector<T> quickSort(std::vector<T> lst)
{
    int pivetValue = 0;
    int pivetIndex = 0;
    int randNum = rand() % lst.size();
    pivetValue = lst[randNum];

    // Swaps first number with the random pivet value
    std::swap(lst[randNum], lst[0]);
    
    // Increments the index if value is less then the random value selected
    // and swapping the next index with the old one
    for(int i = 1; i < lst.size(); ++i)
    {
        if(lst[i] < pivetValue)
        {
            ++pivetIndex;
            std::swap(lst[pivetIndex], lst[i]);
        }
    }

    // Swaps pivet value with pivetIndex
    std::swap(lst[0], lst[pivetIndex]);
    
    // Checks if the vector is sorted
    for (int i = 0; i < lst.size(); ++i) 
    {
        if(lst[i] > lst[i + 1])
        {
            break;
        }
        return lst;
    }

    // Recursion for each half to go through until it is sorted
    std::vector<T> bot;
    std::vector<T> top;
    for (int i = 0; i < lst[pivetIndex]; ++i) 
    {
        bot.push_back(lst[i]);
    }
    for (int i = lst[pivetIndex] + 1; i <= lst.size(); ++i) 
    {
        top.push_back(lst[i]);
    }
    quickSort(bot);
    quickSort(top);
    
    return lst;
}
