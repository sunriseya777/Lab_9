#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    char str1[] = "вода";
    char str2[] = "огонь";
    char str3[20] = "";
    cout << str1 << ", " << str2 <<", "<< str3 << "." << endl;
    // функции char
    strcpy_s(str3, str1);
    cout << str1 << ", " << str2 << ", " << str3 << ".";

}

 