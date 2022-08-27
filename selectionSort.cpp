#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int selectionSort(int A[], int N){
    int count=0;
    for (int i=0; i<N;i++) {
        int minj =i;
        for (int j=i; j<N; j++) {
            if (A[j] < A[minj]) {
                minj =j;
            }
        }
        if (A[i] != A[minj]) {
            swap(A[i], A[minj]);
            count++;   
        }
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
    
    int t = selectionSort(A, N);
    
    for (int i = 0; i <N; i++ ){
        cout << A[i];
        if (i!=N-1) cout << " ";
    }
    cout << endl;
    cout << t << endl;
    return 0;
}
