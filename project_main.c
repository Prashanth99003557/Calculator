#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
int calculator_operand3 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, PRIME, BITWISEAND, BITWISEOR, BITWISENOT, MODULUS, SQUARE,AND,OR,NOT,NAND,NOR,FACTORIAL, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Bitwiseand\n6. Bitwiseor\n7. Bitwisenot\n8. Modulus\n9. Square\n10. AND\n11. OR\n12. NOT\n13. NAND\n14. NOR\n15. Prime\n16. Factorial\n17. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;

        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        
        
        case BITWISEAND:
            printf("\n\t%d && %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            bitwiseand(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case BITWISEOR:
            printf("\n\t%d || %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            bitwiseor(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case BITWISENOT:
            printf("\n\t!%d = %d\nEnter to continue", 
            calculator_operand1, 
            bitwisenot(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case MODULUS:
            printf("\n\t%d % %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            modulus(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SQUARE:
            printf("\n\t%d = %d\nEnter to continue", 
            calculator_operand1, 
            square(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case AND:
            printf("\n\t%d && %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            and(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case OR:
            printf("\n\t%d || %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            or(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case NOT:
            printf("\n\t ~%d = %d\nEnter to continue", 
            calculator_operand1, 
            not(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case NAND:
            printf("\n\t%d && %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            nand(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case NOR:
            printf("\n\t%d || %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            nor(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;

        case PRIME:
            printf("\n\t%d = %d\nEnter to continue", 
            calculator_operand1, 
            prime(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break; 
        case FACTORIAL:
            printf("\n\t%d! = %d\nEnter to continue", 
            calculator_operand1, 
            factorial(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        
        case 23:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}