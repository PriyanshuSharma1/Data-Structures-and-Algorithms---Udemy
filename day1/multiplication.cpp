#include <iostream>
using namespace std;
// 5*4 = 5+5+5+5
int multiplication(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallans = multiplication(m, n - 1);
    return smallans + m;
}
int main()
{
    cout << multiplication(5, 4) << endl;
}