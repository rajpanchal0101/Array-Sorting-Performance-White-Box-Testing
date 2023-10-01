#include "sec2_trigono_utils.cpp"

int main()
{
    cout << "\n->Test Cases for int sin(int x) and int cos(int x) from the imported file 'S2.cpp' : \n" << endl;
    cout << "--------------------------------------------------------------" << endl;

    // Define test cases
    struct TestCase
    {
        string functionName;
        int xInput;
        int expectedOutput;
    };

    TestCase testCases[] = 
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

    for (const TestCase& testCase : testCases)
    {   if(i>=10)
        {
            cout << "Test Case "<< i <<"    : "<< testCase.functionName << "(" << testCase.xInput << ")" << endl;
        }
        else
        {
            cout << "Test Case "<< i <<"     : "<< testCase.functionName << "(" << testCase.xInput << ")" << endl;
        }
        cout << "Expected Result : " << testCase.expectedOutput << endl;
        cout << testWithFloatingPointError(testCase.xInput, testCase.expectedOutput, testCase.functionName) << endl;
        cout << "--------------------------------------------------------------\n" << endl;
        i+=1;
    }

    return 0;
}
