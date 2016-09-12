#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int d;
    cin >> n;
    cin >> d;
    int array[n];
    int input = 0;
    while(input < n){
        cin >> array[input];
        input++;
    }
    
    int count = 0;
    while(count < n){
        cout << array[d % n] << " ";
        d++;
        count++;
    }
    
    return 0;
}