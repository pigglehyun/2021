#include <cstdio>
using namespace std;

void main(){
	int sum= 0 ;
	int h, num ,n , i = 0;
	int a[] = {0};
	scanf("%d", &num);
	while(scanf("%d" , &n) == 1){
		a[i] = n;
		i++;
	}
	
	

	for(int p = 0 ; p < i ; p++){
		printf("a[%d]:%d ",p, a[p]);
	}
	
	i = i-1;
	
	printf("num : %d\n",num);
	printf("i : %d\n",i);	
	if(i ==0 ) {
		a[i+1] = a[i];
		i++;	
	}
	
	a[i+1] = a[i];
	while( h < num){
		
	
		for(int k = i ; k > 0 ; k--){
			printf("k:%d i:%d\t h:%d\t",k,i,h);
			a[k] = ( a[k] + a[k-1] ) % 100;
			printf("a[%d] : %d\t",k,a[k]);
		}
		printf("\n");
		i++;
		h++;
		if (h == num) break;
	}
	
	//for(int p = 0 ; p < i ; p++){
	//	printf("%d ", a[p]);
	//}
	

}