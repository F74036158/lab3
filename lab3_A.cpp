#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
void sort(vector<int> &v)
	{
	int j,insert,move;
	for(j=1;j<9;j++)
                {
                insert=v.at(j);
                move=j;
                while((move>0)&&(v.at(move-1)>insert))
                        {
                        v.at(move)=v.at(move-1);
                        move--;
                        }
                v.at(move)=insert;
                }
	}
int main()
	{
	int a,b,i,j;
	b=0;
	i=0;
	vector<int> v(9);
	ifstream in("file.in",ios::in);
	while(in>>a)
		{
		v.at(i)=a;
		i++;
		}
	sort(v);
	for(j=4;j<9;j++)
		b=b+v.at(j);
	cout<<b<<endl;
	return 0;
	}
