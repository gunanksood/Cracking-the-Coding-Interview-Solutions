/*
       https://www.hackerrank.com/challenges/ctci-making-anagrams
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

long long int number_needed(string a, string b) {
    vector<int>arr(26, 0);
    vector<int>brr(26, 0);
    
   for(long long int i = 0 ; a[i] != '\0'; i++)
       {
arr[a[i] - 'a']++;       
   }
     for(long long int i = 0 ; b[i] != '\0'; i++)
       {
brr[b[i] - 'a']++;       
   }
    long long int sum = 0;
    for(long long int i = 0 ; i < 26; i++)
        {
        sum +=  max(arr[i],brr[i]) - min(arr[i], brr[i]);
    }
    return sum;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

