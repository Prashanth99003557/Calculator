#include <division.h>

int division()
{
    int m, l, d;
    print("Two numbers:");

    print("1st number:");
    scanf("%d", &m);

    print("2st number:");
    scanf("%d", &l);

    d = m / l ;
    printf("division of %d & %d is = %d",m,l,d );

    return 0;
}
