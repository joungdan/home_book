/*
#include <stdio.h>

int main(void)
{
	int number1, number2;   // 2���� ������ �� ���� ����
	number1 = 1;
	number2 = 2;
	int number3 = 3;     // ������ ����� �ʱ�ȭ ���� ����
		
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



// %d �� ����, %f �� �Ǽ�,  %c�� ���� �̴�.



//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	printf("%d\n", sizeof(num));    // �������� 4����Ʈ�� ���
//
//	return 0;         // ����� : 4   -> 4����Ʈ
//}

// �������� 4����Ʈ, �Ǽ����� 8����Ʈ(double)



#include <stdio.h>

int main(void)
{
	char ch1 = 65, ch2 = 'B';
	short sh1 = 67;
	int in1 = 68;

	printf("%c\n", ch1);      // %c�� ������ ���Ĺ��� ������, 
	                          // ������ �Է¹޾����� �ƽ�Ű �ڵ�� �ν��Ͽ� ���ڷ� ġȯ�Ͽ� ����Ѵ�.
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
}