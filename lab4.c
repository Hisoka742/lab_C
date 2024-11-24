#include <stdio.h>


int main ()
{
    //Задание 4.1
    int upp = 10001,low = 999, x;

    scanf("%d" ,& x);
    int p = (x | ~upp) & ((x ^ upp) | (~upp + x));
    int q = (low | ~x) & ((low ^ x) | (~x + low));
    return 1 & ((p & q) >> 31);
    //Задание 4.2
    int b;
    scanf ("%d", &b);
    int z=1;
    z = z>>22;
    if (z&b)
        printf ("1\n");
    else
        printf ("0\n");
    return 0;
}
