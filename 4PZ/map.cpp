#include <string>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;

int main(){
    string str;
    map<string, int> ma;
    cout << "Sting: ";
    getline(cin, str);
    for (int x = 0; x < str.size(); x){
        auto x2 = str.find(' ', x);
        const auto word = str.substr(x, x2-x);
            ++ma[word];
     if (x2 == string::npos)
         break;
     x = x2 + 1;
    }
    for (const auto& it : ma)
            std::cout << it.first << " - repetitions - " << it.second << std::endl;
    return 0;
}
