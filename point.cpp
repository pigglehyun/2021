#include <cstdio>

struct Point{
    int x , y ;

    void move(int n){
        (n%2 == 0 ? x : y) += 1;
    }
    void print(){
        printf("%d %d\n",  x, y);
    }
};

int main(){
    Point p = {0,0};
    int n ;
    while (scanf("%d",&n)==1)
        p.move(n);
    p.print();
}