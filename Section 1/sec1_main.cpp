/**
1) Module Name: sec1_main.cpp
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-10-01
4) Purpose:This is the file which consists of the main function from where the compilation of the program commences.
*/

#include "sec1_arrayutils.cpp"

/**
1) Purpose:This is the main function from where the program's compilation begins and various user defined functions are invoked here based on the requirement.
2) Parameters: None
3) Return type: int
4) Side Effect: None
*/
int main()  
{
    srand(time(0)); //! Seeds the random number generator with the current time

    int arr_size[num_size] = {100000, 1000000, 10000000};
    string ord_typ[num_size] = {"Random Order", "Ascending Order", "Descending Order"};

    for (int size_idx = 0; size_idx < num_size; ++size_idx)
     {
        int size = arr_size[size_idx]; 
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

        if(size == 10000000)
        {
         cout << "Array Size: " << size << " (Please wait for few minutes as computation could take some time as it's a large array)" << endl;
        }
        else
        {
         cout << "Array Size: " << size << endl;
        }
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

        vector<vector<double>> res_count(3, vector<double>(num_iter, 0)); //! Its a 2D vector to store sorting times

        for (int test = 0; test < num_iter; ++test)
        {
            vector<int> rand_arr = gen_rand_arr(size);    //! Generates a random array
            res_count[0][test] = meas_sortime(rand_arr);  //! Measures sorting time on a random array
            res_count[1][test] = meas_sortime(rand_arr);  //! Measures sorting time on the same random array (ascending order)
            reverse(rand_arr.begin(), rand_arr.end());    //! Sorted array gets reversed
            res_count[2][test] = meas_sortime(rand_arr);  //! Measures sorting time on the reversed array
        }

        //! Prints the result in a table format with proper indentation and width
        cout << left << setw(16) << "Arrays" << setw(10) << "Array1" << setw(10) << "Array2" << setw(10) << "Array3" << setw(10) << "Array4" << setw(10) << "Array5" << setw(10) << "Array6" << setw(10) << "Array7" << setw(10) << "Array8" << setw(10) << "Array9" << setw(10) << "Array10" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

        for (int i = 0; i < 3; ++i)
         {
            string ord_type = (i == 0) ? "Random Time(s)" : (i == 1) ? "Ordered Time(s)" : "Reverse Time(s)";
            cout << left << setw(17) << ord_type;

            for (int test = 0; test < num_iter; ++test)
            {
                cout << fixed << setprecision(2) << setw(10) << res_count[i][test]; //! Prints sorting times with 2 decimal places
            }
            cout << endl << endl;
         }

        cout << endl;
     }

    return 0;
}
