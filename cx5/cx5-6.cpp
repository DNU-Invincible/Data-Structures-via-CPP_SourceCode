/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx5-6.cpp,v 1.3 1997/08/01 18:38:49 berman Exp $

// cx5-6.cpp
// Code Example 5-6: Bubble Sort Phase

void swapElements(int a[], int maxPos, int last); // see Exercise 5-12

void bubbleSortPhase(int a[], int last)
{
   // Precondition: a is an array indexed from a[0] to a[last]
   // Move the largest element between a[0] and a[last] into a[last],
   // by swapping out of order pairs
   int pos;
   for (pos = 0; pos < last - 1; pos++)
      if (a[pos] > a[pos+1]) {
         swapElements(a, pos, pos+1);
      }
   // Postconditions: a[0] ... a[last] contain the same elements, 
   // possibly reordered; a[last] >= a[0] ... a[last-1]
}
