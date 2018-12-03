﻿#include"Rn.h"

int g_M2Add[2][2]={
	{0,1},
	{1,0}
};

int g_M2Mul[2][2]={
	{0,0},
	{0,0}
};

/*
F_2的运算表：
奇偶数加减乘公式：
0（偶）±0=0
0±1（奇）=1
1±1=0
a×0=0
1×1=1
a-b=a+b
*/
int g_F2Add[2][2]={
	{0,1},
	{1,0}
};
int g_F2Mul[2][2]={
	{0,0},
	{0,1}
};

int g_M3Add[3][3]={
	{0,1,2},
	{1,2,0},
	{2,0,1}
};
int g_M3Mul[3][3]={
	{0,0,0},
	{0,0,0},
	{0,0,0}
};

int g_F3Add[3][3]={
	{0,1,2},
	{1,2,0},
	{2,0,1}
};
int g_F3Mul[3][3]={
	{0,0,0},
	{0,1,2},
	{0,2,1}
};

int g_M4Add[4][4]={
{0,1,2,3},
{1,2,3,0},
{2,3,0,1},
{3,0,1,2}
};


int g_M4Mul[4][4]={
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0}
};

int g_B4Add[4][4]={
{0,1,2,3},
{1,2,3,0},
{2,3,0,1},
{3,0,1,2}
};


int g_B4Mul[4][4]={
	{0,0,0,0},
	{0,2,0,2},
	{0,0,0,0},
	{0,2,0,2}
};

int g_Z4Add[4][4]={
{0,1,2,3},
{1,2,3,0},
{2,3,0,1},
{3,0,1,2}
};

int g_Z4Mul[4][4]={
{0,0,0,0},
{0,1,2,3},
{0,2,0,2},
{0,3,2,1}
};

int g_R4_5_Add[4][4]={
	{0,1,2,3},
	{1,0,3,2},
	{2,3,0,1},
	{3,2,1,0}
};

int g_R4_5_Mul[4][4]={
	{0,0,0,0},
	{0,0,0,0},
	{0,0,1,1},
	{0,0,1,1}
};

int g_M2F2Add[4][4]={
	{0,1,2,3},
	{1,0,3,2},
	{2,3,0,1},
	{3,2,1,0}
};

int g_M2F2Mul[4][4]={
	{0,0,0,0},
	{0,0,0,0},
	{0,0,2,2},
	{0,0,2,2}
};

int g_M2M2Add[4][4]={
	{0,1,2,3},
	{1,0,3,2},
	{2,3,0,1},
	{3,2,1,0}
};

int g_M2M2Mul[4][4]={
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0}
};

int g_Y4Add[4][4]={
	{0,1,2,3},
	{1,0,3,2},
	{2,3,0,1},
	{3,2,1,0},
};

int g_Y4Mul[4][4]={
	{0,0,0,0},
	{0,1,2,3},
	{0,1,2,3},
	{0,0,0,0},
};

int g_P4Add[4][4]={
	{0,1,2,3},
	{1,0,3,2},
	{2,3,0,1},
	{3,2,1,0},
};

int g_P4Mul[4][4]={
	{0,0,0,0},
	{0,1,1,0},
	{0,2,2,0},
	{0,3,3,0},
};

int g_X4Add[4][4]={
	{0,1,2,3},
	{1,0,3,2},
	{2,3,0,1},
	{3,2,1,0}
};

int g_X4Mul[4][4]={
	{0,0,0,0},
	{0,1,2,3},
	{0,2,1,3},
	{0,3,3,0},
};

int g_F2F2Add[4][4]={
	{0,1,2,3},
	{1,0,3,2},
	{2,3,0,1},
	{3,2,1,0}
};

int g_F2F2Mul[4][4]={
	{0,0,0,0},
	{0,1,2,3},
	{0,2,2,0},
	{0,3,0,3}
};

int g_F4Add[4][4]={
{0,1,2,3},
{1,0,3,2},
{2,3,0,1},
{3,2,1,0}
};

int g_F4Mul[4][4]={
{0,0,0,0},
{0,1,2,3},
{0,2,3,1},
{0,3,1,2}
};
