/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx5-1.cpp,v 1.2 1997/08/01 18:34:13 berman Exp $

// cx5-1.cpp
// Code Example 5-1: Linear Search

int linearSearch(int a[], int n, int target)
{
   int i;
   for (i = 0; i < n; i++)
      if (a[i] == target) // key comparison
         return i;
   return -1; // use -1 to indicate failure
}
