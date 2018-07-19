#include <stdio.h>
#include <windows.h>
int main(){
	SetConsoleTitle("MeisPATCHER");
	system("taskkill /f /im Meissmartboardtray.exe");
	system("pause");
	return 0;
}
