#include <exponent.h>

double exponent(float num)
{
    float x;
    double result;
    const float e = 2.71828;
    if(x==0)
    {
        result = 1;
        return result;
    }
    else if(x>0)
    {
        result=1;
        for(int i=0;i<x;i++)
        {
            result=result*e;
        }
        return result;
    }
    else if(x<0)
    {
        result=1;
        for(int i=0;i>x;i--)
        {
            result=result/e;
        }
        return result;
    }
    else
    {
        printf("Invalid input.");
        return 0; 
    }
} 