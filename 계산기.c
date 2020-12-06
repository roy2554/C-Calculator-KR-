#include <stdio.h>

int main() {
    int a,b,c;
    char chos;
    printf("더하기,빼기,곱하기,나누기 중 선택하세요.\n");
    printf("더하기 = + , 빼기 = - , 곱하기 = * , 나누기 = / 로 입력 : ");
    scanf("%c",&chos);
    if (chos != '+' && chos != '-' && chos != '*' && chos != '/') {
        printf("잘못 입력하셨습니다. 디시 실행하십시오.");
    }
    else {
        printf("\n첫번째 수를 입력하십시오 : ");
        scanf("%d",&a);
        printf("\n두번째 수를 입력하십시오 : ");
        scanf("%d",&b);
        
        if (chos == '+') {
            c = a + b;
        }
        else if(chos == '-') {
            c = a - b;
        }
        else if(chos == '*') {
            c = a * b;
        }
        else if(chos == '/') {
            c = a / b;
        }
    }

    printf("\n결과값 : %d\n",c);

    return 0;
}
