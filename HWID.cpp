#include <Windows.h>
#include <iostream>
#include <sstream>

int main()
{

    DWORD disk_serialINT;
    GetVolumeInformationA("c:\\", NULL, NULL, &disk_serialINT, NULL, NULL, NULL, NULL);

    std::stringstream ss;
    ss << std::hex << disk_serialINT;
    
    std::cout << ss.str();

	return 0;
}
