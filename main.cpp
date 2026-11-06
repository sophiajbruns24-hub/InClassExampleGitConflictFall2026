#include <iostream>
using namespace std;

int add(int a, int b);

void say(string s);

int main()
{
    cout << "Greetings.\n";
    cout << "Hello World!\n";
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

void say(string s)
{
    cout << s << endl;
}