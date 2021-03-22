#include <cstdio>

int countdown(){
    static int count = 5;
    return count > 0 ? count --: 0;
}

int main(){
    while (int cnt = countdown())
    printf("%d\n ",cnt);
    puts("Blast!");
}