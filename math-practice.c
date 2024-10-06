#include <stdio.h>
#include <math.h>

// Variant 2
// z1 = cos(a) + sin(a) + cos(3a) + sin(3a)
// z2 = 2 * sqrt(2) * cos(a) * sin((pi/4) + 2*a)

int main() {
    double a = 0, z1 = 0, z2 = 0;

    printf("input a: ");

    if (scanf("%lf", &a) != 1){
        printf("The value of an \"a\" must be a double.\nPlease retry.");
        return 0;
    }

    z1 = cos(a) + sin(a) + cos(3*a) + sin(3*a);
    z2 = 2 * sqrt(2) * cos(a) * sin((M_PI/4) + 2*a);

    printf("z1 = %lf\n", z1);
    printf("z2 = %lf\n", z2);

    return 0;
}