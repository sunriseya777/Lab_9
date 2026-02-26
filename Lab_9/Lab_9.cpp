#include <iostream>
#include <iomanip>
#include <vector>
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
    cout << str1 << ", " << str2 << ", " << str3 << ".\n";
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
    int result = strcmp(str2, str3);

    if (result < 0) {
        cout << str2 << " < " << str3;
    }
    else if (result == 0) {
        cout << str2 << " = " << str3;
    }
    else {
        cout << str2 << " > " << str3;
    }
    cout << "\n";
    cout << "\n";
    //функции string
    cout << "Добавление Фамилии в строку:\n";
    string name = "Аяна";
    name.append(" Семёнова");
    cout << name << "\n";
    cout << "\n";

    cout << "Индекс буквы я: \n";
    int sem = name.find("я");
    cout << sem << "\n";
    cout << "\n";

    cout << "Замена фамилии: \n";
    name.replace(5, 8, "Не Семёнова");
    cout << name << endl;
    cout << "\n";

    cout << "Упражнение 4\n";
    cout << "\n";

    const int max_words = 20;
    const int word_len = 10;
    char words[max_words][word_len + 1];
    int n;
    cout << "Введите количество слов (не более 20): ";
    cin >> n;
    cout << endl;
    if (n > max_words){
        cout << "Ошибка, количество слов не более 20!\n";
    }else{
        cout << "Введите слова: \n";
        for (int i = 0; i < n; i++){
            cin >> setw(word_len + 1) >> words[i];
        }
        cout << "Вывод слов с четными номерами: \n";
        for (int i = 1; i < n; i += 2){

            cout << i << "\t" << words[i] << endl;
        }
    }
    cout << "2 вариант: \n ";
     
    cout << "Введите количество слов (не более 20): ";
    cin >> n;
    if (n > max_words){
        cout << "Ошибка, количество слов не более 20!\n";
    }else{
        vector < string > word(n);
        cout << "Введите слова: \n";
        for (int i = 0; i < n; i++){
            cin >> word[i];
            if (word[i].length() > word_len){
                cout << "Ошибка, длина слова не должна превышать 10!";
            }
        }
        cout << "Вывод слов с четными номерами: \n";
        for (int i = 1; i < n; i += 2){

            cout << i << "\t" << word[i] << endl;
        }

    }
    return 0;
}
 