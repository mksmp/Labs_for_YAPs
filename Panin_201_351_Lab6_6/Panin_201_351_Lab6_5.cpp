

#include <iostream>
#include <list>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::list;
using std::endl;

struct spisok
{
    string no_of_group;
    string scnd_name;
};

int main()
{
    list <spisok> List;
    string no_of_group;
    string scnd_name;
    cout << "Input students:\n";
    while (scnd_name != "." and no_of_group != ".")
    {
        cout << "Number of group: ";
        cin >> no_of_group;
        cout << "Second name: ";
        cin >> scnd_name;
        spisok lst = { no_of_group, scnd_name };
        List.push_back(lst);
    }
    List.pop_back();
    string n;
    cout << "Number of group for search: ";
    cin >> n;
    cout << "\nSecond names of students:\n";
    for (auto i : List)
    {
        if (i.no_of_group == n)
            cout << i.scnd_name << endl;
    }
}

