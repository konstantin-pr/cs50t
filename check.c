#include <stdio.h>
#include <math.h>
 
int main(void){
    double dbl = -123.456789;
    int precision = 2; // количество знаков после запятой
    int whole = (int)dbl;
    int fractional = (int)( ( dbl - floor(dbl) ) * pow(10, precision) );
    printf("Double: %f\nWhole: %d\nFractional: %d\n", dbl, whole, fractional);
    printf("Precision: %d digits after point.\n", precision);
    return 0;
}