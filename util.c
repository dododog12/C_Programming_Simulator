#include "util.h"

//input, get
/*
//string�� �Է¹޴� �Լ�. ���ڿ��� ���̸� return �Ѵ�.
//�Է¹޴� ���� ������ ���, -1�� return �Ѵ�.
//constants.h�� STRING_LENGTH - 1��ŭ �Է¹��� �� �ִ�
*/
int get_string() {

}

/*
//����� ������ �Է¹޴� �Լ�
//int�� ������ŭ �Է¹��� �� �ִ�
//�Է¿� �����ϸ� -1�� �����Ѵ�
//char�� 1���� scanf�Ͽ� ���� ������ �ذ��� �� �ִ�.
*/
int get_unsigned_int() {
	char temp = '0'; //�ӽ÷� �Է¹��� ���� ����
	int ret = 0; //���ϵ� ����
	int i = 0; //�������� ���� ��
	for (i = 0; i < 11; i++) {
		scanf("%c", &temp);
		if ('0' <= temp && temp <= '9') {
			ret *= 10;
			ret += temp - '0';
		}
		if (temp == '\n') {

		}
	}
}

// sorting
//�ѱ��� �����ϴ� �Լ�, �л� ���� �� �⼮�ο� ���� �� �̿��� ����
int hangeul_sort() {

}