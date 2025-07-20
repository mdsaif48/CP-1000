#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        long long count_0 = 0, count_1 = 0,c=0;
        cin >> s;
        for(long long i=0; i<s.length(); i++){
            if(s[i]=='0') count_0++;
            else count_1++;
        }
        for(long long i=0; i<s.length();i++){
            if(s[i]=='0' && count_1>0){
                count_1--;
                c++;
                

            }
            else if(s[i]=='1' && count_0>0){
                count_0--;
                c++;
                
            }
            else{
                break;
            }
        }
        cout << abs(s.length()-c) << endl;

    }

    return 0;
}
