#include <iostream>
#include<locale.h>
#include<string>
using namespace std;
class Abiturient {
private:
string Familiya, Name, Otchestvo, Adress;
int Ocenka1, Ocenka2, Ocenka3;
public:
Abiturient(string Familiya_, string Name_, string Otchestvo_, string Adress_, int Ocenka1_, int Ocenka2_, int Ocenka3_) {
Familiya = Familiya_;
Name = Name_;
Otchestvo = Otchestvo_;
Adress = Adress_;
Ocenka1 = Ocenka1_;
Ocenka2 = Ocenka2_;
Ocenka3 = Ocenka3_;
}
void show() {
cout � "������� - " � Familiya � endl � "��� - " � Name � endl � "�������� - " � Otchestvo � endl � "����� - " � Adress � endl � "������ 1 - " � Ocenka1 � endl � "������ 2 - " � Ocenka2 � endl � "������ 3 - " � Ocenka3 � endl � endl;
}
void Neud() {
if (Ocenka1 < 3 && Ocenka2 < 3 && Ocenka3 < 3)
{
show();
}
}
void Summ() {
if (Ocenka1 + Ocenka2 + Ocenka3 > 10) {
show();
}
}
void Max() {
if (Ocenka1 + Ocenka2 + Ocenka3 == 15) {
show();
}
}
void PoluMax() {
if (Ocenka1 + Ocenka2 + Ocenka3 >= 6 && Ocenka1 + Ocenka2 + Ocenka3 <= 15);
show();
}
~Abiturient() {

}
};
int main() {
setlocale(LC_ALL, "Russian");
Abiturient Massiv[5]{
Abiturient("�����","�������","����������","������ 224", 2, 2,2),
Abiturient("�������","���A���","������������","����������������� 34/2", 3, 4,4),
Abiturient("��������","�����","������������","��������� 55/6", 5, 5,5),
Abiturient("���������","����","����������","������� 15/3�", 3, 3,5),
Abiturient("������","�����","����������","������� 21", 5, 4,5)
};
cout � "������ ���� ������������: " � endl;
for (int i = 0; i < 5; i++) {
Massiv[i].show();
};
cout � "---------------------------------------------------" � endl�endl;
cout � "������ ������: " � endl;
for (int i = 0; i < 5; i++) {
Massiv[i].Neud();
};
cout � "---------------------------------------------------" � endl � endl;
cout � "������ ������������, ����� ������ � ������� �� ������ ��������: " � endl � endl;
for (int i = 0; i < 5; i++) {
Massiv[i].Max();
};
cout � "---------------------------------------------------" � endl � endl;
cout � "������ ������������� ����: " � endl;
for (int i = 0; i < 5; i++) {
Massiv[i].PoluMax();
};
return 0;
}