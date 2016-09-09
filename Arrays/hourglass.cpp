#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int maxHG;
      
    for (int r = 0; r < 4; r++){
        for (int c = 0; c < 4; c++){
            int tempSum = 0;
            int topLine = arr[r][c] + arr[r][c+1] + arr[r][c+2];
            int stem = arr[r+1][c+1];
            int bottomLine = arr[r+2][c] + arr[r+2][c+1] + arr[r+2][c+2];
            tempSum = topLine + stem + bottomLine;
            if (r == 0 && c == 0){
                maxHG = tempSum;
            }
            if (tempSum > maxHG){
                maxHG = tempSum;
            }
        }
    }
    cout << maxHG;
    
    return 0;
}