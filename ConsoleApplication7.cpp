// Чертоусова
// Фибоначчи

#include <iostream>
using namespace std;
int main()
{
    int N, i;
    cin >> N;
    int A0 = 0, A1 = 1;
    int A;
    for (i = 2; i <= N; i++) {
        A = A1 + A0;
        A0 = A1;
        A1 = A;
    }
    cout << A;
}

