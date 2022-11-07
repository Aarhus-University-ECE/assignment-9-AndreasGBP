#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x) //Finding integer "x" in array "a" with the length "n"
{
    if(n > 0 && a[n-1] == x) //The base case
    {
        return true;
    }
    else if (n>0 && a[n-1] != x) //The recursive step
    {
        return search(a, n-1, x);
    }
    else if (n == 0) //The base case 
    {
        return false;
    }
}