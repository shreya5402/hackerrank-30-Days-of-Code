#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,l,r;
    string s,s1;
    vector<string> v;
    cin>>n;
       for (int i=0;i<n;i++) {
            cin>>s; 
            v.push_back(s); 
      }
        for (int i=0;i<n;i++) {
            s1=v[i];
           l= s1.length();
           
           for (int i=0;i<l;i++) {
                 r=i%2;
                 
                 if (r==0) { //even
                    cout<<s1[i];
                 }
                    
            }
            cout<<" ";
            for (int i=0;i<l;i++) {
                 r=i%2;
                 
                 if (r==1) { //odd
                    cout<<s1[i];
                 }
                    
            }
            cout<<endl;
            }
        
     
    return 0;
}
