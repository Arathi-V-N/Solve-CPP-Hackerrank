#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
string text_1, text_2, text_3, text_4;
cin >> text_1 >> text_2;
text_3 = text_1;
text_4 = text_2;

cout << text_1.length() <<" " << text_2.length() << endl;

string text_combo = text_1 + text_2;
cout << text_combo<< endl;


text_3[0] = text_2[0];
text_4[0] = text_1[0];

cout << text_3 << " " << text_4<< endl;

    return 0;
}
