//IMPLEMENT A PROGRAM TO COUNT TOTAL NUMBERS OF DUPLICATE CHARACTERS IN A STRING.
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int dup = 0;
    bool counted[256] = {false}; // Assuming ASCII characters

    for (int i = 0; i < str.size(); i++) {
        if(counted[str[i]]==0) {
            int count = 0;
            for (int j = 0; j < str.size(); j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }
            if (count > 1) {
                dup++;
                counted[str[i]] = true; // Mark this character as counted
            }
        }
    }

    cout << "Number of duplicate characters: " << dup << endl;

    return 0;
}
