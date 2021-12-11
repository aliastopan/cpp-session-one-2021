#include <iostream>
#include <string>
using namespace std;

void Solution(bool parameter)
{
    string msg = "solution";
    string s = parameter == true ? "TRUE" : "FALSE";
    cout << msg << ": " << s << endl;
}

int main()
{
    bool x = true;
    bool y = false;
    bool z = true;
    bool w = !y;

    Solution(w);

    return 0;
}

