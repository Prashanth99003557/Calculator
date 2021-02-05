#ifndef __NOTNORNAND_H__
#define __NOTNORNAND_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
/**
*  provides NOT of operand1 and returns the result
* @param[in] operand1 
* @return Result of the the NOT operation
*/
int not(int operand1);

/**
*  provides NAND of operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of the the NAND operation
*/
int nand(int operand1, int operand2);

/**
*  provides NOR of operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of the the NOR operation
*/
int nor(int operand1, int operand2);