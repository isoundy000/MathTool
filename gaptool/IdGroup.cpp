﻿#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <map>
using namespace std;

struct Idx
{
	int n;
	int Id;
	char calG[100];
  	char name[100];      
};

Idx g_group_data[]={ \
	{8,1,"1,1,2,4","C_8"}, \
	{8,2,"1,3,4,0","C_2×C_4"}, \
	{8,3,"1,5,2,0","D_4"}, \
	{8,4,"1,1,6,0","Q_8"}, \
	{8,5,"1,7,0,0","C_2×C_2×C_2"}, \
	{12,1,"1,1,2,6,2,0","Q_12"}, \
	{12,2,"1,1,2,2,2,4","C_12"}, \
	{12,3,"1,3,8,0,0,0","A_4"}, \
	{12,4,"1,7,2,0,2,0","D_6"}, \
	{12,5,"1,3,2,0,6,0","C_2×C_2×C_3"}, \
	{16,1,"1,1,2,4,8","C_16"}, \
	{16,2,"1,3,12,0,0","C_4×C_4"}, \
	{16,3,"1,7,8,0,0","(C_4×C_2):C_2,秩为2"}, \
	{16,4,"1,3,12,0,0","C_4:C_4"}, \
	{16,5,"1,3,4,8,0","C_8×C_2"}, \
	{16,6,"1,3,4,8,0","C_8:C_2"}, \
	{16,7,"1,9,2,4,0","D_16"}, \
	{16,8,"1,5,6,4,0","QD_16"}, \
	{16,9,"1,1,10,4,0","Q_16"}, \
	{16,10,"1,7,8,0,0","C_4×C_2×C_2"}, \
	{16,11,"1,11,4,0,0","C_2×D_8"}, \
	{16,12,"1,3,12,0,0","C_2×Q_8"}, \
	{16,13,"1,7,8,0,0","(C_4×C_2):C_2,秩为3"}, \
	{16,14,"1,15,0,0,0","C_2×C_2×C_2×C_2"}, \
	{24,1,"1,1,2,2,2,12,4,0","C_3和C_8的非平凡半直积"}, \
	{24,2,"1,1,2,2,2,4,4,8","C_24"}, \
	{24,3,"1,1,8,6,8,0,0,0","SL(2,3)"}, \
	{24,4,"1,1,2,14,2,0,4,0","Q_24"}, \
	{24,5,"1,7,2,8,2,0,4,0","D_3×C_4"}, \
	{24,6,"1,13,2,2,2,0,4,0","D_12"}, \
	{24,7,"1,3,2,12,6,0,0,0","Q_12×C_2"}, \
	{24,8,"1,9,2,6,6,0,0,0","C_6和C_4的非平凡半直积"}, \
	{24,9,"1,3,2,4,6,0,8,0","C_6×C_4"}, \
	{24,10,"1,5,2,2,10,0,4,0","D_4×C_3"}, \
	{24,11,"1,1,2,6,2,0,12,0","Q_8×C_3"}, \
	{24,12,"1,9,8,6,0,0,0,0","S_4"}, \
	{24,13,"1,7,8,0,8,0,0,0","A_4×C_2"}, \
	{24,14,"1,15,2,0,6,0,0,0","S_3×C_2×C_2=D_6×C_2"}, \
	{24,15,"1,7,2,0,14,0,0,0","C_6×C_2×C_2"}, \
};

int g_group_data_count=sizeof(g_group_data)/sizeof(Idx);

map<string,vector<Idx> > g_M;

void init()
{
	for(int i=0;i<g_group_data_count;i++)
	{
                 vector<Idx> v;
                 map<string,vector<Idx> >::const_iterator ptr=g_M.find(g_group_data[i].calG);
	         if(ptr!=g_M.end())
	         {
		   v=ptr->second; 
	         }
                 v.push_back(g_group_data[i]);
                 g_M[g_group_data[i].calG]=v;
	}
}

vector<Idx> IdGroup(const char* key)
{
        vector<Idx> ret;
        map<string,vector<Idx> >::const_iterator ptr=g_M.find(key);
	if(ptr!=g_M.end())
	{
		return ptr->second;
	}

	return ret;
}

int main(int argc, char **argv)
{
	char calG[100]={0};
	if(argc<2)
	{
		printf("请输入群元阶的分布calG：");
		scanf("%s",calG);
	}
	else
		strcpy(calG,argv[1]);

	init();    
	vector<Idx> v=IdGroup((const char*)calG);
        int n=v.size();
        if(n<=0)
        {
            printf("Error\n");
        }
        else if(n==1)
        {
           printf("IdGroup(%s)=[%d,%d],name=%s\n", calG,v[0].n,v[0].Id,v[0].name);
        }
        else
        {
          printf("IdGroup(%s)有%d个群：\n", calG,n);
          for(int i=0;i<v.size();i++)
          {
           printf("IdGroup(%s)=[%d,%d],name=%s\n", calG,v[i].n,v[i].Id,v[i].name);
          }
        }

	//system("pause");
	return 0;
}