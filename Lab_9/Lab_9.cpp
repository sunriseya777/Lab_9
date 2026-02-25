#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    char str1[20] = "вода";
    char str2[20] = "огонь";
    char str3[20] = "";
    cout << str1 << ", " << str2 <<", "<< str3 << ".\n";
    // функции char
    strcpy_s(str3, str1);
    cout << str1 << ", " << str2 << ", " << str3 << ". \n ";
    strcat_s(str1, str2);
    cout << str1 << ", " << str2 << ", " << str3 << ".\n";


}

 