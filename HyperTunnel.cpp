// HyperTunnel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleTitle("CConvertisseur MP3 HyperTunnel");
	printf("HyperTunnel v:0.0.91\t%cPatrice Wächter-Ebling 2009-2014\n\n");
	system("cmd");
	for (int x=0; x<argc; x++){
	printf("ID %.2d,%s\n",x,argv[x]);
	}
	system(argv[1]);
	return 0;
}

