#include <iostream>
#include <fstream>
using namespace std;
int num;
int data[100];

int quicksort(int low,int high)
{
	int sentry;
	int i=low,j=high;
	if(low<high)
	{
		sentry=data[low];
		while(low<high)
		{
			while(low<high&&data[high]>=sentry)high--;
			data[low]=data[high];
			while(low<high&&data[low]<=sentry)low++;
			data[high]=data[low];
		}
		data[low]=sentry;
		if(low-i<j-low)
		{
			if(i<low-1)quicksort(i,low-1);
		    if(j>low+1)quicksort(low+1,j);
		}
		else
		{
			if(j>low+1)quicksort(low+1,j);
			if(i<low-1)quicksort(i,low-1);
		}//优先排列短的,减少开栈数
	}
	return 0;
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
	quicksort(0, num-1);
	cout<<"after sort:"<<endl;
	for(i=0;i!=num;i++)
	{
		cout<<data[i]<<' ';
	}

	file.close();

	cout<<endl;system("pause");
	return 0;
}