#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int output = n;
    for(int i=1; i<=n ; i++)
    {
        //扣除三的倍數
        if(i % 3 == 0)
        {
            output -= 1;
        }
        //扣除五的倍數
        else if(i % 5 == 0)
        {
            output -= 1;
        }
        //保留同時是三和五的倍數者
        if(i % 15 == 0)
        {
            output += 1;
        }
    }

    cout << output << endl;
}