//#include "smallint.h"
#include <stdio.h>
#include <stdlib.h>
#if defined(_WIN32)||defined(_WIN64)
#include<windows.h>
#else
#include <dlfcn.h>
#endif

int main(int argc, char* argv[])
{
        if(argc<5)
        {
            printf("argc=%d<5.\n", argc);
            return -1;
        }
	typedef int(*pR)(int n,int m);
	pR R;
#if defined(_WIN32)||defined(_WIN64)
	HINSTANCE hLib = LoadLibrary(argv[1]);
	if(!hLib) return 0;
	R=(pR)GetProcAddress(hLib,argv[2]);
#else
        void* hLib = dlopen(argv[1], RTLD_LAZY);
        if(!hLib)
        {        
            printf("ERROR, Message(%s).\n", dlerror());
            return -1;
        }
        R=(pR)dlsym(hLib, argv[2]);
        char* szError = dlerror();
        if(szError != NULL)
        {
         printf("ERROR, Message(%s).\n", szError);
         dlclose(hLib);
         return -1;
        }
#endif
        int n=atoi(argv[3]);
        int m=atoi(argv[4]);
        printf("%s(%d,%d)=%d\n", argv[2],n,m,R(n,m));
#if defined(_WIN32)||defined(_WIN64)
	FreeLibrary(hLib);
#else
        dlclose(hLib);
#endif
	getchar();
	return 0;
}