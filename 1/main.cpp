#include <iostream>
#include <string>
using namespace std;
int main() {
    string people[10];
    for (int i = 0; i < 10; i++)
        cin >> people[i];
    int n;
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        cout << people[n - 1];
    }
    return 0;
}
