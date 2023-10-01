#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(10001, 0);
    for(int i=0; i<N; ++i){
        int in;
        cin >> in;
        ++v[in];
    }
    for(int i=0; i<10001; ++i){
        for(int j=0; j<v[i]; ++j){
            cout << i << "\n";
        }
    }
    return 0;
}
*/
/*

bool compareByLength(const string &a, const string &b){
    if(a.length() == b.length()){
        return a < b;
    }
    return a.length() < b.length();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<string> v(N);
    for(int i=0; i<N; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), compareByLength);
    for(int i=0; i<N; ++i){
        if(i>0 && v[i] == v[i-1]){
            continue;
        }
        cout << v[i] << "\n";
    }
    return 0;
}

*/
/*
int main(){
    string s;
    cin >> s;
    int len = s.length();
    vector<int> v(len, 0);
    for(int i=0; i<len; ++i){
        v[i] = s[i] - '0';
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<len; ++i){
        cout << v[i];
    }
    return 0;
}
*/
/*
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i=0;i<N;++i){
        cout << v[i] << "\n";
    }
    return 0;
}
*/
/*
bool compareByAge(const pair<pair<int, string>,int> &a, const pair<pair<int, string>,int> &b){
    if (a.first.first == b.first.first){
        return a.second<b.second;
    }
    return a.first.first < b.first.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<pair<pair<int, string>,int>> v(N);
    for(int i=0; i<N; ++i){
        cin >> v[i].first.first >> v[i].first.second;
        v[i].second=i;
    }
    sort(v.begin(), v.end(), compareByAge);
    for(int i=0; i<N; ++i){
        cout << v[i].first.first << " " << v[i].first.second << "\n";
    }
    return 0;
}
*/
/*
bool compareByCoords(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<pair<int, int>> v(N);
    for(int i=0; i<N; ++i){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), compareByCoords);
    for(int i=0; i<N; ++i){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}
*/
/*
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    if (N==0){
        cout << 0 << "\n";
        return 0;
    }
    int val=round(N*0.15);
    vector<int> v(N);
    for(int i=0; i<N; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int> subvect={v.begin()+val,v.end()-val};
    float avg=0;
    for(int i=0; i<subvect.size(); ++i){
        avg+=subvect[i];
    }
    cout << round(avg/subvect.size()) << "\n";
    return 0;
}
*/
/*
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    unordered_set<string> s;
    for(int i=0; i<N; ++i){
        string name, status;
        cin >> name >> status;
        if(status == "enter"){
            s.insert(name);
        }
        else{
            s.erase(name);
        }
    }
    vector<string> v(s.begin(), s.end());
    sort(v.begin(), v.end(), greater<string>());
    for(int i=0; i<v.size(); ++i){
        cout << v[i] << "\n";
    }
    return 0;
}
*/
/*
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A,B;
    cin >> A >> B;
    unordered_set<int> as;
    for (int i=0;i<A;++i){
        int in;
        cin >> in;
        as.insert(in);
    }
    unordered_set<int> bs;
    for (int i=0;i<B;++i){
        int in;
        cin >> in;
        bs.insert(in);
    }
    vector<int> v;
    for (auto it=as.begin();it!=as.end();++it){
        if(bs.find(*it) == bs.end()){
            v.push_back(*it);
        }
    }
    for (auto it=bs.begin();it!=bs.end();++it){
        if(as.find(*it) == as.end()){
            v.push_back(*it);
        }
    }
    cout << v.size() << "\n";
    return 0;
}
*/