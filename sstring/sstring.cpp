#include <sstream>
#include <iostream>
using namespace std;
int main()
{
	int i;

	for(i=1;i<=5;i++)
	{
		ostringstream ost;
		ost<<i;
		cout<<ost.str()<<endl;
	}
	system("pause");
	return 0;
}