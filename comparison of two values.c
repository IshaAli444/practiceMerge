#include <stdio.h>
int main ()
{
    int x;
    int y;

    printf ("Enter the value of x\n");
    scanf ("%d", &x);

    printf ("Enter the value of y\n");
    scanf ("%d", &y);

    int compare;
        //if y is greater than x
    if (x<y)
    {
        printf ("x is less than y\n");
    }
        //if x is greater than y
    else if (x>y)
    {
        printf ("x is greater than y\n");
    }
        // if x is equal to y
    else if (x==y)
    {
        printf ("x is equal to y\n");
    }

    return 0;
}
