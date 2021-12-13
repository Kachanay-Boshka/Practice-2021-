#include <vector>
#include <iterator>
#include <iostream>

using namespace std;

vector <int> creation(vector <int>& vec) {
	int max = 2;
	int min = -2;
	int s = vec.size();
	for (int i = 0; i < s; i++) {
		vec.at(i) = rand() % (min-max) - max;
		cout << vec.at(i) << '\t';
	}
	return vec;
}

double  avarage(vector <int>& vec) {
	int s = vec.size();
	double a = 0;
	for (int i = 0; i < s; i++) {
		a = a + vec.at(i);
	}
	a = a / s;
	cout << a;
	return a;
}

void general(vector <int>& vec1, vector <int>& vec2)
{
	auto o = 0;
	int s1 = vec1.size();
	int s2 = vec2.size();
	for ( int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s2; ++j)
		{
			if (vec1[i] == vec2[j]) {
				cout << vec1[i];
				break;
			}	
		}
	}
}

int main(){
	int v1, v2;
	cin >> v1 >> v2;
	vector <int> vec1(v1);
	vector <int> vec2(v2);
	cout << "The first vector: ";
	creation(vec1);
	cout << '\n';
	cout << "The second vector : ";
	creation(vec2);
	cout << '\n' << '\n';
	cout << "arithmetic mean of the elements of the first vector: ";
	avarage(vec1);
	cout << '\n';
	cout << "arithmetic mean of the elements of the second vector: ";
	avarage(vec2);
	cout << '\n' << '\n';
	cout << "General elements: ";
	general(vec1, vec2);
	return 0;
}
