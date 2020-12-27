#include<stdio.h>
int main() {
 int n;
 int space;
 scanf("%d",&n);
 space = n;//가로 한줄에 공백 공간을 표현 하기 위해서
 for (int i = 0; i<n; i++){//총 만들 세로 줄
    
    for(int z = 0; z<space-1; z++) {//가로 줄에 띄어쓰기를 반복
      printf(" ");
    }

    for(int j = 0;j<=i ; j++){//띄어쓰기를 한 후 *삽입
      printf("*");
    }
    
    printf("\n");
    space--;//처음에 n으로 변수를 두고 하면 위 처음 for문에 n에도 영향을 주므로 내가 생각한대로 되지 않는다.
 }
}