#include<iostream>
#include<locale.h>
using namespace std;
class Stock {
private:
string Name_comp;
int Kol_akc, Cena_akc, Summ;
public:
void acquire(string Name_comp_, int Kol_akc_, int Cena_akc_) {
Name_comp = Name_comp_;
Kol_akc = Kol_akc_;
Cena_akc = Cena_akc_;
set_tot();
}
void set_tot() {
Summ = Kol_akc * Cena_akc;
}
void show() {
cout � "�������� �������� - " � Name_comp � endl � "���������� ����� - " � Kol_akc � endl � "���� ����� - " � Cena_akc � endl � "����� ����� - " � Summ � endl � endl;
}
void buy(int x) {
if (x > 0) {
Kol_akc = Kol_akc + x;
set_tot();
}
}
void sell(int y) {
if (y <= Kol_akc && y > 0) {
Kol_akc = Kol_akc - y;
set_tot();
}
}
void Update(int z) {
if (z >= 0) {
Cena_akc = z;
set_tot();
}
}
};
int main() {
setlocale(LC_ALL, "Russian");
cout � "�������� ��������, ���� �� ����� � ����������: " � endl�endl;
Stock Name;
Name.acquire("��������", 200, 10000);
Name.show();
Stock Name2;
Name2.acquire("��������", 100, 8000);
Name2.show();
Stock Name3;
Name3.acquire("�����", 50, 5000);
Name3.show();
cout� "-----------------------------------------------------------" � endl�endl;
cout � "������� ����� '���������' :" � endl�endl;
Name.buy(10);
Name.show();
cout � "������� ����� '��������' :" � endl�endl;
Name2.sell(50);
Name2.show();
cout � "��������� ���� ����� '���������' :" � endl�endl;
Name.Update(1500);
Name.show();
cout� "������� ����� '�����' :" � endl�endl;
Name3.buy(5);
Name3.show();
return 0;
} 