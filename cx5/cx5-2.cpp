/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx5-2.cpp,v 1.2 1997/08/01 18:34:47 berman Exp $

// cx5-2.cpp
// Code Example 5-2: Defective Binary Search -- Do Not Use!

int binarySearch(int a[], int n, int target)
{
   // Precondition: array a is sorted in ascending order from a[0] to a[n-1]
   int first(0);
   int last(n - 1);
   int mid;
   while (first <= last) {
      mid = (first + last)/2;
      if (target == a[mid])
         return mid;
      else if (target < a[mid])
         last = mid;
      else // must be that target > a[mid]
         first = mid;
   }
   return -1; // use -1 to indicate item not found
}
