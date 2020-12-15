#include <iostream>
#include <math.h>
#include <vector>
#include <set>
#include <string>
using namespace std;
struct Ratio //структура ратіо ( я не використовувала структуру, але в завданні написано її створити)
{
	int nom; //змінна ном 
	long den; //змінна ден
};
struct ChainFraq 
{ 
		int num; //змінна нам для лічильника номеру в масиві
		vector<int> a; //динамічний масив для коефіцієнтів
		double eps; //змінна для точності представлення
		double ChainFraqcreateN(double x,int num) //функція для переведення дробу в ланцюговий дріб
		{
			if(num!=0)
			{
			}
			else
			{
				a.push_back(floor (x)); //додаємо перший коефіцієнт в масив по формулі
				x=x-a[0]; //формула для першого коефіцієнту
				num=1; //збільшення номеру лічильника
				do //цикл для додавання інших коефіцієнтів в массив
				{
					a.push_back(floor(1.0/x)); //додаємо наступний коефіцієнт в массив
					x=1.0/x-a[num]; //формула для наступного коефіцієнта
					num++; //збільшення номеру лічильника
					cout<<a[num-1]<<"+1"<<endl;//виведення коефіцієнтів 
				}
				while(x==0.0); //кінець циклу
			}
			return num; 
		}	
		double ChainFraqcreate(double x,double eps)//функція для знаходження точності представлення ланцюгового дробу 
		{
			eps=fabs(x-(int)x); //формула для знаходження точності представлення дробу
			return eps;
		}

};
int main()
{
	double x,eps=0,o; //змінні для числа, точності представлення і вибору функції
	cout<<"viberit iak bydete voditi chislo natisnit 1 iaksho za dopomogoy chisla natusnit 2 iaksho za dopomogoy kofizientiv\n"; //виводимо питання для користувача як саме вводити число
	cin>>o; //введення вибору введення числа
	ChainFraq str; //визивання структури
	if(o==1) //якщо користувач вибрав вводити сбособом дробу
	{
		cout<<"vedit chislo\n";//питання для введеня числа
		cin>>x;//введення числа
		int num=0;
		ChainFraq str;
		str.ChainFraqcreateN(x,num);//визиваємо функію для обрахунку коефіцієнтів
		str.ChainFraqcreate(x,eps); //визиваємо функцію для обрахунку точності представлення
	}
	else if(o==2)//якщо користувач вибрав представлення дробу за допомогою коефіцієнтів
	{
		cout<<"vedit koeficienti\n";//виведення запиту коефіцієнтів 
		vector<int> a;//массив для коефіцієнтів
		int y=0,k;//змінні для номерів коефіцієнтів і для коефіцієнтів
		do
		{
			int y=0;
			cout<<y<<"="; //виведення номера коефіцієнта
			cin>>k; //введення коефіцієнта
			a.push_back(k); //додавання коефіцієнта до массиву
			y++;//лічильник номеру коефіцієнта
		}
		while(k==0); //виконуємо поки коефіцієнт не буде = 0 
		do
		{
			cout<<a[y]<<"+1"<<endl; //виведеня раціонального числа за допомогою коефіцієнтів
			y++;
		}
		while(a[y]==0); //виконуємо поки коефіцієнт не буде = 0
		str.ChainFraqcreate(x,eps);
	}
	else 
	{
		cout<<"pomilka"; //якщо користувач вводить невірне число не 1 і не 2 то помилка
	}
	string strChainFraqcreateN = to_string(str.ChainFraqcreateN(x,num)); //переведення даних в стринг в мене не працює бо стара версія компілятора 
	string strChainFraqcreate = to_string(str.ChainFraqcreate(x,eps));
}
