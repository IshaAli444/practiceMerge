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
   
    if (x<y)
    {
        printf ("x is less than y\n");
    }

    else if (x>y)
    {
        printf ("x is greater than y\n");
    }

    else if (x==y)
    {
        printf ("x is equal to y\n");
    }

    return 0;
}
