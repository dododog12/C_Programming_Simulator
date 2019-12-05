#include "constants.h"
#include "init.h"
#include "declare.h"

void allocname(status *game, char * name) {
	int i, len = 0;
	
	//name �����Ҵ� ���ְ� unit.c�� �־��ֱ�
	//���� �̸��� �� ���� �ʰ��ϴ� ���� ���� �߻�.
	for (i = 0; i < STD_AMOUNT; i++) {
		game->student_list[i]->name = (char *)malloc(sizeof(char) * strlen(name));
		if (game->student_list[i]->name == NULL) {
			printf("Error: �̺��� ���� �л� ���� ������ ��� ��ġ �ʽ��ϴ�.\n");
			exit(1);
		}
	}

}
void stdnaming(status *game) {
	int i, len = 0;
	int y = 3;
	char name[12] = "";

	system("mode con: cols=44 lines=36");

	student** student_list = (student**)calloc(0x0, sizeof(student*) * 7);
	if (student_list == NULL) {
		printf("�л� ���� �Է� �� ���� �߻�! \n");
		printf("Error: �л� ����â�� �ҷ�����ų �� �����ϴ�.\n");
		exit(1);
	}

	for (i = 0; i < STD_AMOUNT; i++) {
		//�⼮�ζ� �������Ѽ� 1~12��° �̸� �Է¹ް� �ϰ�
		//gotoxy(int x, int y)
		gotoxy(3, y); printf("%d ��° �л� --> �̸� �Է�: ", i + 1);
		scanf("%s", name); 
		allocname(game, name);
		//�̸��� �л� ������ �������Ѽ� �����ؾ� ��.
		strcpy(game->student_list[i]->name, name);
		y = y + 2;
	}
}