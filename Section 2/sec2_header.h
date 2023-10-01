/**
1) Module Name: sec2_header.h
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-10-02
4) Purpose:This is a header file which consists of all the required libraries, global variables and function's declaration.
*/

# pragma once  
#include <iostream>
#include <string>
#include <cmath> //! For reference calculations

using namespace std;

#include "S2.cpp" //! Importing "S2.cpp" file to valiate its functions

/**
1) Purpose: Validates the user defined sine and cosine functions from 'S2.cpp' file with a floating-point error tolerance
2) Parameters: inp(int), x_opt(int), fun_name(string)
3) Return type: string
4) Side Effect: None
*/
string validate_FPE(int inp, int x_opt, const string& fun_name);