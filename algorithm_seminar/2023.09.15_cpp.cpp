/* First C++ Code! 

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!" << std::endl;
    return 0;
}

*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << a;
}
*/

/*
// 산술 연산자와 대입 연산자
#include <iostream>
using namespace std;
int main()
{
int a = 20, b = 10;
cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b << endl;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    cin >> a >> b;
    cout << a + b << endl;
}
*/

// #include <iostream>
// using namespace std;
// int main(){
//     int N;
//     cin >> N;
//     for (int i=1;i<=N;++i){
//         for (int j=1;j<N;++j){
//             if(j<=N-i){
//                 cout << " ";
//             }
//             else{
//                 cout << "*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;
    int list[N]={0};
    for (int i=0;i<M;++i){
        int a,b,c;
        cin >> a >> b>> c;
        for (int j=a;j<=b;++j){
            list[j-1]=c;
        }
    }
    for (int i=0;i<N;++i){
        cout << list[i]<< " ";
    }
    cout << endl;
}