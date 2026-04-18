//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

double myPow(double x, int n)
{
    double res;
    res = pow(x, n);
    return res;
}

/*Input 1: x = 2.00000, n = 10
Output 1: 1024.00000

Input 2: x = 2.10000, n = 3
Output 2: 9.26100

Input: x = 2.00000, n = -2
Output: 0.25000
*/