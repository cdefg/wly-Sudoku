#ifndef _SUDOKU_KRL_
#define _SUDOKU_KRL_

typedef struct sudoku{
	int left_unit;
	int cursor_x;
	int cursor_y;
}Sudoku, *pSudoku;

typedef struct unit{
	int state;//预制生成1，后来生成0
	int val;
}Unit, *pUnit;

int solvable(pSudoku S);//可解为1，不可解为0
pSudoku initialize(int blank);//生成一个数独界面，整数为留下的空格数
void fill(pSudoku S, int x, int y, int num);//在某处进行填充

#endif