#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int x, y;
        cin >> x >> y;
        if (y%x!= 0)
        {
            cout <<y/x << endl;
        }
        else
        {
            cout<<y/x-1<<endl;
        }
    }
    return 0;
}