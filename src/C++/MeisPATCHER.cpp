#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleTitle("MeisPATCHER");
	system("taskkill /f /im Meissmartboardtray.exe");
	system("pause");
	return 0;
}
