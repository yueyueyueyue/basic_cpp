#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int num;
int data[100];

void bubblesort()
{
	int temp;
	int j,t;
	for(t=1;t!=num;t++)//should do num-1 tiems
	{
		for(j=0;j<num-t;j++)
		{
			if(data[j]>data[j+1]){temp=data[j];data[j]=data[j+1];data[j+1]=temp;}
		}
	}

}

int main()
{
	int i;
	ifstream file;

	file.open("../data.txt", ios::in);
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
	bubblesort();
	cout<<"after sort:"<<endl;
	for(i=0;i!=num;i++)
	{
		cout<<data[i]<<' ';
	}

	file.close();

	cout<<endl;system("pause");
	return 0;
}