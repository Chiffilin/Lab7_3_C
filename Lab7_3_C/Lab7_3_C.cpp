#include <iostream> 
#include <queue>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int n, el;
    queue<int> q1;
    queue<int> q2;
    queue<int> q3;
    cout << "Введите размер очереди:\n";
    cout << "n = ";
    cin >> n;
    cout << "Введите первую очередь:\n";
    for (int i = 0; i < n; i++) {
        cin >> el;
        q1.push(el);
    }
    cout << "Введите вторую очередь:\n";
    for (int i = 0; i < n; i++) {
        cin >> el;
        q2.push(el);
    }
    for (int i = 0; i < n; i++) {
        q3.push(q1.front());
        q1.pop();
        q3.push(q2.front());
        q2.pop();
    }
    cout << "Результат:\n";
    while (!q3.empty()) {
        cout << q3.front() << " ";
        q3.pop();
    }
    system("pause");
    return 0;
}