/*
      https://www.hackerrank.com/challenges/ctci-connected-cell-in-a-grid
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



int dfs(vector< vector<int> > &v, int r, int c)
    {
    int count = 0;
    
    count++;
    v[r][c] = 0;
    for(int i = r-1 ; i <= r+1; i++)
        {
        for(int j = c-1; j <= c+1; j++)
            {
            if(i >=0 && i < v.size() && j >= 0 && j < v[0].size() && v[i][j] )
                {
                count += dfs(v,i,j);
            }
        }
    }
    return count;
}

int get_biggest_region(vector< vector<int> > &grid) {
    int size_of_cell = 0;
    for(int i= 0 ; i < grid.size() ; i++)
        {
        for(int j = 0 ; j < grid[0].size(); j++)
            {
            if(grid[i][j])
                {
            int size = dfs(grid,i,j);
                size_of_cell = max(size_of_cell , size);
            }
        }
    }
    return size_of_cell;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector< vector<int> > grid(n,vector<int>(m));
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout << get_biggest_region(grid) << endl;
    return 0;
}

