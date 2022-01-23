#include <iostream>
using namespace std;
int main() {
    float n[15];
    for (int i = 0; i < 15; i++)
        cin >> n[i];
    for (int i = 0; i < 14; i++)//Пузырёк
        for (int j = 0; j < 14 - i; j++)
            if (n[j] > n[j + 1])
            {
                float a = n[j];
                n[j] = n[j + 1];
                n[j + 1] = a;
            }
    for (int i = 0; i < 15; i++)
        cout << n[i] << " ";
    return 0;
}
