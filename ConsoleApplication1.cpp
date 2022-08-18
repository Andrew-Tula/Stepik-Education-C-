#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int l, i, j, p1 = 0, p1max = 0, c = 0, cmax = 0;
    string s;
    getline(cin, s);
    l = s.size();
    if (l == 1) {
        cout << s;
    }
    else {
        for (i = 0; i < l; i++) {
            if (s[i] == " ") {
                c = 0;
                p1 = i;
                for (j = i; j < l; j++) {
                    if (s[j] != " ") {
                        c++;
                    }
                    else {
                        break;
                    }
                }
                if (c > cmax) {
                    cmax = c;
                    p1max = p1;
                }

            }
        }
        return 0;
    }