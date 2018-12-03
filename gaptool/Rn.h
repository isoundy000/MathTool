﻿#ifndef Rn_H
#define Rn_H

/*
零环{0}是整环【一种约定而已】但不是域，是C_1的强抽象；1阶环{0}只包含一个元0，加法和乘法规定为0+0=0,0*0=0
规范：GAP4ID编号小的声明在前
*/

extern int g_M2Add[2][2];
extern int g_M2Mul[2][2];

extern int g_F2Add[2][2];
extern int g_F2Mul[2][2];

extern int g_M3Add[3][3];
extern int g_M3Mul[3][3];

extern int g_F3Add[3][3];
extern int g_F3Mul[3][3];

//4阶循环环有T(4)=|{1,2,4}|=3个:A、B、C

//R4_C=ring 4.Nu.1
extern int g_M4Add[4][4];
extern int g_M4Mul[4][4];

//R4_B=ring 4.Nu.2=Z/8Z的4阶子环{0,2,4,6},运算为模8加与模8乘
extern int g_B4Add[4][4];
extern int g_B4Mul[4][4];

//R4_A=ring 4.u.1的运算为模4加与模4乘
extern int g_Z4Add[4][4];
extern int g_Z4Mul[4][4];

//R4_J=ring 22.Nu.1=M_2×M_2
extern int g_M2M2Add[4][4];
extern int g_M2M2Mul[4][4];

//R4_5=ring 22.Nu.2
extern int g_R4_5_Add[4][4];
extern int g_R4_5_Mul[4][4];

//R4_6=ring 22.Nu.3=M_2×F_2
extern int g_M2F2Add[4][4];
extern int g_M2F2Mul[4][4];

//R4_Y=ring 22.NC.2={0={{0,0},{0,0}},1={{1,0},{0,0}},2={{1,1},{0,0}},3={{0,1},{0,0}}}，是16阶环M_2(Z_2)的一个子环
extern int g_Y4Add[4][4];
extern int g_Y4Mul[4][4];

//R4_P=ring 22.NC.1={0={{0,0},{0,0}},1={{1,0},{0,0}},2={{1,0},{1,0}},3={{0,0},{1,0}}}，是16阶环M_2(Z_2)的一个子环
extern int g_P4Add[4][4];
extern int g_P4Mul[4][4];

//R4_X=ring 22.u.2=F_2+uF_2={0={{0,0},{0,0}},1={{1,0},{0,1}},2={{0,1},{1,0}},3={{1,1},{1,1}}}
extern int g_X4Add[4][4];
extern int g_X4Mul[4][4];

//R4_D=ring 22.u.1={0=(0,0),3=(1,0),2=(0,1),1=(1,1)}={0={{0,0},{0,0}},1={{1,0},{0,1}},2={{0,0},{0,1}},3={{1,0},{0,0}}}
extern int g_F2F2Add[4][4];
extern int g_F2F2Mul[4][4];

//R4_K=ring 22.u.3={0={{0,0},{0,0}},1={{1,0},{0,1}},2={{1,1},{1,0}},3={{0,1},{1,1}}}
extern int g_F4Add[4][4];
extern int g_F4Mul[4][4];

//M_6=M_3×M_2=ring 6.Nu.1即6阶零乘环，同构于Z/36Z的6阶子环{0,6,12,18,24,30},运算为模36加与模36乘
extern int g_M6Add[6][6];
extern int g_M6Mul[6][6];

//F_3×M_2=ring 6.Nu.2同构于Z/12Z的6阶子环{0,2,4,6,8,10},运算为模12加与模12乘，非零零因子个数：5（[2],[4],[6],[8],[10]）
extern int g_F3M2Add[6][6];
extern int g_F3M2Mul[6][6];

//M_3×F_2=ring 6.Nu.3同构于Z/18Z的6阶子环{0,3,6,9,12,15},运算为模18加与模18乘,非零零因子个数：5（[3],[6],[9],[12],[15]）
extern int g_M3F2Add[6][6];
extern int g_M3F2Mul[6][6];

//Z/6Z=F_3×F_2=ring 6.u.1,运算为模6加与模6乘,非零零因子个数：3（[[2],[3],[4]]）
extern int g_Z6Add[6][6];
extern int g_Z6Mul[6][6];

//R8_1=M_8
/*
i=1,不可逆元个数n1=8,幂等元个数n2=1,特征：8,是否交换：true,是否有幺元=false,2次幂零元个数n4=7,2~3次幂零元个数n5=7,零乘个数n6=
64,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=8,1,0,8,1,7,7,64,7
*/
extern int g_M8Add[8][8];
extern int g_M8Mul[8][8];

//R8_3=Z/8Z,运算为模8加与模8乘,非零零因子个数：3（[[2],[4],[6]]）
/*
i=3,不可逆元个数n1=4,幂等元个数n2=2,特征：8,是否交换：true,是否有幺元=true,2次幂零元个数n4=1,2~3次幂零元个数n5=3,零乘个数n6=
20,零因子个数n7=3
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=8,1,1,4,2,1,3,20,3
*/
extern int g_Z8Add[8][8];
extern int g_Z8Mul[8][8];

//R8_6
/*
i=6,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：true,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=7,零乘个数n6=
48,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_6Add[8][8];
extern int g_R8_6Mul[8][8];

//R8_8
/*
i=8,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：false,是否有幺元=false,2次幂零元个数n4=5,2~3次幂零元个数n5=7,零乘个数n6=
48,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_8Add[8][8];
extern int g_R8_8Mul[8][8];

//R8_9
/*
i=9,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：false,是否有幺元=false,2次幂零元个数n4=5,2~3次幂零元个数n5=7,零乘个数n6=
48,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_9Add[8][8];
extern int g_R8_9Mul[8][8];

//R8_10
/*
i=10,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：false,是否有幺元=false,2次幂零元个数n4=5,2~3次幂零元个数n5=
7,零乘个数n6=48,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_10Add[8][8];
extern int g_R8_10Mul[8][8];

//R8_11
/*
i=11,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：true,是否有幺元=false,2次幂零元个数n4=7,2~3次幂零元个数n5=7,零乘个数n6=
40,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_11Add[8][8];
extern int g_R8_11Mul[8][8];

//R8_12
/*
i=12,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：true,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=7,零乘个数n6=
40,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_12Add[8][8];
extern int g_R8_12Mul[8][8];

//R8_14
/*
i=14,不可逆元个数n1=6,幂等元个数n2=4,特征：4,是否交换：true,是否有幺元=true,2次幂零元个数n4=1,2~3次幂零元个数n5=1,零乘个数n6=
24,零因子个数n7=5
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=4,1,1,6,4,1,1,24,5
*/
extern int g_Z4F2Add[8][8];
extern int g_Z4F2Mul[8][8];

//R8_15
/*
i=15,不可逆元个数n1=8,幂等元个数n2=3,特征：4,是否交换：false,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=
3,零乘个数n6=28,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_15Add[8][8];
extern int g_R8_15Mul[8][8];

//R8_18
/*
i=18,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：false,是否有幺元=false,2次幂零元个数n4=1,2~3次幂零元个数n5=
7,零乘个数n6=40,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_18Add[8][8];
extern int g_R8_18Mul[8][8];

//R8_19
/*
i=19,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：true,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=7,零乘个数n6=
40,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_19Add[8][8];
extern int g_R8_19Mul[8][8];

//R8_20
/*
i=20,不可逆元个数n1=8,幂等元个数n2=3,特征：4,是否交换：false,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=
3,零乘个数n6=28,零因子个数n7=3
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_20Add[8][8];
extern int g_R8_20Mul[8][8];


//R8_21
/*
i=21,不可逆元个数n1=4,幂等元个数n2=2,特征：4,是否交换：true,是否有幺元=true,2次幂零元个数n4=3,2~3次幂零元个数n5=3,零乘个数n6=
24,零因子个数n7=3
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_21Add[8][8];
extern int g_R8_21Mul[8][8];

//R8_22
/*
i=22,不可逆元个数n1=4,幂等元个数n2=2,特征：4,是否交换：true,是否有幺元=true,2次幂零元个数n4=1,2~3次幂零元个数n5=3,零乘个数n6=
20,零因子个数n7=3
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_22Add[8][8];
extern int g_R8_22Mul[8][8];

//R8_23
/*
i=23,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：true,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=7,零乘个数n6=
48,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_23Add[8][8];
extern int g_R8_23Mul[8][8];

//R8_24
/*
i=24,不可逆元个数n1=8,幂等元个数n2=1,特征：4,是否交换：true,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=3,零乘个数n6=
32,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_24Add[8][8];
extern int g_R8_24Mul[8][8];

//R8_28
/*
i=28,不可逆元个数n1=8,幂等元个数n2=1,特征：2,是否交换：false,是否有幺元=false,2次幂零元个数n4=5,2~3次幂零元个数n5=
7,零乘个数n6=48,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_28Add[8][8];
extern int g_R8_28Mul[8][8];

//R8_30
/*
i=30,不可逆元个数n1=8,幂等元个数n2=5,特征：2,是否交换：false,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=
3,零乘个数n6=36,零因子个数n7=3
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_30Add[8][8];
extern int g_R8_30Mul[8][8];

//R8_31
/*
i=31,不可逆元个数n1=8,幂等元个数n2=1,特征：2,是否交换：true,是否有幺元=false,2次幂零元个数n4=7,2~3次幂零元个数n5=7,零乘个数n6=
40,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_31Add[8][8];
extern int g_R8_31Mul[8][8];

//R8_32
/*
i=32,不可逆元个数n1=8,幂等元个数n2=1,特征：2,是否交换：true,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=7,零乘个数n6=
40,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_32Add[8][8];
extern int g_R8_32Mul[8][8];

//R8_33
/*
i=33,不可逆元个数n1=8,幂等元个数n2=1,特征：2,是否交换：true,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=3,零乘个数n6=
32,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_33Add[8][8];
extern int g_R8_33Mul[8][8];

//R8_36
/*
i=36,不可逆元个数n1=8,幂等元个数n2=5,特征：2,是否交换：false,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=
3,零乘个数n6=32,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_36Add[8][8];
extern int g_R8_36Mul[8][8];

//R8_37
/*
i=37,不可逆元个数n1=8,幂等元个数n2=3,特征：2,是否交换：false,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=
3,零乘个数n6=28,零因子个数n7=3
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_37Add[8][8];
extern int g_R8_37Mul[8][8];

//R8_39
/*
i=39,不可逆元个数n1=8,幂等元个数n2=1,特征：2,是否交换：false,是否有幺元=false,2次幂零元个数n4=1,2~3次幂零元个数n5=
7,零乘个数n6=40,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_39Add[8][8];
extern int g_R8_39Mul[8][8];

//R8_43
/*
i=43,不可逆元个数n1=8,幂等元个数n2=5,特征：2,是否交换：false,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=
3,零乘个数n6=36,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_43Add[8][8];
extern int g_R8_43Mul[8][8];

//R8_44
/*
i=44,不可逆元个数n1=8,幂等元个数n2=3,特征：2,是否交换：false,是否有幺元=false,2次幂零元个数n4=3,2~3次幂零元个数n5=
3,零乘个数n6=28,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_44Add[8][8];
extern int g_R8_44Mul[8][8];

//R8_45
/*
i=45,不可逆元个数n1=4,幂等元个数n2=2,特征：2,是否交换：true,是否有幺元=true,2次幂零元个数n4=3,2~3次幂零元个数n5=3,零乘个数n6=
24,零因子个数n7=3
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_45Add[8][8];
extern int g_R8_45Mul[8][8];

//R8_46
/*
i=46,不可逆元个数n1=4,幂等元个数n2=2,特征：2,是否交换：true,是否有幺元=true,2次幂零元个数n4=1,2~3次幂零元个数n5=3,零乘个数n6=
20,零因子个数n7=3
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_46Add[8][8];
extern int g_R8_46Mul[8][8];

//R8_47
/*
i=47,不可逆元个数n1=8,幂等元个数n2=6,特征：2,是否交换：false,是否有幺元=false,2次幂零元个数n4=1,2~3次幂零元个数n5=
1,零乘个数n6=30,零因子个数n7=7
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_47Add[8][8];
extern int g_R8_47Mul[8][8];

//R8_49
/*
i=49,不可逆元个数n1=6,幂等元个数n2=6,特征：2,是否交换：false,是否有幺元=true,2次幂零元个数n4=1,2~3次幂零元个数n5=1,零乘个数n6=
26,零因子个数n7=5
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=
*/
extern int g_R8_49Add[8][8];
extern int g_R8_49Mul[8][8];

//R8_51
/*
i=51,不可逆元个数n1=5,幂等元个数n2=4,特征：2,是否交换：true,是否有幺元=true,2次幂零元个数n4=0,2~3次幂零元个数n5=0,零乘个数n6=
21,零因子个数n7=4
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=2,1,1,5,4,0,0,21,4
*/
extern int g_F4F2Add[8][8];
extern int g_F4F2Mul[8][8];

//R8_52
/*
i=52,不可逆元个数n1=1,幂等元个数n2=2,特征：2,是否交换：true,是否有幺元=true,2次幂零元个数n4=0,2~3次幂零元个数n5=0,零乘个数n6=
15,零因子个数n7=0
环的结构不变量n0,bA,bO,n1,n2,n4,n5,n6,n7=2,1,1,1,2,0,0,15,0
*/
extern int g_F8Add[8][8];
extern int g_F8Mul[8][8];

#endif

