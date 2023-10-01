/**
1) Module Name: sec2_main.cpp
2) Author: Raj Panchal (rjp659@uregina.ca)
3) Date of creation: 2023-10-02
4) Purpose:This is the file which consists of the main function from where the compilation of the program commences.
*/

#include "sec2_trigono_utils.cpp" 

/**
1) Purpose:This is the main function from where the program's compilation begins and various user defined functions are invoked here based on the requirement.
2) Parameters: None
3) Return type: int
4) Side Effect: None
*/
int main()
{
    cout << "\n->Test Cases for int sin(int x) and int cos(int x) from the imported file 'S2.cpp' : \n" << endl;
    cout << "--------------------------------------------------------------" << endl;

    //! Defines test cases as an array of structs
    struct TestCase
    {
        string fun_name; //! The name of the function to test ("sin" or "cos")
        int inp;         //! The input value for the function
        int x_opt;       //! The expected output value for the test case
    };
    
    //! Initializes an array of test cases
    TestCase t_cases[] = 
    {
        {"sin", -17, 2923},
        {"sin", 0, 0},
        {"sin", 23, 3907},
        {"sin", 37, 6018},
        {"sin", 45, 7071},
        {"sin", 68, 9271},
        {"sin", 90, 10000},
        {"sin", 111, 9335},
        {"sin", 155, 4226},
        {"sin", 180, 0},
        {"sin", 198, -3090},
        {"sin", 270, -10000},
        {"sin", 360, 0},
        {"sin", 547, -1219},
        {"cos", -19, 9455},
        {"cos", 0, 10000},
        {"cos", 45, 7071},
        {"cos", 90, 0},
        {"cos", 180, -10000}
        
    };

    int i=1;
    
    //! Loops through each test case and display results
    for (const TestCase& t_case : t_cases)
    {   if(i>=10)
        {
            cout << "Test Case "<< i <<"    : "<< t_case.fun_name << "(" << t_case.inp << ")" << endl;
        }
        else
        {
            cout << "Test Case "<< i <<"     : "<< t_case.fun_name << "(" << t_case.inp << ")" << endl;
        }
        cout << "Expected Result : " << t_case.x_opt << endl;
        cout << validate_FPE(t_case.inp, t_case.x_opt, t_case.fun_name) << endl;
        cout << "--------------------------------------------------------------\n" << endl;
        i+=1;
    }

    return 0;
}
