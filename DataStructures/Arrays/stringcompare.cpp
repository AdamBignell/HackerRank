#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n;
    int q;
    cin >> n;
    string array[n];
    int in = 0;
    while (in < n){
        cin >> array[in];
        in++;
    }
    
    in = 0;
    cin >> q;
    string buffer = "";
    
    while (in < q){
        int count = 0;
        cin >> buffer;
        for (int i = 0; i < n; i++){
            if (buffer == array[i]){
                count++;
            }
        }
        in++;
        cout << count << endl;
    }
    return 0;
}