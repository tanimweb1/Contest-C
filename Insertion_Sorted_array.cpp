#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, item, pos = -1;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> item;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == item)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
    {
        cout << "ITEM is already present at position "
             << pos + 1 << endl;
    }
    else
    {
        pos = 0;

        while(pos < n && arr[pos] < item)
            pos++;

        for(int i = n; i > pos; i--)
            arr[i] = arr[i - 1];

        arr[pos] = item;
        n++;

        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    return 0;
}