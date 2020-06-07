#include <iostream>
using namespace std;

struct student
{
	int number;
	const char* name;
	bool math;
	bool english;
	bool physic;
};

int main()
{
	const int n = 25;
	int i;
	student a[n] = {
	{ 1, "Щербакова Виолетта Анатольевна"		,true, true, true},
	{ 2, "Бирюкова Алеся Мартыновна    "		,true, true, true},
	{ 3, "Савина Станислава Максимовна"		,true, true, true},
	{ 4, "Лобанов Дмитрий Игнатьевич"		,false, true, false},
	{ 5, "Кулаков Валерий Данилович"		,false, true, true},
	{ 6, "Денисов Павел Лукьянович"		,true, false, true},
	{ 7, "Симонова Майя Игнатьевна"		,true, true, true},
	{ 8, "Доронина Алёна Игоревна	"		,true, true, true},
	{ 9, "Дмитриева Анжелика Васильевна"		,true, true, true},
	{10, "Максимова Жанна Даниловна"		,true, true, true},
	{11, "Наумов Даниил Яковович	"		,true, true, false},
	{12, "Фомин Артем Геннадиевич	"		,true, false, false},
	{13, "Тихонов Кирилл Артемович"		,true, true, true},
	{14, "Иванков Станислав Евгеньевич"		,true, true, true},
	{15, "Авдеев Артем Тарасович	"		,false, true, true},
	{16, "Егорова Марьяна Пётровна"		,false, true, false},
	{17, "Лазарева Диана Лукьяновна"		,true, true, true},
	{18, "Кудряшова Алла Георгиевна"		,true, true, true},
	{19, "Владимирова Марьяна Дмитриевна"		,true, true, true},
	{20, "Мамонтов Захар Матвеевич"		,false, true, true},
	{21, "Крюков Давид Максимович	"		,false, false, true},
	{22, "Михеев Арсений Андреевич"		,true, false, false},
	{23, "Романов Николай Вадимович"		,true, true, true},
	{24, "Евсеев Ибрагил Эдуардович"		,false, true, true},
	{25, "Иванов Андрей Святославович"		,true, true, true}
	};
	setlocale(LC_ALL, "ru");
	cout << "№" << "\tИмя                         \tМат.\tАнгл.\tФиз.\n";
	for (i = 0; i < n; i++)
		cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].english << "\t" << a[i].physic << "\n";
	cout << "-------------------------------------" << endl;
	cout << "Ученики которые не смогли выполнить больше чем один предмет:\n";
	cout << "№" << "\tИмя                         \tМат.\tАнгл.\tФиз.\n";
	for (i = 0; i < n; i++)
		if (!((int)a[i].math + (int)a[i].english + (int)a[i].physic > 1))
			cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
	cout << "-------------------------------------" << endl;
	return 0;
}

