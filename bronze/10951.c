
//A+B - 4//

/*
1️⃣ scanf의 “반환값” 의미

scanf는 입력에 성공한 개수를 반환해.

scanf("%d %d", &a, &b);
%d가 2개니까
정수 2개를 제대로 입력받으면 → 2 반환

예시:

10 20 입력 → 2 반환 (성공)
10만 입력 → 1 반환 (하나만 성공)
abc 입력 → 0 반환 (아예 실패)

2️⃣ 파일 끝(EOF)에 도달하면?

입력을 더 이상 읽을 수 없는 상황 (파일 끝)이 되면

👉 scanf는 -1 (EOF) 를 반환해
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	while (scanf("%d %d", &a, &b) != -1)
    {
		printf("%d \n", a + b);
	}

	return 0;

}

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int A, B;
    while(scanf("%d %d", &A, &B) != EOF)
    {
        printf("%d\n", A+B);
    }

    return 0;
}
*/