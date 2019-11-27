#pragma once
//����� ���� ���̺귯��
#include <stdio.h>

// ������� include
#include "constants.h"

typedef struct player_professor {// �÷��̾ �÷����� ����. �̸��� �Ƹ� �ֿ���? ����
	//���� �޸� ���� ���ֱ�
	int assignment; //���� �� Ƚ��
	int chat; //���
	int move; //�ൿ��
	int progress; //����
	int test; //���� �� Ƚ��
	int type; //0�̸� ����

	char* name;
} player_p;

typedef struct student {// �ֱ������� �Ǿ� ���� �л���
	int attend_count; //�⼮ Ƚ��
	int attend_rate; //��Ʒ�
	int happiness; //�ູ��
	int move; //�ൿ��
	int progress; //���� ����
	int skill; //�Ƿ�, ������ Ȯ��
	int tired; //�Ƿε�
	int type; //1�̸� �л�, �÷��̾ �ƴϸ� 2

	char* name;
} student;

typedef struct professor {// �л� ����� �� ���� ������
	int chat_rate; //�� ��� �� Ȯ��
	int progress_rate; //���� ���� Ȯ��
	int type; //�÷��̾ �ƴϸ� 3

	char* name;

} prof;

typedef struct Day {
	int attend_rate; //���� �⼮��
	int move; //�ൿ��
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
	int std_no; //�л� ����� ��� �ڽ��� �⼮ ��ȣ(0 ~ STD_AMOUNT - 1)
	int type; //���� ��� 0 : ���� ���, 1 : �л� ���
	int week; //���� �� ��������, week < ACADEMIC_WEEK

	player_p* choi; //���� ����� ����� ����
	student* me; //�л� ����� ����� �÷��̾�
	prof* pp; //�л� ����� ����� ����

	day* academic_calender; //�л� ����, �� 8������ ����

	student* student_list; //�⼮��, �л��� 12�� �� ����. �����ټ����� ������ ����(����?)


} status;