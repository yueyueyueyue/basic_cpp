#include <iostream>
#include <iterator>
#include <string>
#include <set>
using namespace std;
/*
用set实现一个单词集合
*/
class ltstr
{
public:
	bool operator() (const string s1,const string s2)const
	{
		return s1<s2;
	}
};

int main()
{
	set<string, ltstr> words;

	words.insert("hello");words.insert("fegho");words.insert("hewego");
	words.insert("hvewvweb");words.insert("hbegaefrr");words.insert("hagragr");
	words.insert("hefefo");words.insert("hello");words.insert("helloo");

	if(words.count("hello"))cout<<"hello is in the words set"<<endl;
	if(!words.count("helllo"))cout<<"helllo is not in the words set"<<endl;

	set<string>::iterator set_iter=words.begin();
	for(;set_iter!=words.end();set_iter++)
			cout<<*set_iter<<endl;
	system("pause");

	multiset<string> mset;
	mset.insert("hello");	mset.insert("hello");	mset.insert("hello");
	mset.insert("hellb");	mset.insert("hello");	mset.insert("hella");
	mset.insert("hello");	mset.insert("hedlc");	mset.insert("hella");
 
	cout<<mset.count("hello")<<endl;
	for(set_iter=mset.begin();set_iter!=mset.end();set_iter++)
			cout<<*set_iter<<endl;
	system("pause");



	return 0;
}