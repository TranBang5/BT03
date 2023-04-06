#include <iostream>
#include <algorithm>

using namespace std;

int sumWaitingTime(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += (n - i - 1) * a[i];
    }
    return sum;
}

int partion(int a[], int low, int high)
{
    int pivot = a[high];    
    int i = low - 1;   
    for(int j = low; j < high; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);  
    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if(low < high){
        int pi = partion(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int main()
{
    int n; cin >> n;
    int t[n];
    for(int i = 0; i < n; i++) cin >> t[i];
    quickSort(t, 0, n - 1);
    for(int i = 0; i < n; i++) cout << t[i];
    cout << endl;
    cout << sumWaitingTime(t, n);
    return 0;
}
