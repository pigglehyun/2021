#include <cstdio>
using namespace std;

class Rectangle{
    public:
    int width;
    int height;
    int getArea();
};

int Rectangle::getArea(){
    return width * height ;
}

int main(){
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    printf("사각형의 면적은 %d " ,rect.getArea() );
}