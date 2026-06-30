#include <stdio.h>
#include <math.h>

int main()
{
    int x = 9;

    // x = sqrt(x); //! 3
    // x = pow(x, 2); //! 81

    float y = 3.1416;

    // y = round(y); //! 3.0000 which is near
    // y = ceil(y); //! 4.0000 top 
    // y = floor(y); //! 3.0000 bottom

    float z = -5;

    // z = abs(z); //! 5.0000
    // z = sin(45);

    // x = log(x); //! 2

    printf("%f", z);

    return 0;
}