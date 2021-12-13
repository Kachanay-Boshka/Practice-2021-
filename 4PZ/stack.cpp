#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void DIF(int num, vector <vector<int>>& ver) 
{
    auto s = ver.size();
    vector<int> ver2(s, 0);
    stack <int> path;

    while (num != -1)
    {
        ver2 [num] = 1;
        for (int j = 0; j < s; j++)
            if (ver[num][j] == 1 && ver2[j] == false)
            {
                path.push(j);
            }
        if (path.size() > 0)
        {
            num = path.top();
            path.pop();
        }        
        else num = -1;
    }

    for (vector <int>::iterator it = ver2.begin(); it != ver2.end(); it++)
        cout << *it ;
        cout << '\n';
}

int main(){
	int num;
	cout << "Enter the number of vertices: ";
	cin >> num;
	vector <vector<int>> ver(num, vector<int>(num, 0));
	for (int i=0; i < num; i++)
	{
        cout << "Enter a link for the vertex " << i + 1 << " :";
		do
		{
			int link = 0;
			cin >> link;
			if (link != 0) 
				ver[i][link - 1] = 1;
		} while (cin.peek() != '\n');
	}
    cout << '\n';
    for (int i = 0; i < num; i++)
        DIF(i, ver);
    return 0;
}
