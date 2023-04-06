#include <iostream>
using namespace std;
int main()
{
    int n; 
	cin >> n;
    int a[n];
    bool seen[10001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(!seen[a[i]]) seen[a[i]] = true;
        else{
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
