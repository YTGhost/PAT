#include <iostream>
using namespace std;

int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    sum = a + b;
    string str = to_string(sum);
    int length = str.length();
    int lengthNum = length;
    for(int k = 1, i = 0; i < length; i++)
    {
        cout << str[i];
        if(str[i] == '-'){
            lengthNum--;
            continue;
        }
        if((lengthNum-k)%3 == 0 && i != length-1) cout << ',';
        k++;
    }
    return 0;
}