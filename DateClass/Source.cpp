#include <iostream>;
using namespace std;

class Date{
private:
	int month;
	int day;
	int year;
public:
	Date(int, int, int);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth();
	int getDay();
	int getYear();
	void displayDate();
};

Date::Date(int m, int d, int y){

	if (m >= 1 && m <= 12){
		month = m;
	}
	else {
		month = 1;
	}

	day = d;
	year = y;

}

void Date::setMonth(int m){
	if (m >= 1 && m <= 12){
		month = m;
	}
	else {
		month = 1;
	}
}

void Date::setDay(int d){
	day = d;
}

void Date::setYear(int y){
	year = y;
}

int Date::getMonth(){
	return month;
}

int Date::getDay(){
	return day;
}

int Date::getYear(){
	return year;
}

void Date::displayDate(){
	cout << month << "/" << day << "/" << year;
}

int main(){

	int tempMonth;
	int tempDay;
	int tempYear;

	cout << "What is the month? (1-12): ";
	cin >> tempMonth;

	cout << "What is the day? (1-31): ";
	cin >> tempDay;

	cout << "What is the year? (YYYY): ";
	cin >> tempYear;

	Date d(tempMonth, tempDay, tempYear);

	cout << endl;

	cout << "The date is: ";
	d.displayDate();
	cout << endl;

	cout << endl;

	return 0;
}