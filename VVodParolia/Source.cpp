#include <iostream>
#include <cstring>

using namespace std;

void reg(char *pass);
void proverka(char *pass);


int main()
{
	char pass[50];
	setlocale(LC_ALL, "rus");
	cout << "����� ����������" << endl;
	reg(pass);
	cout << "\n\n��������� ������������� ������" << endl;
	proverka(pass);
	cout << "�����, � �����" << endl;

	return 0;
}

void reg(char *pass) {
	cout << "������� ������: ";
	cin>>(pass);
	cout << "�� ������������������";
}
void proverka(char*pass)
{
	char  prove[50];
	do
	{
		cout << "\n������ ������: ";
		cin>>(prove);
		if (!strcmp(pass, prove))
		{
			cout << "�� ����� �� ������� " << endl;
		}
		else
			cout << "�������� �����" << endl;

	} while (strcmp(pass, prove));
	
}