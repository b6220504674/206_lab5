#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,mid,a,b;
    cin >> n;
    a = b = mid = n/2;
    if (n % 2 != 0) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) {
                if(j == a or j == b) {
                    cout << "*";
                }
                else {
                    cout << "_";
                }
            }
            if(i < mid) {
                a++;
                b--;
            }
            else {
                a--;
                b++;
            }
            cout << endl;
        }
    }
    else {
        a = b = mid = --mid;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++) {
                if(j == a or j == b) {
                    cout << "*";
                }
                else {
                    cout << "_";
                }
            }
            if(i < mid) {
                a++;
                b--;
            }
            else if(i == mid){
                cout << endl;
                continue ;
            }
            else {
                a--;
                b++;
            }
            cout << endl;
        }
    }
    return 0;
}
