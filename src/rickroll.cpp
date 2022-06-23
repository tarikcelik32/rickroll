#include <iostream>
#include <windows.h>
#include <shellapi.h>

using std::cout;

int main(void)
{
	ShellExecute(0, 0, "https://bit.ly/3HLRteC", 0, 0 , SW_SHOW );
	cout << "you got rickrolled";
	BlockInput(true);
	Sleep(199800);
	BlockInput(false);
}
