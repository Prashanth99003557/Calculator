#include<nand.h>


int nand(int operand1, int operand2)
{
    int result;
    if(operand1<0 && operand2<0)
    return -1;
    else if(operand1>1 && operand2>1)
    return 0;
    else if(operand1==1 && operand2==1)
    return 0;
    else
    return 1;
}