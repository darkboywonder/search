/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 **/
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{   
    int start = 0;
    int finish = n - 1;
 
    //while length of list > 0
    while(finish >= start) 
    {
        //look at middle of list
        int center = (start + finish) / 2;
       
        //if number found, return true
        if((values[center]) == value)
        {
            return true;
        }
    
        //else if number lower, search left
        else if((values[center]) > value)
        {
            finish = center - 1;
        }
        // else number higher, search right
        else
        {
            start = center + 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    
    // while the list is out of order
    for(int i = 0; i < n; i++)
    {
        int smallest = values[i];
        int smallest_location = i; 
        // go through the entire list
        for(int j = i + 1; j < n; j++)
        {
            //find the smallest number
            if(smallest > values[j])
            {
                smallest = values[j];
                smallest_location = j;
            } 
        }    
        //put the beginning of the list where the smallest number was
        values[smallest_location] = values[i];    
           
        //place it in the beginning of the list
        values[i] = smallest;
     }       
}
