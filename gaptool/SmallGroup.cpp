﻿//#include "stdafx.h"
#include "GroupUtil.h"
#include <cstdio>
#include <map>
using namespace std;

struct IdxFg
{
	int n;
	int Id;
	char Fg[200];//Q_24的置换表示占用了188字节，故加长至200
  	char name[60];  
};

/*
定理1：S_n(n>2)都是二元生成群，其生成元可取(1,2)及(2,3,…,n)。
定理2：S_n(n>3)的一元生成子群均不是极大子群。
*/

IdxFg g_group_fg_data[]={ \
        //C_4=<(1234)>={{{1,0},{0,1}},{{0,1},{-1,0}},{{-1,0},{0,-1}},{{0,-1},{1,0}}{<}GL_2(R)
	{4,1,"R;2;0;0,1,-1,0;-1,0,0,-1","C_4"}, \
	 //{4,1,"2,3,4,1","C_4"},
        //C_2×C_2={(1),(12)(34),(13)(24),(14)(23)}={{{1,0},{0,1}},{{1,0},{0,-1}},{{-1,0},{0,1}},{{-1,0},{0,-1}}{<}GL_2(R)
        {4,2,"R;2;0;1,0,0,-1;-1,0,0,1","C_2×C_2"}, \
         //G4_2:=Group([(1,2),(3,4),(1,2)(3,4),(1,3)(2,4),(1,4)(2,3)]);
        //{4,2,"2,1,3,4;1,2,4,3","C_2×C_2"},
        //{{1,0},{0,1}},{{-1,1},{0,1}},{{1,0},{1,-1}},{{0,-1},{-1,0}},{{-1,1},{-1,0}},{{0,-1},{1,-1}}
	{6,1,"R;2;0;-1,1,0,1;1,0,1,-1","S_3=D_3"}, \
	//{6,1,"2,3,1;1,3,2","S_3=D_3"},
	//{6,1,"2,1,3;1,3,2","S_3=D_3"},
	{6,2,"2,1,3,4,5;1,2,4,5,3","C_6"}, \
         //G8_1:=Group((1,2,3,4,5,6,7,8)); 
	{8,1,"2,3,4,5,6,7,8,1","C_8"}, \
         //G8_2:=Group((1,2),(3,4,5,6)); 
	{8,2,"2,1,3,4,5,6;1,2,4,5,6,3","C_2×C_4"}, \
         //G8_3:=Group((1,2)(3,4),(1,3),(1,3)(2,4));
	{8,3,"2,1,4,3;3,2,1,4;3,4,1,2","D_4"}, \
         //G8_4:=Group((1,5,2,6)(3,8,4,7),(1,3,2,4)(5,7,6,8),(1,2)(3,4)(5,6)(7,8));
	{8,4,"5,6,8,7,2,1,3,4;3,4,2,1,7,8,6,5;2,1,4,3,6,5,8,7","Q_8"}, \
         //G8_5:=Group((1,2),(3,4),(5,6));
	{8,5,"2,1,3,4,5,6;1,2,4,3,5,6;1,2,3,4,6,5","C_2×C_2×C_2"}, \
	{9,1,"2,3,4,5,6,7,8,9,1","C_9"}, \
	{9,2,"2,3,1,4,5,6;1,2,3,5,6,4","C_3×C_3"}, \
	{10,1,"2,3,4,5,1;1,5,4,3,2","D_5"}, \
	{10,2,"2,1,3,4,5,6,7;1,2,4,5,6,7,3","C_10"}, \
         //G12_1:=Group((1,2,3,4,5,6)(7,8,9,10,11,12),(1,7,4,10)(2,12,5,9)(3,11,6,8));
	{12,1,"2,3,4,5,6,1,8,9,10,11,12,7;7,12,11,10,9,8,4,3,2,1,6,5","Q_12"}, \
         //G12_2:=Group((1,2,3,4,5,6,7,8,9,10,11,12));
	{12,2,"2,3,4,5,6,7,8,9,10,11,12,1","C_12"}, \
         //G12_3:=Group((),(1,2,3),(1,3,2),(1,2,4),(1,4,2),(1,3,4),(1,4,3),(2,3,4),(2,4,3),(1,2)(3,4),(1,3)(2,4),(1,4)(2,3))={(1), (123), (132), (124), (142), (134), (143), (234), (243), (12)(34), (13)(24), (14)(23)}
	{12,3,"2,1,4,3;3,4,1,2;2,3,1,4","A_4"}, \
         //G12_4:=Group((1,3,5)(4,6),(1,5));
	{12,4,"3,2,5,6,1,4;5,2,3,4,1,6","D_6"}, \
	{12,5,"2,1,3,4,5,6,7;1,2,4,3,5,6,7;1,2,3,4,6,7,5","C_2×C_2×C_3"}, \
	{14,1,"2,3,4,5,6,7,1;1,7,6,5,4,3,2","D_7"}, \
	{14,2,"2,3,4,5,6,7,1,8,9;1,2,3,4,5,6,7,9,8","C_14"}, \
	{16,1,"2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,1","C_16"}, \
	{16,2,"2,3,4,1,5,6,7,8;1,2,3,4,6,7,8,5","C_4×C_4"}, \
	{16,3,"5,6,4,8,1,2,10,9,3,7;6,2,3,4,5,1,7,8,9,10","(C_4×C_2):C_2,秩为2"}, \
	{16,4,"2,3,4,1,5,6,7,8;3,2,1,4,6,7,8,5","C_4:C_4"}, \
	{16,5,"2,3,4,5,6,7,8,1,9,10;1,2,3,4,5,6,7,8,10,9","C_8×C_2"}, \
	{16,6,"2,1,9,10,11,12,8,7,3,4,5,6,16,15,14,13;15,14,10,12,7,16,2,1,4,6,8,13,3,11,5,9;16,13,14,11,4,8,6,12,15,5,10,7,1,9,3,2","C_8:C_2"}, \
	{16,7,"2,3,4,5,6,7,8,1;8,7,6,5,4,3,2,1","D_8"}, \
	{16,8,"5,6,8,7,2,1,3,4;3,4,2,1,7,8,6,5;2,1,4,3,6,5,8,7;8,7,5,6,2,1,4,3","QD_16"}, \
	{16,9,"2,3,4,5,6,7,8,1,10,11,12,13,14,15,16,9;16,15,14,13,12,11,10,9,4,3,2,1,8,7,6,5","Q_16"}, \
	{16,10,"2,3,4,1,5,6,7,8;1,2,3,4,6,5,7,8;1,2,3,4,5,6,8,7","C_4×C_2×C_2"}, \
	{16,11,"3,4,1,2,5,7,6;1,3,2,4,5,6,7;1,2,3,4,5,7,6","C_2×D_4"}, \
	{16,12,"5,6,8,7,2,1,3,4,9,10;3,4,2,1,7,8,6,5,9,10;2,1,4,3,6,5,8,7,9,10;1,2,3,4,5,6,7,8,10,9","C_2×Q_8"}, \
	{16,13,"5,6,8,7,2,1,3,4;3,4,2,1,7,8,6,5;2,1,4,3,6,5,8,7;5,6,7,8,1,2,3,4","(C_4×C_2):C_2,秩为3"}, \
	{16,14,"2,1,3,4,5,6,7,8;1,2,4,3,5,6,7,8;1,2,3,4,6,5,7,8;1,2,3,4,5,6,8,7","C_2×C_2×C_2×C_2"}, \
	{18,1,"2,3,4,5,6,7,8,9,1;1,9,8,7,6,5,4,3,2","D_9"}, \
	{18,2,"2,1,3,4,5,6,7,8,9,10,11;1,2,4,5,6,7,8,9,10,11,3","C_18"}, \
	{18,3,"1,2,3,4,6,5;2,3,1,5,4,6","S_3×C_3"}, \
	{18,4,"1,2,6,5,4,3;1,4,3,5,2,6;3,2,1,5,4,6","(C_3×C_3):C_2"}, \
	{18,5,"2,1,3,4,5,6,7,8;1,2,4,5,3,6,7,8;1,2,3,4,5,7,8,6","C_2×C_3×C_3"}, \
	{20,1,"2,3,4,5,1,7,8,9,10,6,15,11,12,13,14,20,16,17,18,19;20,16,17,18,19,15,11,12,13,14,2,3,4,5,1,7,8,9,10,6","Q_20"}, \
	{20,2,"2,3,4,1,5,6,7,8,9;1,2,3,4,6,7,8,9,5","C_20"}, \
         //G20_3:=Group((2,3)(4,5),(1,2,3,4));
	{20,3,"1,3,2,5,4;2,3,4,1,5","F_20"}, \
	{20,4,"2,3,4,5,6,7,8,9,10,1;10,9,8,7,6,5,4,3,2,1","D_10"}, \
	{20,5,"2,1,3,4,5,6,7,8,9;1,2,4,3,5,6,7,8,9;1,2,3,4,6,7,8,9,5","C_2×C_2×C_5"}, \
	{24,1,"1,2,3,4,5,6,7,8,10,11,9;2,3,4,5,6,7,8,1,9,11,10","C_3和C_8的非平凡半直积"}, \
	{24,2,"2,3,1,4,5,6,7,8,9,10,11;1,2,3,5,6,7,8,9,10,11,4","C_24"}, \
	{24,3,"2,3,1,6,4,5,7,8;1,5,8,4,7,3,2,6","SL(2,3)"}, \
{24,4,"2,3,1,5,6,4,8,9,7,11,12,10,15,13,14,18,16,17,21,19,20,24,22,23;16,17,18,13,14,15,22,23,24,19,20,21,1,2,3,4,5,6,7,8,9,10,11,12;20,21,19,23,24,22,17,18,16,14,15,13,9,7,8,12,10,11,6,4,5,3,1,2","Q_24"}, \
	{24,5,"2,4,1,3,6,5,7;1,2,3,4,7,6,5","D_3×C_4"}, \
	{24,6,"1,4,3,2,5,7,6,8,10,9,11,12;2,3,4,1,5,7,6,9,10,8,12,11","D_12"}, \
	{24,7,"2,3,4,5,6,1,8,9,10,11,12,7,13,14;7,12,11,10,9,8,4,3,2,1,6,5,13,14;1,2,3,4,5,6,7,8,9,10,11,12,14,13","Q_12×C_2"}, \
	{24,8,"1,4,3,2,5,7,6,8,10,9,11,12;2,1,4,3,5,7,8,6,9,10,12,11","C_6和C_4的非平凡半直积"}, \
	{24,9,"2,1,3,4,5,6,7,8,9;1,2,4,5,3,6,7,8,9;1,2,3,4,5,7,8,9,6","C_6×C_4"}, \
	{24,10,"2,3,4,1,5,6,7;4,3,2,1,6,7,5","D_4×C_3"}, \
	{24,11,"5,6,8,7,2,1,3,4,9,10,11;3,4,2,1,7,8,6,5,9,10,11;2,1,4,3,6,5,8,7,9,10,11;1,2,3,4,5,6,7,8,10,11,9","Q_8×C_3"}, \
         //G24_12:=Group((1,2)(3,4),(1,3),(1,3)(2,4),(1,2,3,4),(3,4));
	//{24,12,"2,1,4,3;3,2,1,4;3,4,1,2;2,3,4,1;1,2,4,3","S_4"},
	{24,12,"2,1,3,4;1,3,4,2","S_4"}, \
	{24,13,"6,5,1,2,3,4;1,2,3,4,6,5","A_4×C_2"}, \
	{24,14,"3,2,5,6,1,4,7,8;5,2,3,4,1,6,7,8;1,2,3,4,5,6,8,7","S_3×C_2×C_2=D_6×C_2"}, \
	{24,15,"2,1,3,4,5,6,7,8,9;1,2,4,5,3,6,7,8,9;1,2,3,4,5,7,6,8,9;1,2,3,4,5,6,7,9,8","C_6×C_2×C_2"}, \
	{30,2,"1,2,3,5,4,7,6,8;2,3,1,4,6,5,8,7","D_5×C_3"}, \
	{36,2,"2,3,4,5,6,7,8,9,1,10,11,12,13;1,2,3,4,5,6,7,8,9,11,12,13,10","C_36"}, \
	{36,10,"1,3,2,5,6,4;2,3,1,5,4,6","S_3×S_3"}, \
	{36,11,"2,5,3,4,1,6,8,9,7;4,2,3,5,1,6,7,8,9","A_4×C_3"}, \
	{36,12,"5,2,8,6,1,10,7,9,4,3;1,2,8,6,5,10,7,9,4,3;2,1,8,6,5,10,7,9,4,3","C_6×S_3"}, \
	{36,14,"1,8,3,4,5,6,7,2,10,18,11,12,13,14,15,16,17,9;5,2,3,4,1,6,7,8,9,10,11,12,15,14,17,16,13,18","C_6×C_6"}, \
        //Lie型群O(2,F_23)是一个48阶群，它包含{{11,15},{15,12}}。
	{48,7,"O;2;23;19,13,13,4;1,0,0,22;4,10,10,19","O(2,23)=GO(-1,2,23)"}, \
        //48个可逆的F_3上的2阶方阵构成一般线性群GL(2,3),是(9-1)(9-3)=48阶群
	{48,29,"GL;2;3;0,1,2,0;0,1,2,1;2,2,0,1","GL(2,3)"}, \
	{60,5,"2,3,4,5,1;3,1,2,4,5","A_5"}, \
        //GL(3,2)是(8-1)(8-2)(8-4)=168阶群
	{168,42,"GL;3;2;1,1,1,1,1,0,1,0,1;1,1,1,1,0,0,1,0,1;1,1,0,0,1,0,1,0,1","GL(3,2)"}, \
        //GL(2,4)是(16-1)(16-4)=180阶群
	{180,19,"GL;2;4;0,1,1,2;1,0,2,3;2,3,0,1","GL(2,4)=A_5×C_3"}, \
};

int g_group_fg_data_count=sizeof(g_group_fg_data)/sizeof(IdxFg);

map<pair<int,int>,IdxFg> g_Mfg;

void init()
{
	for(int i=0;i<g_group_fg_data_count;i++)
	{
	    pair<int,int> key=make_pair(g_group_fg_data[i].n,g_group_fg_data[i].Id);
            g_Mfg[key]=g_group_fg_data[i];
	}
}

IdxFg SmallGroupFg(int n,int Id)
{
	pair<int,int> key=make_pair(n,Id);
	map<pair<int,int>,IdxFg>::const_iterator ptr=g_Mfg.find(key);
	if(ptr!=g_Mfg.end())
	{
	    return ptr->second;
	}

	IdxFg ret;
	ret.n=n;
	ret.Id=Id;
	ret.Fg[0]='\0';
	ret.name[0]='\0';
	return ret;
}

int main(int argc, char* argv[])
{
	char szn[100]={0};
	char szId[100]={0};
	if(argc<2)
	{
		printf("请输入n：");
		scanf("%s",szn);
	}
	else
		strcpy(szn,argv[1]);

	if(argc<3)
	{
		printf("请输入Id：");
		scanf("%s",szId);
	}
	else
		strcpy(szId,argv[2]);

	int n=atoi(szn);
	int Id=atoi(szId);

	init();
	IdxFg idxfg=SmallGroupFg(n,Id);
	if(idxfg.Fg[0]=='\0')
	{
		printf("Error\n");	   
		return -1;
	}
	char szfn[100]={0};
	sprintf(szfn,"G%d_%d.txt",n,Id);
	bool bRet=GroupUtil::FG(idxfg.Fg,szfn);

	//system("pause");
	return 0;
}


