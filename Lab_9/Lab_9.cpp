#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");

    cout << "Упражнение 1\n";
    cout << "\n";
    char str1[20] = "вода";
    char str2[20] = "огонь";
    char str3[20] = "";

    cout << "Изначально: \n";
    cout << str1 << ", " << str2 <<", "<< str3 << ".\n";
    cout << "\n";

    cout << "Копирование из строки 1 в строку 3: \n";
    strcpy_s(str3, str1);
    cout << str1 << ", " << str2 << ", " << str3 << ". \n ";
    cout << "\n";

    cout << "добавление 2 строки к 1 строке: \n";
    strcat_s(str1, str2);
    cout << str1 << ", " << str2 << ", " << str3 << ".\n";
    cout << "\n";

    cout << "Сравнение длины строки 2 и 3: \n";
    int result = strcmp(str2,str3);

    if (result < 0) {
        cout << str2 << " < " << str3;
    } else if (result == 0) {
        cout << str2 << " = " << str3;
    } else {
        cout << str2 << " > " << str3;
    }
    cout << "\n";
    cout << "\n";
    //функции string
    cout << "Добавление Фамилии в строку:\n";
    string name = "Аяна";
    name.append(" Семёнова");
    cout << name <<"\n";
    cout << "\n";

    cout << "Индекс буквы я: \n";
    int sem = name.find("я");
    cout << sem << "\n";
    cout << "\n"; 

    cout << "Замена фамилии: \n";
    name.replace(5,8,"Не Семёнова");
    cout << name;
    return 0;

}

 