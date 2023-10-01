#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*

// 수 정렬하기 3
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
// 단어 정렬
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

//소트인사이드

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

// 수 정렬하기 2

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

//나이순 정렬

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

//좌표 정렬하기 2

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

//solved.ac

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

// Easy Work

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
// 대칭 차집합
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

/*
// best 대칭 차집합
set <int> A, B;
while (N--){
    int x; cin>> x; A.insert(x);
}
while (M--){
    int x; cin>> x; B.insert(x);
}
set<int> difference;
set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(difference, difference.begin()));
cout << A.size() + B.size() - 2 * difference.size() << '\n';
*/

/*
// 나는야 포켓몬 마스터 이다솜
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    unordered_map<string, int> m;
    unordered_map<int, string> rm;
    for(int i=0; i<N; ++i){
        string in;
        cin >> in;
        m[in]=i+1;
        rm[i+1]=in;
    }
    for(int i=0; i<M; ++i){
        string in;
        cin >> in;
        if(isdigit(in[0])){
            cout << rm[stoi(in)] << "\n";
        }
        else{
            cout << m[in] << "\n";
        }
    }
    return 0;
}
*/

/*

// 차집합

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    set <int> A, B;
    while (N--){
        int x; cin>> x; A.insert(x);
    }
    while (M--){
        int x; cin>> x; B.insert(x);
    }
    set<int> difference;
    set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(difference, difference.begin()));
    cout << difference.size() << '\n';
    if (difference.size()==0) return 0;
    for (auto it=difference.begin();it!=difference.end();++it){
        cout << *it << " ";
    }
    return 0;
}

*/
/*
// 최소 힙
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq_min;
    while(N--){
        int in;
        cin >> in;
        if(in == 0){
            if(pq_min.empty()){
                cout << 0 << "\n";
            }
            else{
                cout << pq_min.top() << "\n";
                pq_min.pop();
            }
        }
        else{
            pq_min.push(in);
        }
    }
    return 0;
}
*/


/*
// 집합의 표현

class UnionFind{
    private:
        vector<int> p, rank, setSize;
    public:
        UnionFind(int N){
            p.assign(N,0);
            for (int i=0;i<N;++i) p[i]=i;
            rank.assign(N,0);
            setSize.assign(N,1);
        }
        int findSet(int i){
            return (p[i]==i) ? i : (p[i]=findSet(p[i]));
        }
        bool isSameSet(int i, int j){
            return findSet(i) == findSet(j);
        }
        int sizeOfSet(int i){
            return setSize[findSet(i)];
        }
        void unionSet(int i,int j){
            if(isSameSet(i,j)) return;
            int x=findSet(i), y=findSet(j);
            if(rank[x]>rank[y]) swap(x,y);
            p[x]=y;
            if (rank[x]==rank[y]) ++rank[y];
            setSize[y]+=setSize[x];
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m; cin >> n >> m;
    UnionFind uf(n+1);
    while(m--){
        int op, a, b;
        cin >> op >> a >> b;
        if(op==0){
            uf.unionSet(a,b);
        }
        else{
            if(uf.isSameSet(a,b)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}
*/