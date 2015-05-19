#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int num;
int data[100];

void insertationsort()
{
	int sentry;
	int i, k;
	for(i=1;i!=num;i++)
	{
		sentry = data[i];

		k = i-1;
		while (k>=0&&data[k]>sentry)
		{
			data[k+1]=data[k];
			k--;
		}
		data[k+1] = sentry;
	}

}

int main()
{
	int i;
	ifstream file;

	file.open("..\\data.txt", ios::in);
	file>>num;
	for(i=0;i!=num;i++)
	{
		file>>data[i];
	}

	cout<<"before sort:"<<endl;
	for(i=0;i!=num;i++)
	{
		cout<<data[i]<<' ';
	}cout<<endl;
	insertationsort();
	cout<<"after sort:"<<endl;
	for(i=0;i!=num;i++)
	{
		cout<<data[i]<<' ';
	}

	file.close();

	cout<<endl;system("pause");
	return 0;
}