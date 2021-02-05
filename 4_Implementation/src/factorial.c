#include <factorial.h>

int factorial(int operand1)
    {   
        int fact=1;
        if (operand1==0)
        {
            return 1;
        }
        if (operand1 < 0)
        {
            return 0;
        }
        else
        {
            for (int i = 1; i <= operand1; ++i)
            {
                fact *= i;
            }
        return fact;
        }
    }
