/*
#include <stdio.h>

int main(void)
{
	int number1, number2;   // 2개의 변수를 한 번에 선언
	number1 = 1;
	number2 = 2;
	int number3 = 3;     // 변수의 선언과 초기화 동시 진행
		
	return 0;
}
*/





//#include <stdio.h>
//
//int main(void)
//{
//	int number1 = 3;
//	printf("%d\n", number1);
//	int number2 = 5;
//	printf("%d\n", number2);
//
//
//	return 0;
//}



// %d 는 정수, %f 는 실수,  %c는 문자 이다.



//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	printf("%d\n", sizeof(num));    // 정수형은 4바이트로 계산
//
//	return 0;         // 결과값 : 4   -> 4바이트
//}

// 정수형은 4바이트, 실수형은 8바이트(double)



#include <stdio.h>

int main(void)
{
	char ch1 = 65, ch2 = 'B';
	short sh1 = 67;
	int in1 = 68;

	printf("%c\n", ch1);      // %c는 문자형 형식문자 이지만, 
	                          // 정수를 입력받았을때 아스키 코드로 인식하여 문자로 치환하여 출력한다.
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
}