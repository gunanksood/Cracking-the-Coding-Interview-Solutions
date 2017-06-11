/*
      https://www.hackerrank.com/challenges/ctci-comparator-sorting
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
}; 

vector<Player> comparator(vector<Player> p) {
    string s;
    int h;

    for(int i=0;i<p.size();i++)
        {
        for(int j=i+1;j<p.size();j++)
            {
            if(p[i].score<p[j].score)
                {
                s=p[i].name; 
                h=p[i].score;
                p[i].name=p[j].name;
                p[i].score=p[j].score;
                p[j].name=s;
                p[j].score=h;
            }
            else if(p[i].score==p[j].score)
                {
                if(p[j].name<p[i].name)
                    {
                s=p[i].name;   
                h=p[i].score;
                p[i].name=p[j].name;
                p[i].score=p[j].score;
                p[j].name=s;
                p[j].score=h;
                }
            }
        }
    }
    return p;
}

int main() {
    
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    
    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}

