#include "constants.h"
#include "init.h"
#include "declare.h"

void allocname(status *game, char * name) {
	int i, len = 0;

	for (i = 0; i < STD_AMOUNT; i++) {
		game->student_list[i]->name = (char *)realloc(game->student_list[i]->name, sizeof(char) * strlen(name));
		if (game->student_list[i]->name == NULL) {
			printf("Error: �̺��� ���� �л� ���� ������ ��� ��ġ �ʽ��ϴ�.\n");
			exit(1);
		}
	}

}
void stdnaming(status *game) {
	int i, len = 0;
	int y = 3;
	char * name;

	system("mode con: cols=44 lines=36");

	name = malloc(sizeof(char));
	if (name == NULL) {
		printf("�л� ���� �Է� �� ���� �߻�! \n");
		printf("Error: �л� �̸��� �ҷ�����ų �� �����ϴ�.\n");
		exit(1);
	}

	for (i = 0; i < STD_AMOUNT; i++) {
		//�⼮�ζ� �������Ѽ� 1~12��° �̸� �Է¹ް� �ϰ�
		gotoxy(3, y); printf("%d ��° �л� --> �̸� �Է�: ", i + 1);
		scanf("%s", name);
		
		allocname(game, name);
		//�̸��� �л� ������ �������Ѽ� �����ؾ� ��.
		strcpy(game->student_list[i]->name, name);
		y = y + 2;
	}
}