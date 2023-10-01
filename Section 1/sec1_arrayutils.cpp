#include "sec1_header.h"

vector<int> gen_rand_arr(int size)
{
    vector<int> arr(size);
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand(); // Use rand() to generate random integers
    }
    return arr;
}

double meas_sortime(vector<int>& arr)
{
    auto start_time = chrono::high_resolution_clock::now();
    sort(arr.begin(), arr.end());
    auto end_time = chrono::high_resolution_clock::now();
    return chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count() / 1000.0; // Convert to seconds
}