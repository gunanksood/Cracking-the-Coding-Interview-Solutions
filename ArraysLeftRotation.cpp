/*
       https://www.hackerrank.com/challenges/ctci-array-left-rotation
*/


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

vector<long long int> array_left_rotation(vector<long long int> a,long long int n, long long int k) {
    long long int index = k % n;
    vector<long long int >res;
    for(long long int i = index ; i < n ; i++)
        {
        res.push_back(a[i]);
    }
    for(long long int i = 0 ; i < index ; i++)
        {
        res.push_back(a[i]);
    }
    return res;
}

int main(){
    long long int n;
    long long int k;
    cin >> n >> k;
    vector<long long int> a(n);
    for(long long int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<long long int> output = array_left_rotation(a, n, k);
    for(long long int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}

