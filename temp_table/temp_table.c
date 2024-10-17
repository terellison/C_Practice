#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    for(int fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        int celsius = 5 * (fahr - 32) / 9;
        printf("%d\t\t%d\n", fahr, celsius);
    }

    return 0;
}
