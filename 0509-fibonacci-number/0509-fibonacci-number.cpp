class Solution {
public:
    int fib(int n) {
        if (n<2)
            return n;
        if (n==2)
            return 1;
        if (n>2)
            return fib(n-1)+fib(n-2);
        return 0;
    }
};