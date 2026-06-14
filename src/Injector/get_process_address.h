#pragma once
#include <Windows.h>

namespace injector {
    FARPROC get_function_address_in_process(HANDLE process, HMODULE module, LPCSTR function_name);
    FARPROC get_function_address_in_process(HANDLE process, LPCSTR module_name, LPCSTR function_name);
}
