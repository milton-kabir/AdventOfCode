//
//  main.cpp
//  Codeforces
//
//  Created by Milton Kabir on 25/12/23.
//

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstring>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define REV(i,b,a) for(int i=b;i>=a;i--)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mem(a,b) memset(a,b,sizeof(a))

void solve(){
    ifstream inputFile("/Users/miltonkabir/Desktop/CP/Codeforces/Codeforces/data.txt");

    if (!inputFile.is_open()) {
           std::cerr << "Error opening file!" << std::endl;
           return;
       }
    int ans=0;
    string ar[18]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "1","2","3","4","5","6","7","8","9"};
    std::string line;
        while (getline(inputFile, line)) {
            vector<pair<int, int>> v1, v2;
            for(int i=0;i<18;i++){
                size_t found = line.find(ar[i]);
                if (found!=std::string::npos){
                    v1.PB({found,(i%9)+1});
                }
            }
            sort(v1.begin(),v1.end());
            int x=v1[0].S;
            x*=10;
            
            for(int i=0;i<18;i++){
                size_t found = line.rfind(ar[i]);
                if (found!=std::string::npos){
                    v2.PB({found,(i%9)+1});
                }
            }
            sort(v2.begin(),v2.end());
            int y=v2[v2.size()-1].S;
            x+=y;
            ans+=x;
        }
    cout<<ans<<endl;
    return;
    
}
 
int main(){
        //fast;
        int tc=1;
//        cin>>tc;
        while(tc--){
            solve();
        }
    
    return 0;
}
