/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx5-3.cpp,v 1.2 1997/08/01 18:35:21 berman Exp $

int binarySearch(int a[], int n, int target)
{
   // Precondition: array a is sorted in ascending order from a[0] to a[n-1]
   int first(0);
   int last(n - 1);
   int mid;
   while (first <= last) {
      // Invariant: if target in a, then a[first] <= target <= a[last]
      mid = (first + last)/2;
      if (target == a[mid])
         return mid;
      else if (target < a[mid])
         last = mid - 1;
      else // must be that target > a[mid]
         first = mid + 1;
   }
   return -1; //use -1 to indicate item not found
}

