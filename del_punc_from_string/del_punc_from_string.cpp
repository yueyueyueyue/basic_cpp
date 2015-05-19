#include <string>
#include <cctype>
#include <algorithm>
#include <iostream>
using namespace std;
bool NotNeed(char c)
{
    return ispunct(c) || isspace(c);
}
int main()
{
    string s("my name is zhao,and i'm ten years old.");
    s.erase(remove_if(s.begin(), s.end(), NotNeed), s.end());
    cout << s;
	//remove_if:http://www.cplusplus.com/reference/algorithm/remove_if/
	//¹ûÈ»¾«Ãî

    system("pause");
    return 0;
}