#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

        int x = 1, y = 1, z;
    if (n>3){
        for (int i=0; i <n; i++) {
            z = x + y;
            cout << x << endl;
            if (x <= n) {
                x = y;
                y = z;
            }
        }
                }else{
                    for(int i=-1;i<n;i++){
                        z = x + y;
                        cout << x << endl;
                        if (x <= n) {
                            x = y;
                            y = z;}
                    }
                }
    return 0;
}
