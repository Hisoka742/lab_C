#include <stdio.h>
int main ()
{
    FILE *f1, *f2, *f3; 
    f1 = fopen ("t1.txt", "r");
    f2 = fopen ("t2.txt", "r");
    f3 = fopen ("t3.txt", "w"); 
    char s [1000]; 
    while (!feof(f1)) 
    { 
        fscanf (f1, "%s", s); 
        fprintf (f3, "%s\n", s); 
    } 
    while (!feof(f2)) 
    { 
        fscanf (f2, "%s", s); 
        fprintf (f3, "%s\n", s); 
    } 
    fclose (f1);
    fclose (f2);
    fclose (f3);
    return 0;
}
