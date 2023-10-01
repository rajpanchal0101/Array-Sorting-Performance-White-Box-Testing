#include "sec2_header.h"

string testWithFloatingPointError(int xInput, int expectedOutput, const string& functionName)
{
    int result;
    if (functionName == "sin")
    {
        result = sin(xInput);
    }
    else if (functionName == "cos")
    {
        result = cos(xInput);
    }

    string resultString = "Actual Result   : " + to_string(result) + "\n";
    resultString += (result >= expectedOutput - 1 && result <= expectedOutput + 1) ? "TEST            : PASSED!!" : "TEST            : FAILED!!";
    
    return resultString;
}
