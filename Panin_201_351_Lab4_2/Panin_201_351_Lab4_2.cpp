
#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::ifstream;
using std::fstream;
using std::ofstream;

string file_expansion (string file_path_full)
{
    string expansion;
    expansion = file_path_full.substr(file_path_full.rfind('.'));
    //expansion_cout = &expansion;
    return expansion;
}

string file_name (string file_path_full)
{
    string file_name;
    file_name = file_path_full.substr(file_path_full.rfind('\\'));
    file_name = file_name.erase(file_name.rfind('.'));
    file_name = file_name.erase(0, 1);
    //cout << "Имя: " << file_name << endl;
    return file_name;
}

string file_path(string file_path_full)
{
    string path;
    path = file_path_full.substr(file_path_full.find('\\'));
    path = path.erase(path.rfind('\\'));
    path.push_back('\\');
    //cout << "Путь: " << file_path << endl;
    return path;
}

string file_disk(string file_path_full)
{
    string disk;
    disk = file_path_full[0];
    disk.push_back(':');
    //cout << "Диск: " << file_disk << endl;
    return disk;
}

string file_rename(string file_path_full)
{
    string file_rename;
    string expansion;
    string path;
    string new_name;
    expansion = file_path_full.substr(file_path_full.find('.'));
    path = file_path_full.substr(0);
    path = path.erase(path.rfind('\\'));
    path.push_back('\\');
    cout << "Введите новое имя: " << path;
    cin >> new_name;
    cout << endl;
    file_rename = path + new_name + expansion;
    cout << "Переименованный файл: " << file_rename << endl;
    return file_rename;
}

bool file_copy(const string file_path_full)
{
    fstream file;
    fstream file_copy;
    file.open(file_path_full, fstream::in | fstream::out | fstream::app);
    if (file.is_open()) cout << "Файл открыт." << endl;
    else cout << "Файл не открыт." << endl;
    //Ввод
    string s;
    cout << "Введите, что вы хотите внести в файл: ";
    //cin >> s;
    file << "fgggfh 454 y5t,;k;";
    //file << s;
    file.close();
    file.open(file_path_full, fstream::in | fstream::out | fstream::app);
    //Разбор пути к файлу и его имени с ращирением из предыдущих ф-ий
    string expansion;
    string path;
    string disk;
    string new_name;

    expansion = file_expansion(file_path_full);
    disk = file_disk(file_path_full);
    path = file_path(file_path_full);
    new_name = file_name(file_path_full);
    //Создание нового файла с препиской _copy
    file_copy.open(disk + path + new_name + "_copy" + expansion, fstream::in | fstream::out | fstream::app);
    //s.clear();
    file_copy << file.rdbuf();
    //std::copy(std::istream_iterator<char>(file), std::istream_iterator<char>(), std::ostream_iterator<char>(file_copy));
    file.close();
    file_copy.close();
    cout << "Копирование завершено успешно.";
    cout << endl;
    return true;
    cout << endl;
}


int main()
{
    setlocale(LC_ALL, "Rus");
    int value;
    string path_full;
    cout << "Введите расположение файла с расширением:\n";
    getline(cin, path_full);
    string* file_path_full = &path_full;
    //cout << file_path_full << endl;
    while (true)
    {
        cout << "Выберите пункт меню:\n";
        cout << "1. Получить расширение.\n";
        cout << "2. Получить название.\n";
        cout << "3. Получить расположение.\n";
        cout << "4. Получить название диска.\n";
        cout << "5. Переименовать файл.\n";
        cout << "6. Создать копию файла припысыванием _copy.\n";
        cout << "7. Выход.\n";

        cin >> value;
        switch (value)
        {
        case 1:
        {
            cout << file_expansion(path_full) << endl;
            break;
        }
        case 2:
        {
            cout << file_name(path_full) << endl;
            break;
        }
        case 3:
        {
            cout << file_path(path_full) << endl;
            break;
        }
        case 4:
        {
            cout << file_disk(path_full) << endl;
            break;
        }
        case 5:
        {
            cout << file_rename(path_full) << endl;
            break;
        }
        case 6:
        {
            file_copy(path_full);
            break;
        }
        case 7:
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