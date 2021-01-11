
#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;


int cesar(char cstr2[255], int len3/*, int k*/)
{
    for (int i = 0; i < len3; i++) {
        if (cstr2[i] == 121)  cstr2[i] = 97;
        else if (cstr2[i] == 122)  cstr2[i] = 98;
        else cstr2[i] = cstr2[i] + 2;
        cout << cstr2[i];
    }
    cout << endl;
    return 0;
}

int palindrom(char* cstr1, bool* choise) {
    //	bool flag;
    //len1--;
    cout << "Введите строку c точкой в конце: ";
    cin.getline(cstr1, 255, '.');
    int len1;
    len1 = strlen(cstr1);
    cout << "\nДлина: " << len1 << endl;
    for (int i = 1; i < len1; i++) { // Преобразование всех букв в строке к прописным
        if ((cstr1[i] > 64) && (cstr1[i] < 91))
            cstr1[i] += 32;
    }

    cout << endl;
    int j;
    for (int i = 1; i < len1; i++) { // Цикл удаление пробелов
        if (cstr1[i] == ' ') {
            for (j = i; j < len1; j++) {
                cstr1[j] = cstr1[j + 1];
            }
            len1--;
        }
    }

    for (int i = 1; i <= len1 / 2; i++) // Проверка на палиндром
    {
        if (cstr1[i] == cstr1[len1 - i])
            *choise = true;
        else {
            *choise = false;
            break;
        }
    }
    cout << endl;
    if (*choise == true)
        cout << "Является палиндромом";
    else
        cout << "Не является палиндромом";
    cout << endl;
    return 0;
}

int find_an()
{
    int k = 0, j = 1, m = 0;
    static char cstr3[255];
    char cstr3_1[255];
    char cstr3_2[100];
    cout << "Введите строку с точкой на конце: ";
    cin.getline(cstr3_1, 255, '.');
    cout << "Введите подстроку с точкой на конце: ";
    cin.getline(cstr3_2, 100, '.');
    for (int i = 1; i < strlen(cstr3_1); i++)
    {
        if (cstr3_1[i] == cstr3_2[j])
        {
            for (j = 1; j < strlen(cstr3_2); j++)
            {
                if (cstr3_2[j] == cstr3_1[i])
                {
                    cstr3[k] = cstr3_2[j];
                    //cstr3[k] = j;
                    k++;
                    i++;
                    m = k + 1;

                }
                else
                {
                    static char cstr3[255] = {};
                    k = 0;
                    break;
                }
            }
            j = 1;
            m++;
            cstr3[m] = ' ';
            m++;
        }
    }
    printf("Нашлось: %s\n", cstr3);
    memset(cstr3, 0, 255);
    memset(cstr3_1, 0, 255);
    memset(cstr3_2, 0, 100);
    return 0;
}

int find_kov()
{
    static char cstr4[511];
    char cstr4_1[511];
    int k = 0;
    cout << "Введите текст с точкой на конце, в котором надо найти слова в ковычках:";
    cin.getline(cstr4_1, 511, '.');
    for (int i = 1; i < strlen(cstr4_1); i++)
    {
        if (cstr4_1[i] == '"')
        {
            i++;
            for (;;)
            {
                if (cstr4_1[i] == '"')
                {
                    //k++;
                    cstr4[k] = ' ';
                    k++;
                    break;
                }
                else
                {
                    cstr4[k] = cstr4_1[i];
                    k++;
                    i++;
                }
            }
        }
    }
    //static char cstr4[511] = {};
    printf("Символы в ковычках: %s\n", cstr4);
    k = 0;
    memset(cstr4, 0, 511);
    memset(cstr4_1, 0, 511);
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int value;
    char cstr2[255];
    bool choise = true;
    char cstr1[255];
    //char* buff[255] ;
    while (true)
    {
    cout << "Введите что Вы хотите сделать:\n";
    cout << "1. Проверка на палиндром.\n";
    cout << "2. Аналог find.\n";
    cout << "3. Шифрование сдвигом.\n";
    cout << "4. Вывести что в кавычках.\n";
    cout << "5. Выход.\n";
    
        cin >> value;
        switch (value)
        {
        case 1:
        {
            palindrom(cstr1, &choise);
            break;
        }
        case 2:
        {
            find_an();
            break;
        }
        case 3:
        {
            /*int k;
            cout << "Введите еденицу сдвига: ";
            cin >> k;*/
            cout << "Введите строку с точкой на конце: ";
            cin.getline(cstr2, 255, '.');
            int len3 = strlen(cstr2);
            cesar(cstr2, len3/*, k*/);
            break;
        }
        case 4:
        {
            find_kov();
            break;
        }
        case 5:
        {
            cout << "До свидания!";
            return 0;
        }
        default:
        {
            cout << "Такого нет, повторите попытку: ";
            break;
        }
        }
    }
}

