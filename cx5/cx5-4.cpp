/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx5-4.cpp,v 1.3 1997/08/01 18:39:50 berman Exp $

// cx5-4.cpp
// Code Example 5-4: Max Select function

int maxSelect(int a[], int n)
{
   int maxPos(0), currentPos(1);

   while (currentPos < n) {
   // Invariant: a[maxPos] >= a[0] ... a[currentPos-1]
      if (a[currentPos] > a[maxPos]) 
         maxPos = currentPos;
      currentPos++;
   }
   return maxPos;
}
