#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>
using namespace std;
int main()
{
	vector<string> words;
	ifstream file_in;
	file_in.open("../data.txt", ios::in);
	while (!file_in.eof())
	{
		string s;
		file_in>>s;
		words.push_back(s);
	}
	file_in.close();
	
	words[0] = "hello";
	vector<string>::iterator vec_iter;
	for(vec_iter=words.begin();vec_iter!=words.end();vec_iter++)
			cout<<*vec_iter<<endl;
	system("pause");




	
	return 0;
}