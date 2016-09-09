#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void queryOne(vector< vector<int> > & seqList, int x, int y, int lastAns, int n){
    int seqNum = ((x ^ lastAns) % n);
    seqList.at(seqNum).push_back(y);
}

void queryTwo(vector< vector<int> > & seqList, int x, int y, int & lastAns, int n){
    int seqNum = ((x ^ lastAns) % n);
    int index = y % seqList.at(seqNum).size();
    int value = seqList.at(seqNum).at(index);
    lastAns = value;
    cout << lastAns << endl;
}

int main() {
    // First line, meta-data
    int n;
    cin >> n;
    int numQ;
    cin >> numQ;
    
    int lastAns = 0;
    int line = 0;
    int qType;
    int x;
    int y;
    
    while(line < numQ){
        cin >> qType;
        cin >> x;
        cin >> y;
        vector< vector<int> > seqList;
        if (qType == 1){
            queryOne(seqList, x, y, lastAns, n);
        }
        if (qType == 2){
            queryTwo(seqList, x, y, lastAns, n);
        }
    }
    
    return 0;
}