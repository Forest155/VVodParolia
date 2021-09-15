#include <iostream>
#include <cstring>

using namespace std;

void reg(char *pass);
void proverka(char *pass);


int main()
{
	char pass[50];
	setlocale(LC_ALL, "rus");
	cout << "Логин корректный" << endl;
	reg(pass);
	cout << "\n\nТребуется подтверждение пароля" << endl;
	proverka(pass);
	cout << "Урааа, я зашёл" << endl;

	return 0;
}

void reg(char *pass) {
	cout << "Введите пароль: ";
	cin>>(pass);
	cout << "Вы зарегестрировались";
}
void proverka(char*pass)
{
	char  prove[50];
	do
	{
		cout << "\nНапиши пароль: ";
		cin>>(prove);
		if (!strcmp(pass, prove))
		{
			cout << "Вы зашли на аккаунт " << endl;
		}
		else
			cout << "Попробуй снова" << endl;

	} while (strcmp(pass, prove));
	
}