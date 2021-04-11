#include <iostream>
using namespace std;

class Point{
private:
	int _x , _y ;
public:
	Point() {_x = 0 , _y = 0;}						//default constructor
	Point (int x , int y ) { _x = x , _y = y;} 		//constructor
	int getX(),getY();
	void setX(int x) ,setY(int y);
	void print();

};

inline int Point::getX(){return _x;}
inline int Point::getY(){return _y;}
void Point::setX(int x) { _x = x;}
void Point::setY(int y){_y = y;}
void Point::print(){cout<<"("<<_x<<","<<_y<<")";}

ostream& operator <<(ostream &out, Point p){
	p.print();
	return out;
}

int main(){
	Point p;
	p.setX(3),p.setY(5);
//	p.print();
	cout << p << endl;
}
