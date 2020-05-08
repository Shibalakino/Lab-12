#include <iostream>
#include <fstream>
 using namespace std;
int main() {
    char str[300];
    cout << "Write something \n";
    cin >> str;
    ofstream test;
    test.open("Example.txt");
    test << str;
    int i = 0;
    while (str[i]) i++;
    printf("%i\n", i);
    return 0;
}