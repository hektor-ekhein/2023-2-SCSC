#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
};
bool comparePoints(const Point& a, const Point& b){
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    vector<Point> coords;
    Point p;
    for (int i=0;i<N;++i){
        cin >> p.x >> p.y;
        coords.push_back(p);
    }
    sort(coords.begin(), coords.end(), comparePoints);
    for (const Point& p: coords){
        cout << p.x << " " << p.y << "\n";
    }
    return 0;
}