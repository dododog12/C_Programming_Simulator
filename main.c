#include "declare.h"
#include "util.h"
#include "init.h"


int main(void) {
	//����ü�� ����
	status game;
	player_p gg;

	//���� ������ �ʱ�ȭ
	make_player_p(&gg);
	init_status(&game);
	int a = get_unsigned_int();
	printf("%d", a);

	//���� ����

	//���� �� �л� ��� �Է¹ޱ�

	//�̸� �Է¹ޱ�

	//���� ���� �ռ� �ʱ�ȭ ���� �ʱ�ȭ
	//�÷��̾ ������ ���� �Է� �� ��� Ȯ��

	//�л� ���� ���� �Է¹ޱ�

	//�л� ���� ���� �Է�

	//���� �÷���

	system("pause");
	return 0;
}