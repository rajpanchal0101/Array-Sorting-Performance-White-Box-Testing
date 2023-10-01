/**
1) Module Name: sec2_trigono_utils.cpp
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-10-02
4) Purpose:This is the file which consists of implementation of the various functions declared in the header file.
*/

#include "sec2_header.h"

string validate_FPE(int inp, int x_opt, const string& fun_name)
{
    int res;
    //!Determines which function to test based on the given function name
    if (fun_name == "sin")
    {
        res = sin(inp);
    }
    else if (fun_name == "cos")
    {
        res = cos(inp);
    }
    //! Creates a result string indicating the actual result and test pass/fail status
    string res_str = "Actual Result   : " + to_string(res) + "\n";  //!converts the integer result into a string

    res_str += (res >= x_opt - 1 && res <= x_opt + 1) ? "TEST            : PASSED!!" : "TEST            : FAILED!!";
    
    return res_str;
}
