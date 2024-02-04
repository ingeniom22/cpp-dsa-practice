#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> fizzbuzz(int n)
{
    vector<string> result;
    for (int i = 1; i < n + 1; i++)
    {

        if (i % 15 == 0)
        {
            result.push_back("FizzBuzz");
        }

        else if (i % 3 == 0)
        {
            result.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            result.push_back("Buzz");
        }
        else
        {
            result.push_back(to_string(i));
        }
    }

    return result;
}

int main(int argc, char const *argv[])
{
    for (string s : fizzbuzz(17))
    {
        cout << s << endl;
    }
    return 0;
}
