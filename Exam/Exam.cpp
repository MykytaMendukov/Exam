#include <iostream>

using namespace std;

class Car {
private:
	string Brand;
	string Model;
	int Year;
	double Capacity;
public:


	Car() : Brand{ "None" }, Model{ "None" }, Year{ -1 }, Capacity{ -1 } {};
	Car(string brand, string model, int year, double capacity) : Brand{ brand }, Model{ model }, Year{ year }, Capacity{ capacity } {};
	Car(const Car& obj) { Brand = obj.Brand; Model = obj.Model; Year = obj.Year; Capacity = obj.Capacity; };

	void seeAll() {
		cout << "Car features: " << endl;
		cout << "Brand: " << Brand << endl;
		cout << "Year: " << Year << endl;
		cout << "Capacity: " << Capacity << endl;
	}

	friend ostream& operator<<(ostream& out, const Car& car);

};

ostream& operator<<(ostream& out, const Car& car) {

	out << "Car features: " << endl;
	out << "Brand: " << car.Brand << endl;
	out << "Year: " << car.Year << endl;
	out << "Capacity: " << car.Capacity << endl;

	return out;

}

int main()
{
	Car car1("Audi", "RS7", 2013, 4.0);

	car1.seeAll();
	cout << endl;

	//or that way:
	cout << car1 << endl;

	return 0;
}

