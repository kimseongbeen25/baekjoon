
//??!//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    char name[50];
    scanf("%s", name);
    printf("%s??!", name);

    return 0;

}

/*
배열 출력하면 \0도 출력되냐?

결론부터 말하면 👉 안 나와

이유는:

문자열은 내부적으로 이렇게 저장됨

h e l l o \0
여기서 \0은 문자열의 끝을 알려주는 표시(널 문자)야

printf("%s", id);는 동작이 이렇게 됨:

"문자를 출력하다가 \0 만나면 멈춰라"

그래서:

hello\0 → 출력: hello

👉 즉, \0은 출력되는 게 아니라 종료 신호라서 안 보이는 것

//만약 반복문이라면 \0은 아무것도 없는 문자(널 문자)라서 출력은 되지만 화면에 안 보임//

*/