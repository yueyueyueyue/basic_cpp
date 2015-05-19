#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s("Apple");
	for(int t=0;t!=s.size();t++)
		if(s[t]<='Z'&&s[t]>='A')s[t]+=32;
	cout<<s<<endl;
	system("pause");
	return 0;
}