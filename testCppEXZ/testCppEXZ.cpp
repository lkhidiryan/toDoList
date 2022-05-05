#include <iostream>

#include <string>

using namespace std;
 
//написать приложение "Планер"

struct Glider //структура "планер"
{
	string name; //название дела

	string description; //описание дела

	int priority; //приоритетность дела будет вводится целочисленным значением от 1 до 10. Чем выше значение, тем выше приоритет
	
	string date; //дата выполнения

	string time; //время выполнения
};

void InputGlider(Glider& exercise) //функция вводa задания
{
	setlocale(LC_ALL, "rus");

	cout << "Введите название Вашего задания: "; cin >> exercise.name; cout << endl;
	
	cout << "Введите описание Вашего задания: "; cin >> exercise.description; cout << endl;

	cout << "Введите приоритетность Вашего задания (от 1 до 10, где 10 имеет высший приоритет): ";
	cin >> exercise.priority; cout << endl;

	cout << "Введите дату проведения Вашего задания (формат дата/месяц/год): "; cin >> exercise.date; cout << endl;

	cout << "Введите время проведения Вашего задания: (формат чч/мм/сс) "; cin >> exercise.time; cout << endl;
}

void EditGlider(Glider* arr, int size, int index) //функция добавления/реактирования задания
{
	setlocale(LC_ALL, "rus");

	if (index > size)
	{
		cout << "Задание не обнаружено, повторите поиск! " << endl;
	}

	cout << "Введите название Вашего задания: "; cin >> arr[index].name; cout << endl;
	
	cout << "Введите описание Вашего задания: "; cin >> arr[index].description; cout << endl;
	
	cout << "Введите приоритетность Вашего задания (от 1 до 10, где 10 имеет высший приоритет): "; 
	cin >> arr[index].priority; cout << endl;
	
	cout << "Введите дату проведения Вашего задания (формат дата/ммесяц/год): ";  cin >> arr[index].date; cout << endl;
	
	cout << "Введите время проведения Вашего задания: "; cin >> arr[index].time; cout << endl;
}

int SearchGlider(Glider* arr, int size, int priority, string name = "", string description = "", string date = "", string time = "")
//функция поиска дела
{
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < size; i++)
	{
		if (arr[i].name == name) 
		{
			return i;
		}

		if (arr[i].description == description)
		{
			return i;
		}

		if (arr[i].priority == priority)
		{
			return i;
		}

		if (arr[i].date == date)
		{
			return i;
		}

		if (arr[i].time == time)
		{
			return i;
		}
		
		else
		{
			cout << "Такого задания нет!";
		}
	}
}

void OutputGlider(Glider* date) //функция вывода списка дел по дате
{
	setlocale(LC_ALL, "rus");

	string date = "";
	int a;

	cout << "Для отображение всех дел на день нажмите 1: "; cin >> a;

	if (a == 1)
	{
		cout << date;
	}

	else
	{
		cout << "Повторите попытку ввода!\n";

		cout << "Для отображение всех дел на день нажмите 1: "; cin >> a;
	}
}

void SortingGlider(Glider* arr, int size, int priority, string name = "", string description = "", string date = "", string time = "")
//функция сортировки
{
	setlocale(LC_ALL, "rus");

	int temp; 

	for (int i = 0; i < size; i++) //сортировка по приоритености
	{
		temp = arr[i].priority;

		arr[i].priority = priority;

		priority = temp;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Приоритетное задание: " << temp << endl;
	}
}

//DeleteGlider ??

int main()
{
	setlocale(LC_ALL, "rus");

	string name = " ";

	string descript = " ";

	string date = " ";

	string time = " ";

	int prioriti;

	int menu = 0;

	string array[] = {};

	char exercise=0;

	int size = 0, index = 0;
	

	while(menu<6)
	{
	   cout << "Добро пожаловать в планер! Выберите пункт меню: " << endl;

	   cout << "Для ввода дела/задания на день нажмите 1 " << endl;

	   cout << "Для добавление/редактирования дела/задания на день нажмите 2 " << endl;

	   cout << "Для нахождения Вашего задания в списке нажмите 3 " << endl;

	   cout << "Для сортировки Ваших заданий нажмите 4 " << endl;

	   cout << "Для удаления задания из списка нажмите 5 " << endl;

	   cout << "Введите номер пункта: "; cin >> menu;

	   switch (menu)
	   {
	   case 1:

		   InputGlider();

		   break;

	   case 2:

		   EditGlider();

		   break;

	   case 3:

		   SearchGlider();

		   break;

	   case 4:

		   SortingGlider();

		   break;
	  
	   }

	
	
	
	
	}

}




