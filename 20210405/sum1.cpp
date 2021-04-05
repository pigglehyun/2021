#include <cstdio>
#include <iostream>
#include <iomanip> 	//alter the behavior of the stream
using namespace std;

int main(){
	int n = 0 , sum = 0;

//<cstdio>	
//	while ( scanf("%d", &n) == 1){
//		sum += n;
//		printf("%10d%10d\n",n,sum);
//	}

	while(cin >>n){
		sum += n;
		
//		cout.width(10); 
//		cout<< n;
		cout << setw(10) << n;
			
//		cout.width(10);
//		cout << sum;
//		cout << "\n";
//		cout << sum << endl;
		cout << setw(10) << sum << endl;

		
	}

}
