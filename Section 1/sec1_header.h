/**
1) Module Name: sec1_header.h
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-10-01
4) Purpose:This is a header file which consists of all the required libraries, global variables and function's declaration.
*/

# pragma once  
#include <iostream>
#include <vector>
#include <algorithm> //! Standard C++ algorithm library for sorting
#include <chrono> //! Standard C++ library for time measurement
#include <ctime>  //! Standard C++ library for time-related functions
#include <iomanip> //! Standard C++ library for formatting output

using namespace std;

const int num_iter = 10; //! Number of test iterations 
const int num_size = 3;  //! Number of different array sizes

/**
1) Purpose: generates a random array of integers
2) Parameters: size(int)
3) Return type: vector<int>
4) Side Effect: None
*/
vector<int> gen_rand_arr(int size);

/**
1) Purpose: measures the time taken by a sort algorithm in seconds
2) Parameters: arr(vector<int>)
3) Return type: double
4) Side Effect: None
*/
double meas_sortime(vector<int>& arr);
