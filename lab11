//Файл circle.h
#ifndef H_CIRCLE
#define H_CIRCLE
double pi = 3.1415926;
struct circle
{
    double x, y, r;
    double area ()
    {
        return (pi*r*r);
    }
    double perimetr ()
    {
        return (2*pi*r);
    }
} q;
#endif
 
//Файл программы
#include <stdio.h>
#include "circle.h"
int main()
{
    scanf ("%lf %lf %lf", &q.x, &q.y, &q.r);
    double s = q.area ();
    double p = q.perimetr ();
    printf ("%lf %lf\n", s, p);
    return 0;
}
