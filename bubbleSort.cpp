#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int bubbleSort(int A[], int N){
    int flag = 1;
    int i =0;
    int count = 0;
    while (flag) {
        flag = 0;
        for (int j=N-1; j>i;j--) {
            if (A[j] < A[j-1]) {
                swap(A[j], A[j-1]);
                flag = 1;
                count++;
            }
        }
        i++;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    
    int A[N];
    int v;
    
    for (int i = 0; i <N; i++ ){
        cin >> v;
        A[i] = v;
    }
    
    int t = bubbleSort(A, N);
    
    for (int i = 0; i <N; i++ ){
        cout << A[i];
        if (i!=N-1) cout << " ";
    }
    cout << endl;
    cout << t << endl;
    return 0;
}
