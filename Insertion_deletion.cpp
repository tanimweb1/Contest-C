#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book[100], newBook, deleteBook;
    int n, pos, found = -1;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> ws, getline(cin, book[i]);

    cin >> ws;
    getline(cin, newBook);
    cin >> pos;

    for(int i = n; i > pos; i--)
        book[i] = book[i - 1];

    book[pos] = newBook;
    n++;

    cin >> ws;
    getline(cin, deleteBook);

    for(int i = 0; i < n; i++)
    {
        if(book[i] == deleteBook)
        {
            found = i;
            break;
        }
    }

    if(found != -1)
    {
        for(int i = found; i < n - 1; i++)
            book[i] = book[i + 1];

        n--;
    }

    for(int i = 0; i < n; i++)
        cout << book[i] << endl;

    return 0;
}