
#include <iostream>
#include <set>

using namespace std;

struct Answer
{
	int id;
	string scnd_name;
	string answer;
};

static bool operator<(const Answer a1, const Answer a2)
{
	return a1.scnd_name < a2.scnd_name;
}
int main()
{
	std::set<Answer> test;
	int n;
	cout << "Count students: "; // ввести количество учеников
	cin >> n;
	cout << endl;
	int i = 1;
	while (test.size() != n)
	{
		string answer;
		string scnd_name;
		int id = i+1;
		cout << "Second name: "; // ввод фамилии
		cin >> scnd_name;
		cout << endl;
		cout << "Answer: "; // ввод ответа
		cin >> answer;
		cout << endl;
		Answer ans = { id, scnd_name, answer };
		test.insert(ans);
		i++;
	}
	for (auto i : test) // вывод ответов всех
	{
		cout << "id: " << i.id << " answer: " << " second name : "<< i.scnd_name << " answer: " << i.answer << endl;
	}
}
