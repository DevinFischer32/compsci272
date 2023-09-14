#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> msg{
        "Hello",
        "world",
        "juiceW"};

    cout << msg.at(2) << endl;
    return 0;
}