#include <iostream>
#include <queue>

using namespace std;

void traverseQueue(queue <int> testQueue)
{

    while (!testQueue.empty())
    {
        cout << '\t' << testQueue.front();
        testQueue.pop();
    }
    cout << '\n';
}

int main() {

    queue<int> testQueue;
    testQueue.push(5);
    testQueue.push(15);
    testQueue.push(51);

    traverseQueue(testQueue);
    return 0;
}
