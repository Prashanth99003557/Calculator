#include<decitobinary.h>

long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp =1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum/2;
        binarynum=binarynum+rem*temp;
        temp=temp*10;
    }    
    
    return binarynum;
}

    int decimalnum;
    printf("enter a decimal number: ");
    scanf("%d", &decimalnum);
    printf("equivalent binary num is:", decimalToBinary(decimalnum));
    return 0;

