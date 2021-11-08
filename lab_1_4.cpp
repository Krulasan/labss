#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

class Bus {
	string carDriverName;
	string model;
	int busNumber;
	int routNumber;
	int	startExpYear;
	int	mileage;

    public:
        Bus() {
            carDriverName = "Unkown";
            model = "Unkown";
            busNumber = 0;
            routNumber = 0;
            startExpYear = 0;
            mileage = 0;
        }
        Bus( string	a, string b, int c, int d, int e, int f) {
            carDriverName = a;
            model = b;
            busNumber = c;
            routNumber = d;
            startExpYear = e;
            mileage = f;
        }
        ~Bus() {}

        void SetDriverName(string s) {
            carDriverName = s;
        }
        void SetModel(string s) {
            model = s;
        }
        void SetBusNumber(int a) {
            busNumber = a;
        }
        void SetRoutNumber(int a) {
            routNumber = a;
        }
        void SetStartExpYear(int a) {
            startExpYear = a;

        }
        void SetMileage(int a) {
            mileage = a;
        }

        string GetDriverName(){
            return carDriverName;
        }
        string GetModel() {
            return model;
        }
        int GetBusNumber() {
            return busNumber;
        }
        int GetRoutNumber() {
            return routNumber;
        }
        int GetStartExpYear() {
            return startExpYear;
        }
        int GetMileage() {
            return mileage;
        }

        void Show(){
            cout << "ФИО водителя: " << setw(1) << carDriverName << endl;
            cout << "Модель автобуса: " << setw(1) << model << endl;
            cout << "Номер автобуса: " << setw(1) << busNumber << endl;
            cout << "Номер пути: " << setw(1) << routNumber << endl;
            cout << "Года использования автобуса: " << setw(1) << startExpYear << endl;
            cout << "Пробег автобуса: " << setw(1) << mileage << " км" << endl;
            
        }
};

int main() {
	vector<Bus> busArray;

	Bus first("Беляев П.А.", "Mercedes", 10, 145, 5, 5000);
	Bus	second("Зуев  А.И.", "BMW", 13, 140, 7, 11000);
	Bus	third("Орлов  А.Н.", "Lexus", 44, 120, 13, 7);
	Bus	fourth("Ефремов В.А.", "Tesla", 1, 1, 1, 1000);

	busArray.push_back(first);
	busArray.push_back(second);
	busArray.push_back(third);
	busArray.push_back(fourth);

	for (int i = 0; i < busArray.size(); i++) {
		if (busArray[i].GetRoutNumber() == 145) {
			busArray[i].Show();
			cout << endl;
		}
		else if (busArray[i].GetStartExpYear() > 10) {
			busArray[i].Show();
			cout << endl;
		}
		else if (busArray[i].GetMileage() > 10000) {
			busArray[i].Show();
			cout << endl;
		}
	}
	return 0;
}