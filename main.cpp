#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout << "Please enter the num :";
    cin >>n;
    for (int i=0;i<100;i++)
    {
        bool p=true;
        cin >>m;
        for (int j=2;j<m;j++)
    {
        if (m%j==0)
        {
            p=false;
        }

    }
    if (p)
        cout << " yes "<<endl;
    else
        cout << " no "<<endl;

    return 0;
}
}
