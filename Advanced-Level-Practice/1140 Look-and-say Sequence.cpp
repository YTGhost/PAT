#include <iostream>
using namespace std;

int main()
{
    string d;
    int n;
    cin >> d >> n;
    for(int i = 0; i < n - 1; i++) {
        string next = "";
        for(int i = 0; i < d.length();) {
            int j = i + 1;
            while(j < d.length() && d[i] == d[j]) j++;
            next += d[i] + to_string(j - i);
            i = j;
        }
        d = next;
    }
    cout << d << endl;
    return 0;
}