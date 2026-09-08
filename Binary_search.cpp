#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, item;
    int low, high, mid, pos = -1;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> item;

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == item)
        {
            pos = mid;
            break;
        }
        else if(item < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(pos != -1)
        cout << "Product found at position: " << pos + 1 << endl;
    else
        cout << "Product not found in inventory" << endl;

    return 0;
}