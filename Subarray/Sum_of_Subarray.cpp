
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How mant Elements to add :" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "The " << i + 1 << " Elemnts is :";
        cin >> arr[i];
    }
    int curr = 0;
    
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout << curr<<" "<< endl;
        }
        
    }

    return 0;
}
