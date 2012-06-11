/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx5-5.cpp,v 1.3 1997/08/01 18:37:47 berman Exp $

// cx5-5.cpp
// Code Example 5-5: Selection Sort

void swapElements(int a[], int maxPos, int last); // see Exercise 5-12
int maxSelect(int a[], int n); // see cx5-4.cpp

void selectionSort(int a[], int n)
{
   int last(n-1);
   int maxPos;

   while (last > 0) {
   // invariant: a[last+1] ... a[n-1] is sorted &&
   //    everything in a[0] ... a[last] <= everything in a[last+1] ... a[n-1]
      maxPos = maxSelect(a, last+1); // last+1 is length from 0 to last
      swapElements(a, maxPos, last);
      last--;
   }
}
