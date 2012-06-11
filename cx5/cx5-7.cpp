/*
   Copyright (c) 1997 Oxford University Press. All Rights Reserved.
   This code is from "Data Structures via C++: Objects by Evolution", 
   published by Oxford University Press.  Permission is hearby granted 
   to use this code for any educational, non-commercial purpose, 
   provided this notice remains intact. 
   A. Michael Berman, Rowan University, berman@rowan.edu 
   http://www.rowan.edu/evolve
*/
// RCS $Id: cx5-7.cpp,v 1.2 1997/07/31 20:26:45 berman Exp $

// cx5-7.cpp
// Code Example 5-7: Bubble Sort

void bubbleSortPhase(int a[], int last); // see cx5-6.cpp

void bubbleSort(int a[], int n)
{
	// Precondition: a is an array indexed from a[0] to a[n-1]
	int i;
	for (i = n - 1; i > 0; i--)
		bubbleSortPhase(a, i);
	// Postcondition: a is sorted
}
