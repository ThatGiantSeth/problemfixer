#include <iostream>
#include <windows.h>
#include <shellapi.h>

using namespace std;

void Iridium() {
	ShellExecute(0, 0, L"https://www.youtube.com/watch?v=EuIcDAevwuI", 0, 0, SW_SHOW);
}