#include "declare.h"
#include "util.h"
#include "init.h"
#include "view.h"
#include "domain.h"


int main(void) {
	init_consol();
	//선언 및 초기화
	int menu_select = 0;
	status* game = init_status();
	//게임 시작 화면(press any key)
	v_start();
	//메인 메뉴
	while (1) {
		menu_select = main_menu();
		//교수 및 학생 모드 입력받기

		//이름 입력받기

		//게임 시작 앞선 초기화 값들 초기화
		//플레이어에 관련한 정보 입력 및 모드 확정

		//학사 일정 수정 입력받기

		//학사 관련 정보 입력

		//게임 플레이




	}

	return 0;
}
