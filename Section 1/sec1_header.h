# pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <iomanip>

using namespace std;

const int num_iter = 10;
const int num_size = 3;

vector<int> gen_rand_arr(int size);

double meas_sortime(vector<int>& arr);
