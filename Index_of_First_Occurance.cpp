#include <iostream>
#include <string>
using namespace std;

int main()
{
	string heystack = "bustedsad";
	string needle = "sad";
	int flag = 0;
	for(int i=0; i<heystack.length(); i++)
	{
		if(needle[0] == heystack[i])
		{
			flag = 1;
		}

		if(flag==1)
		{
			int k = i;
			for(int j=0; j<needle.size(); j++)
			{
				if(needle[j]==heystack[k])
				{
					if(j==2)
					{
						cout<<"string found starting location is "<<i+1<<endl;
						flag = 2;
						break;
					}
					else
					{
						k=k+1;
					}
				}
			}
			if(flag==2)
			{
				break;
			}
		}
	}
	return 0;
}