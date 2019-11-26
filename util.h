#pragma once

//�⺻ ���̺귯�� �� �����, ����ü include
#include "declare.h"

/*
//util.h �� ���� ����� ��� �ִ� �����
//�ַ� �ڵ带 �Ƴ��ų� �˰����� ������ ��
*/


//max, min
/*
//max�� min�� �����Ѵ�
*/
int MAX(int a, int b);
int MIN(int a, int b);


//input, get
/*
//���ڿ��� �Է¹޴� �Լ�. constants.h�� STRING_LENGTH - 1��ŭ ���� �� �ִ�.
//�Է¿� �����ϸ� ���ڿ��� ���̸�, �����ϸ� -1�� �����Ѵ�.
//string�� ���ڿ��� ����� ���� �ּ�, length�� �Է¹��� �ִ� �����̴�('\0' ����).
//length�� ����� ��Ȳ������ STRING_LENGTH�� �Է��ϴ� ������ �����ϳ�,
//STRING_LENGTH ������ ������ �Է��� �ִ� ��쵵 ó���Ѵ�. ��, STRING_LENGTH�� length�� �ִ� ���̴�
*/
int get_string(char* string, int length);

/*
//����� ������ 0�� �Է¹޴� �Լ�. int�� ���� �����ǹ��� ��ŭ �Է¹��� �� �ִ�
//�Է¿� �����ϸ� -1�� �����Ѵ�.
*/
int get_unsigned_int();




// sorting
int hangeul_sort(); //�ѱ��� �����ϴ� �Լ�, �л� ���� �� �⼮�ο� ���� �� �̿��� ����