#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[100];
	int  palindrom = 0;
	int len = 0;
	cout << "Input text:";
	cin.getline(str, 100);
	len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if ((palindrom[i] != palindrom [len - i - 1])
		{
			cout << "Palindrom" << endl;

		}
		else
		{
			cout << "Ne palindrom" << endl;
		}
	}
}