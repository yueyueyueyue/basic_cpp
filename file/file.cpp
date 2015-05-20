#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream file;
	string s;
	file.open("../data.txt");
	while(!file.eof())
	{
		file>>s;
		//if(!file.eof())cout<<s<<'|';//这是不对的，不能这样，要如下那样。如果这样最后一个词汇会掉掉。
		cout<<s<<'|';
	}
	cout<<endl;
	system("pause");
	file.close();

	return 0;
}