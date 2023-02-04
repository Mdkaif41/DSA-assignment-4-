#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int aim= 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if((a[i] + a[j]) % k == 0) {
                aim++;
            }
        }
    }
    cout<<aim<<"\n";
    return 0;
}
