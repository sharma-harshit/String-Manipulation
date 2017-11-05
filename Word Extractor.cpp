#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T>>ws;
	while(T)
	{	
		cout<<"Enter any String\n";
		string s;
		getline(cin,s);
		vector<string> word;
		int start = 0 , length = 0 ;
		for( int i = 0 ; i < s.size() ; i++ )
		{
			if( s[i] == 32 )
			{
				word.push_back(s.substr(start,length));
				start = i + 1 ;
				length = 0 ;
			}
			else
			{
				length++;
			}
		}
		word.push_back(s.substr(start,length));
        for(int i = 0 ; i < word.size(); i++)
        {
            cout<<word[i]<<endl;
        }
        T--;
	}
}
