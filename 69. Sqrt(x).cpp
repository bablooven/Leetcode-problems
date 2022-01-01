69. Sqrt(x) (Easy)

/* Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5. */

//My code: 

class Solution {
public:
    int mySqrt(int x) {
        for (long long i=0; i<x; i++)
        {
            if ((i+1)*(i+1)>x)
                return i;
        }
        return x;
    }
};

Optimal Code in C++:

class Solution {
public:
    long mySqrt(int x) {
        long left = 1;
        long right = x;
        while (left <= right) {
            long mid = (left + right) / 2;
            if (x > (mid * mid))
                left = mid + 1;
            else if (x < mid * mid)
                right = mid - 1;
            else 
                return mid;
        }
        
        return right;
    }
};

