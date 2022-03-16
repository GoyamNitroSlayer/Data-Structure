Bubble Sort

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[], int n){
    int counter = 1;
    while (counter < n){
        for (int i = 0; i < n - counter; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
}

void print_array(int arr[], int n)
{
    cout << "Sorted Array by 'BUBBLE SORT'" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Bubble_sort(arr, n);
    print_array(arr, n);

    return 0;
}