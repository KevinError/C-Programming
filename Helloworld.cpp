
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char ** argv)
{
    int x = 3 * 1.5;
    string name;
    cout << "Hello world" << endl;
    cout << "what's your favorite food";
    cout << x << endl;
    cin >> x;
    cin >> name;
    cout << "this is your shit: " << rand() % 100 << endl;
    return 0;
}