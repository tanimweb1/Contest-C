#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[100], name;
    int n, pos = -1;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> name;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == name)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Contact found at position: " << pos + 1 << endl;
    else
        cout << "Search is unsuccessful" << endl;

    return 0;
}