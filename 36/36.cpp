#include "MyStack.h"
#include <string>
using namespace std;

bool isBrackets(string line) {

    myStack::Stack<char> letter;
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == '(' || line[i] == '[' || line[i] == '{') {
            letter.push_back(line[i]);
        }
        else if (line[i] == ')' || line[i] == ']' || line[i] == '}') {
            if (letter.isEmpty())
            {
                return false;
            }
            else
            {
                if (letter.top()=='(' && line[i] != ')')
                {
                    return false;
                }
                else if (letter.top() == '[' && line[i] != ']')
                {
                    return false;
                }
                else if (letter.top() == '{' && line[i] != '}')
                {
                    return false;
                }
                else
                {
                    letter.pop_back();
                }
            }

            
        }
    }
    if (letter.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    /*myStack::Stack<string>p34;
    p34.push_back("Students");
    p34.push_back("of");
    p34.push_back("the");
    p34.push_back("grup");
    p34.push_back("p34");
    p34.showStack();

    cout << endl;

    p34.pop_back();
    p34.showStack();

    cout << "--------------------------------------\n";
    while (!p34.isEmpty()) {
        if (p34.top().size() == 2) 
            cout << p34.top() << " ";

        p34.pop_back();
    }
    cout << endl;
    p34.showStack();*/

    /*string user;
    cout << "Enter word: ";
    cin >> user;
    using namespace myStack;
    Stack<char> letter;
    for (int i = 0; i < user.size(); i++)
    {
        letter.push_back(user[i]);
    }
    bool isPolly = true;
    for (int i = 0; i < user.size(); i++)
    {
        if (letter.isEmpty()) {
            isPolly = false;
            break;
        }
        else
        {
            if (user[i]!=letter.top())
            {
                isPolly = false; 
                break;
            }
            letter.pop_back();
        }
    }
    if (isPolly)
    {
        cout << "Polly: true\n";
    }
    else {
        cout << "Polly: false\n";
    }*/

    cout << "[()]{}: " << isBrackets("[()]{}")<<endl;
    cout << "][: " << isBrackets("][") << endl;
    cout << "[({)]}: " << isBrackets("[({)]}")<<endl;

}