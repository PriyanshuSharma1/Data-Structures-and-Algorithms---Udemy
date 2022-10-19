#include <iostream>
using namespace std;
int sum(int n)
{
    int p = n;
    if (n == 0)
    {
        return 0;
    }

    int smalloutput = sum(n / 10);

    return smalloutput + n % 10;
}
int main()
{
    cout << sum(12345) << endl;
}