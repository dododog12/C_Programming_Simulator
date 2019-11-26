#pragma once
//����� ���� ���̺귯��
#include <stdio.h>

// ������� include
#include "constants.h"

typedef struct player_professor {// �÷��̾ �÷����� ����. �̸��� �Ƹ� �ֿ���? ����
	//���� �޸� ���� ���ֱ�
	int type; //0�̸� ����
	int progress; //����
	int chat; //���
	int move; //�ൿ��
	int test; //���� �� Ƚ��
	int assignment; //���� �� Ƚ��
	char* name;
} player_p;

typedef struct student {// �ֱ������� �Ǿ� ���� �л���
	int type; //1�̸� �л�, �÷��̾ �ƴϸ� 2
	int attend_rate; //��Ʒ�
	int skill; //�Ƿ�, ������ Ȯ��
	int move; //�ൿ��
	char* name;
	int attend_count; //�⼮ Ƚ��
	int progress; //���� ����
	int happiness; //�ູ��
	int tired; //�Ƿε�
} student;

typedef struct professor {// �л� ����� �� ���� ������
	int type; //�÷��̾ �ƴϸ� 3
	char* name;
	int progress_rate; //���� ���� Ȯ��
	int chat_rate; //�� ��� �� Ȯ��

} prof;

typedef struct Day {
	int move; //�ൿ��
	int attend_rate; //���� �⼮��
	int type;
	/* 
	// 0 : �Ϲ� ����
	// 1 : OT
	// 2 : ����
	// 3 : ����
	// 4 : 
	...
	*/

} day;

typedef struct now_status {//���� �б��� ��Ȳ
	//���� �޸� ���� ���ֱ�
	student student_list[STD_AMOUNT]; //�⼮��, �л��� 12�� �� ����. �����ټ����� ������ ����(����?)
	day academic_calender[ACADEMIC_WEEK]; //�л� ����, �� 8������ ����
	int week; //���� �� ��������, week < ACADEMIC_WEEK
} status;