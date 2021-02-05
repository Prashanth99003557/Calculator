#include<nor.h>
int nor(int operand1, int operand2)
{
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 0;
    else if(operand1==0 && operand2==0)
    return 1;
    else
    return 0;
}