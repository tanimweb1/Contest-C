#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int total = 0;
    double average;

     cout << "Enter grocery expenses for 10 days:" << endl;
for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
for (int i = 0; i < 10; i++)
    {
        total = total + arr[i]; }
 average = total / 10.0;
 cout << "Total Amount Spent = " << total << endl;
    cout << "Average Daily Spending = " << average << endl;

    return 0;
}