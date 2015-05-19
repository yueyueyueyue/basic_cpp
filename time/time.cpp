#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	clock_t t1,t2;
	t1 = clock();
	cout<<t1<<endl;
	for(int i=0;i<=2000000000;i++){}
	t2 = clock();
	cout<<float(t2-t1)/CLOCKS_PER_SEC<<endl;
	system("pause");
	return 0;
}