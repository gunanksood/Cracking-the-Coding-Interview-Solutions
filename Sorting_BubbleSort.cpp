/*
       https://www.hackerrank.com/challenges/ctci-bubble-sort
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


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
        
    }
   int i,j,count=0;
    for(i = 0; i < n; i++)
        {
        for(j = i + 1; j < n; j++)
            {
            
            if(a[i] > a[j])
                {
                count++;
                int t =a[i];
                a[i] = a[j];
                a[j] = t;
                
            }
        }
    }

    
    cout<<"Array is sorted in "<<count  <<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}

