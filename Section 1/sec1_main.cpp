#include "sec1_arrayutils.cpp"

int main()
{
    srand(time(0));

    int arr_size[num_size] = {100000, 1000000, 10000000};
    string ord_typ[num_size] = {"Random Order", "Ascending Order", "Descending Order"};

    for (int size_idx = 0; size_idx < num_size; ++size_idx)
     {
        int size = arr_size[size_idx];

        cout << "Array Size: " << size << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

        vector<vector<double>> res_count(3, vector<double>(num_iter, 0));

        for (int test = 0; test < num_iter; ++test)
        {
            vector<int> rand_arr = gen_rand_arr(size);
            res_count[0][test] = meas_sortime(rand_arr);
            res_count[1][test] = meas_sortime(rand_arr);
            reverse(rand_arr.begin(), rand_arr.end());
            res_count[2][test] = meas_sortime(rand_arr);
        }

        // Print the res_counts in a table format
        cout << left << setw(16) << "Arrays" << setw(10) << "Array1" << setw(10) << "Array2" << setw(10) << "Array3" << setw(10) << "Array4" << setw(10) << "Array5" << setw(10) << "Array6" << setw(10) << "Array7" << setw(10) << "Array8" << setw(10) << "Array9" << setw(10) << "Array10" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
        for (int i = 0; i < 3; ++i)
         {
            string ord_type = (i == 0) ? "Random Time(s)" : (i == 1) ? "Ordered Time(s)" : "Reverse Time(s)";
            cout << left << setw(17) << ord_type;
            for (int test = 0; test < num_iter; ++test)
            {
                cout << fixed << setprecision(2) << setw(10) << res_count[i][test];
            }
            cout << endl << endl;
         }

        cout << endl;
     }

    return 0;
}
