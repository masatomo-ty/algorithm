#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int maxdiff(int R[], int n){

    int maxv = -1 * pow(10, 10);
    int minv = pow(10, 10);
    
    for (int j=0;j<n;j++) {
        maxv = max(maxv, R[j]-minv);
        minv = min(minv, R[j]);
    }
    return maxv;
}

int main() {
    int n;
    cin >> n;
    
    int R[n];
    int v;
    
    for (int i = 0; i <n; i++ ){
        cin >> v;
        R[i] = v;
    }
    
    int k = maxdiff(R, n);
    
    cout << k << endl;
    return 0;
}
