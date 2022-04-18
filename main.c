#include <stdio.h>
#include <stdlib.h>

int main() 
{
    for (int i = 1; i < 100; i++)
    {
        if (i % 15 == 0)
            printf("%i: FizzBuzz.", i);
        else if (i % 3 == 0)
            printf("%i: Fizz.", i);
        else if (i % 5 == 0)
            printf("%i: Buzz.", i);
        else
            printf("%i.", i);
        printf("\n");
    }
    return 0;
}