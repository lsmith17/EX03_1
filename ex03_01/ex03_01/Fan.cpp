#include<iostream>
using namespace std;

class Fan {
private:
	int speed;
public:
	int GetSpeed(){
		return speed;
	}
	void SetSpeed(int new_speed){
		if (new_speed == 1 || 2 || 3)
			speed = new_speed;
	}
	double radius;
	bool on;

	Fan(){
		speed = 1;
		radius = 5;
		on = false;
	}
	Fan(int s, double r, bool o = false){
		s = speed;
		r = radius;
		o = on;
	}
		

};

int main(){
	Fan F1(3, 10, true);
	Fan F2(2, 5);

	cout << "First Fan Properties: " << endl; 
	cout << "Speed: " << F1.speed << "  Radius: " << F1.radius << "  Status: " << F1.on << endl << endl;
	cout << "Second Fan Properties: " << endl;
	cout << "Speed: " << F2.speed << "  Radius: " << F2.radius << "  Status: " << F2.on << endl;

	return 0;
}