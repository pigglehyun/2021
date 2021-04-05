#include <cstdio>

class Nat{
	int dummy;
	int a;
	int trash;
public:
	Nat(int n ) : a(n) ,dummy(0) , trash(-1){}
	Nat gcd(Nat m){
		if (m.a ==0) return *this;
		Nat n(m.a); 
		return n.gcd(a % m.a);
	}
	int ival() {return a;}
	
};

int main(){
	int a, b;
	fscanf(stdin, "%d%d", &a, &b);
	Nat m(a), n(b);
	fprintf(stdout, "gcd(%d %d) = %d\n",m.ival(),n.ival(),m.gcd(n).ival());
}
