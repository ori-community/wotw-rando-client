#include <windows.h>

#define PROXIED_FUNCTION(name) FARPROC __##name = 0;
#include "winhttp_proxy_functions.h"
#undef PROXIED_FUNCTION

void load_proxy_functions(HMODULE dll) {
#define PROXIED_FUNCTION(name) __##name = GetProcAddress(dll, #name);
#include "winhttp_proxy_functions.h"

#undef PROXIED_FUNCTION
}

#define PROXIED_FUNCTION(name) extern "C" __declspec(dllexport) ULONG __stdcall name() { \
        return __##name();                                                               \
    }
#include "winhttp_proxy_functions.h"
#undef PROXIED_FUNCTION