#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str("my name is zhao,and i'm ten years old.");

	string filter("\",.;:?!\'");

	string::size_type pos = 0;
	while ((pos = str.find_first_of(filter, pos)) != string::npos)
	{
		str.erase(pos, 1);
	}
	//Ч��û��del_punc_from_string��
	//ѧϰ����filter��
	cout << str << endl;
	return 0;
}