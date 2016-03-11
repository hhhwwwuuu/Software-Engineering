#include <iostream>
#include <cstring>
using namespace std;

void phone(char txt)
{
	if (txt == '2')
	{
		/* code */
		cout<<"11111111"<<endl;
	}
	else if (txt == '1')
	{
		/* code */
		cout<<"wzq0515@gmail.com"<<endl;
	}
}

int main()
{
	char txt;
	while(cin>>txt)
	{
		phone(txt);
	}
	return 0;
}
