#include<iostream>
using namespace std;

class Fan {
private:
	int speed;
	double radius;
	bool on;
public:
	
	Fan(){
		speed = 1;
		radius = 5;
		on = false;
	}
	int getSpeed(){
		return speed;
	}
	void setSpeed(int new_speed){
		//if (new_speed == 1 || 2 || 3){
			speed = new_speed;
		//}
		//else{
			//cout << "Give a 1, 2 or 3" << endl;
		//}
		
	}
	double getRadius(){
		return radius;
	}
	void setRadius(double new_radius){
		radius = new_radius;
	}
	bool status(){
		return on;
	}
	void setOn(bool OnOrOff){
		on = OnOrOff;
	}	

};

int main(){

	Fan F1;
	F1.setSpeed(3);
	F1.setRadius(10);
	F1.setOn(true);
	
	cout << "First Fan Properties: " << endl;
	cout << "Speed: " << F1.getSpeed() << "  Radius: " << F1.getRadius() << "  Status: " << F1.status() << endl << endl;
	
	Fan F2;
	F2.setSpeed(2);
	F2.setRadius(5);
	F2.setOn(false);
	
	cout << "Second Fan Properties: " << endl;
	cout << "Speed: " << F2.getSpeed() << "  Radius: " << F2.getRadius() << "  Status: " << F2.status() << endl;

	return 0;
}