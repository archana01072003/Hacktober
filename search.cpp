#include <bits/stdc++.h>
using namespace std;
//program to search an element in a rotated array
int search(int A[], int l, int h, int key){
        int idx = -1;
        for(int i = l; i<=h ; i++)
        {
            if(A[i] == key)
            {
                idx = i;
                break;
            }
        }
        return idx;
 }
int main() {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int key;
        cin >> key;
        cout << search(A, 0, n - 1, key) << endl;
    return 0;
}
