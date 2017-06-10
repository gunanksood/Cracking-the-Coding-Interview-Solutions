/*
       https://www.hackerrank.com/challenges/ctci-find-the-running-median
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
#include<iomanip>
using namespace std;


int main(){
    long long int n;
    cin >> n;
    priority_queue<double > max ;
    priority_queue<double,vector<double>, greater<double> > min ;
    double top_max = 0.0, top_min = 0.0;
    for(long long int i = 0 ; i < n ; i++)
        {
        double num;
        cin >> num;
        
        if(num < top_max)
            {
            if(max.size() <= min.size())
                {
                max.push(num);
                top_max = max.top();
            }
            else
                {
                top_min = max.top();
                max.pop();
                min.push(top_min);
                max.push(num);
                top_max = max.top();
            }
        }
        else
            {
            if(max.size() >= min.size())
                {
                min.push(num);
                top_max = min.top();
            }
            else
                {
                top_min = min.top();
                min.pop();
                max.push(top_min);
                min.push(num);
                top_max = min.top();
            }
        }
        if(max.size() - min.size() == 1)
            {
            cout<< setprecision(1)<<fixed<<max.top()<<endl;
        }
        else if(min.size() - max.size() == 1)
            {
            cout<<setprecision(1)<<fixed<<min.top()<<endl;
        }
        else
            {
            cout<<setprecision(1)<<fixed<<(min.top() + max.top()) / 2<<endl;
        }
    }
    return 0;
}

