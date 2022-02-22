#include <iostream>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {

        long double i = 0, j, answer, counter = 4, z = 1, ans;
        for(j = 0; j < 20; j++)
        {
            i = reduceit(x, counter, z, i);
            z /= 10;
        }

        n = (n * power(10,counter));
        n = roundoff(n);
        answer = power(i, n);
        return answer;
    }

    double reduceit(long double num, long double counter, long double z, long double i)
    {
        while(1)
        {
            if((power(i, power(10, counter))) > num)
            {
                i = i - z;
                break;
            }
            i = i + z;
        }
        return i;
    }
    double roundoff(long double num)
    {
        long double limit;
        limit = (int)num + 0.5;
        if(num > limit) return ((int)num + 1 );
        else return ((int)num);
    }

    double power(long double num,long double i)
    {
        long double j;
        long double product = 1;

        for(j = 0; j < i; j++) product *= num;
        return product;
    }
};

int main()
{
    Solution solution;
    cout << solution.myPow(2, 0.5) << endl;
}