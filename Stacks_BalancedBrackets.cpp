/*
    https://www.hackerrank.com/challenges/ctci-balanced-brackets
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

int pair1(char start, char last)
{
    if(start=='{' && last == '}')
        return 1;
    else if (start=='(' && last == ')')
        return 1;
    else if (start=='[' && last == ']')
        return 1;
    else
        return 0;
}

bool is_balanced(string str) {
    stack<char> s;
    int n=str.size();
    int f=0;
    for(int i=0;i<n;i++)
        {

          if(str[i]=='['|| str[i]=='{'||str[i]=='(')
        s.push(str[i]);
       else if(str[i]==']'|| str[i]=='}' || str[i]==')')
            {
            if(s.empty() || !pair1(s.top(),str[i] ))
                {
                f=1;
                return 0;
            }
           else
               {
               s.pop();
           }
        }
    }
    if(s.empty())
        {
        return true;
    }
    else
        {
        return false;
    }

}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

