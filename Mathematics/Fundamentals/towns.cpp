#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tests;
    cin >> tests;
    int towns;
    long int paths;
    long int newRoutes;
    for (int i = 0; i < tests; i++){
        cin >> towns;
        for (int j = 0; j < towns-1; j++){
            if (j == 0){
                cin >> paths;
            }
            else{
                cin >> newRoutes;
                paths = paths * newRoutes;
            }
        }
        cout << paths % 1234567 << "\n";
        paths = 0;
        newRoutes = 0;
        towns = 0;
    }
    return 0;
}