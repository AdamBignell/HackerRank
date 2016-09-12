#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    int px;
    int py;
    int qx;
    int qy;
    
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> px;
        cin >> py;
        cin >> qx;
        cin >> qy;
        
        float symx = qx + (qx - px);
        float symy = qy + (qy - py);
        cout << symx << " ";
        cout << symy << " \n";
    }
    return 0;
}