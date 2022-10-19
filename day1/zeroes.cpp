#include <iostream>
using namespace std;
int count(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallans = count(n / 10);
    if (n % 10 == 0)
    {
        return smallans + 1;
    }
    else
    {
        return smallans;
    }
}
int main()
{
    cout << count(1020) << endl;
}