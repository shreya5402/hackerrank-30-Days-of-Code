#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    double a;
    string t;
    cin>>j;
    cin>>a;
    cin.get();
    getline(cin, t);
    cout<<i+j<<endl;
    cout<<fixed<<setprecision(1)<<a+d<<endl;
    cout<<s<<t;
    return 0;
}
