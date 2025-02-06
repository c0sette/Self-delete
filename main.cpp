#include <Windows.h>
#include <shellapi.h>

void selfDel()
{
    wchar_t szFilePath[MAX_PATH];
    wchar_t szCmd[2 * MAX_PATH];

    GetModuleFileNameW(NULL, szFilePath, MAX_PATH);
    wsprintfW(szCmd, L"cmd /c del /f /q \"%s\"", szFilePath);
    ShellExecuteW(NULL, L"open", L"cmd", szCmd, NULL, SW_HIDE);

    exit(0);
}

int main()
{
    selfDel();
    return 0;
}   