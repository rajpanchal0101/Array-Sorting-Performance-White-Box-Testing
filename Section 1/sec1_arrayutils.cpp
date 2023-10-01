/**
1) Module Name: sec1_arrayutils.cpp
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-10-01
4) Purpose:This is the file which consists of implementation of the various functions declared in the header file.
*/

#include "sec1_header.h"

vector<int> gen_rand_arr(int size)  
{
    vector<int> arr(size);
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand(); //! generates random integers
    }
    return arr;
}


double meas_sortime(vector<int>& arr)
{
    auto start_time = chrono::high_resolution_clock::now(); //! Gets the current time before sorting
    sort(arr.begin(), arr.end()); //! Sorts the array
    auto end_time = chrono::high_resolution_clock::now();  //! Gets the current time after sorting
    return chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count() / 1000.0; //! Converts result to seconds
}