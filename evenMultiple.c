/*Given a positive integer n, 
return the smallest positive integer that is a multiple of both 2 and n.*/

int smallestEvenMultiple(int n) 
{
    int m;
    ((n%2)==0)?(m = n):(m = 2*n);
    return m;
}

/*
Input: n = 5
Output: 10

Input: n = 6
Output: 6
*/