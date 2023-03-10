#include<iostream>
using namespace std;
int my_strlen(char* str)
{
	size_t i = 0;
	for(; str[i] != '\0'; i++)
	{
	}
	return i;
}
int main()
{
	char str[1000];
	cout << "Input text->";
	gets_s(str);
	str[' '] = '   ';
	for (size_t i = 0; i < my_strlen(str) + 1; i++)
	{
		cout << str[i] << '\t';
	}
}