#include <iostream>
#include <climits>
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
    int cumSum[n+1];
    cumSum[0] = 0;

    for (int i = 1; i < n; i++)
    {
        cumSum[i] = cumSum[i-1] + arr[i-1];
    }
    
    int maxSum = INT16_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum=0;
        for (int j = 1; j <= i; j++)
        {
            
            sum = cumSum[i] - cumSum[j-1];
            maxSum = max(maxSum, sum);
            //cout << endl;
            
        }
        
    }
    cout << maxSum << endl;
    return 0;

    }
