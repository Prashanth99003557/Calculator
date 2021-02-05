# Test Plan (High Level)

| Test ID  | Description  | Expected I/O  |  Expected O/P |
|---|---|---|---|
| 1  | Enter the numbers in the calculator  | User is able to enter numbers in the calculator  | Will show the correct numbers entered by the user  |
| 2  | Selecting operation  | Proper display of output which can be recognized by the user  | Will display results with good visibility  |
| 3  | Display  |   |   |
| 4  | Check the number of digits on display are within the limit  | Number of digits entered by user within the limit  | Number of digits entered are within a limit   |

# Test Plan (Low Level)
## Addition/Subtraction Test Plan

|  Test ID | Description  | Expected I/P  |  Expected O/P |
|---|---|---|---|
|  1 |  Select addition or subtraction | Enter the case number to select operation  | Will select the operation based on case number  |
|  2 |  Input numbers for addition | Correct number as input  |  Will show the correct sum of the numbers inputted |
|  3 | Input numbers for subtraction  | Correct number as input  | Will show the correct difference of the numbers inputted   |
|  4 | First number for addition is negative  | Correct number as input  | Will show the correct result |
|  5 | First number for subtraction is negative | Correct number as input  | Will show the correct result  |
|  6 | Second number for addition is negative  | Correct number as input  | Will show the correct result  |
|  7 | Second number for subtraction is negative  | Correct number as input  | Will show the correct result  |
|  8 | More than two numbers for addition  | Correct number as input  | Will show the correct result  |
|  9 | More than two numbers for subtraction  | Correct number as input  | Will show the correct result  |


## Multiplication/Division Test Plan

|  Test ID | Description  | Expected I/P  |  Expected O/P |
|---|---|---|---|
|  1 |  Select multiplication or division | Enter the case number to select operation  | Will select the operation based on case number  |
|  2 |  Input numbers for multiplication | Correct number as input  |  Will show the correct product of the numbers inputted |
|  3 | Input numbers for division  | Correct number as input  | Will show the correct quotient of the numbers inputted   |
|  4 | First number for multiplication is negative  | Correct number as input  | Will show the correct result |
|  5 | First number for division is negative | Correct number as input  | Will show the correct result  |
|  6 | Second number for multiplication is negative  | Correct number as input  | Will show the correct result  |
|  7 | Second number for division is negative  | Correct number as input  | Will show the correct result  |
|  8 | More than two numbers for multiplication  | Correct number as input  | Will show the correct result  |
|  9 | More than two numbers for division  | Correct number as input  | Will show the correct result  |


## Logical Operation Test Plan

|  Test ID | Description  | Expected I/P  |  Expected O/P |
|---|---|---|---|
|  1 |  Select logical operator | Enter the case number to select operation  | Will select the operation based on case number  |
|  2 |  Input bits for logical AND  | Correct bits as input  | Will show the correct result  |
|  3 | Input bits for logical OR  | Correct bits as input  | Will show the correct result   |
|  4 | Input bits for logical NAND | Correct bits as input  | Will show the correct result |
|  5 | Input bits for logical NOR | Correct number as input  | Will show the correct result  |

## Exponential Operation Test Plan
|  Test ID | Description  | Expected I/P  |  Expected O/P |
|---|---|---|---|
|  1 |  Select exponential operator | Enter the case number to select operation  | Will select the operation based on case number  |
|  2 |  When power is positive  | Correct number as input  | Will show the correct result  |
|  3 |   When power is negative | Correct number as input | Will show the correct result   |
|  4 |  When power is decimal   | Correct number as input | Will show the correct result |

## Binary to Decimal/Binary to Hexadecimal Test Plan

|  Test ID | Description  | Expected I/P  |  Expected O/P |
|---|---|---|---|
|  1 |  Select conversion operator | Enter the case number to select operation  | Will select the operation based on case number  |
|  2 |  When binary to decimal | Correct number as input  | Will show the correct result  |
|  3 |   When binary to hexadecimal | Correct number as input | Will show the correct result   |

## Factorial Operation Test Plan

|  Test ID | Description  | Expected I/P  |  Expected O/P |
|---|---|---|---|
|  1 |  Select factorial operator | Enter the case number to select operation  | Will select the operation based on case number  |
|  2 |  When number is positive  | Correct number as input  | Will show the correct result  |
|  3 |   When number is negative | Correct number as input | Will show the correct result   |
|  4 |  When number is zero  | Correct number as input | Will show the correct result |

## Prime Number Test Plans

| Test ID   | Description | Expected I/P | Expected O/P
|---|---|---|---|
| 1 | Select prime number operator | Enter the case number to select operation  | Will select the operation based on case number  | 
| 2 | When the number is a prime number | Correct number as the input | Will show the correct result|
| 3 | When the number is not a prime number | Correct number as the input | Will show the correct result|
