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
		//if(!file.eof())cout<<s<<'|';//���ǲ��Եģ�����������Ҫ��������������������һ���ʻ�������
		cout<<s<<'|';
	}
	cout<<endl;
	system("pause");
	file.close();

	return 0;
}