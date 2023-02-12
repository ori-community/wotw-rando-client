#include "hook.h"
#include "utils.h"
#include <windows.h>
#include <winuser.h>
#include <cstdlib>
#include <thread>
#include <InjectLoader/loader.h>


void inject() {
    MessageBoxA(
        nullptr,
        (LPCSTR) "Hello from il2cpp_init. Injecting now...",
        (LPCSTR) "Yooo??",
        MB_ICONINFORMATION | MB_OK
    );

    CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)inject_loader::load_inject_dlls, 0, 0, nullptr);

    while (!inject_loader::is_initialization_complete()) {
        using namespace std::chrono_literals;
        std::this_thread::sleep_for(50ms);
    }
}

#define PROXIED_FUNCTION(name) static FARPROC __##name##__;
#include "proxied_functions.h"
#undef PROXIED_FUNCTION

void load_functions(void* dll) {
#define PROXIED_FUNCTION(name) __##name##__ = GetProcAddress((HMODULE)dll, #name);
#include "proxied_functions.h"
#undef PROXIED_FUNCTION
}

/*
#define PROXIED_FUNCTION(name)                                \
    extern "C" __declspec(dllexport) void* __stdcall name() { \
        return (void*)__##name##__();                         \
    }
#include "proxied_functions.h"
#undef PROXIED_FUNCTION
 */

extern "C" __declspec(dllexport) void* __stdcall WinHttpGetIEProxyConfigForCurrentUser() {
    return (void*)nullptr;
}

#define ALT_SUFFIX L"_alt.dll"
#define DLL_SUFFIX L".dll"

static inline void load_proxy(const wchar_t* module_name) {
    size_t module_name_len = wcslen(module_name);

    size_t alt_name_len = module_name_len + STR_LEN(ALT_SUFFIX);
    auto* alt_name = memalloc<wchar_t*>(sizeof(wchar_t) * alt_name_len);

    wmemcpy(alt_name, module_name, module_name_len);
    wmemcpy(alt_name + module_name_len, ALT_SUFFIX, STR_LEN(ALT_SUFFIX));

    wchar_t* dll_path = nullptr; // The final DLL path

    auto alt_full_path_len = GetFullPathNameW(alt_name, 0, nullptr, nullptr);
    auto* alt_full_path = memalloc<wchar_t*>(sizeof(wchar_t) * alt_full_path_len);
    GetFullPathNameW(alt_name, alt_full_path_len, alt_full_path, nullptr);
    memfree(alt_name);

    // Try to look for the alternative first in the same directory.
    HMODULE handle = LoadLibrary((LPCSTR)alt_full_path);

    if (handle == nullptr) {
        size_t system_dir_len = GetSystemDirectoryW(nullptr, 0);
        dll_path = memalloc<wchar_t*>(sizeof(wchar_t) * (system_dir_len + module_name_len + STR_LEN(DLL_SUFFIX)));

        GetSystemDirectoryW(dll_path, system_dir_len);
        dll_path[system_dir_len - 1] = L'\\';

        wmemcpy(dll_path + system_dir_len, module_name, module_name_len);
        wmemcpy(dll_path + system_dir_len + module_name_len, DLL_SUFFIX, STR_LEN(DLL_SUFFIX));

        handle = LoadLibraryW(dll_path);
    }

    memfree(alt_full_path);
    memfree(dll_path);

    load_functions(handle);
}

void* WINAPI get_proc_address_detour(HMODULE module_name, char* name) {
    auto return_value = (void*)GetProcAddress(module_name, name);

    if (lstrcmpA(name, "il2cpp_init") == 0) {
        inject();
    }

    return return_value;
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmicrosoft-cast"
void inject_iat() {
    HMODULE target_module = GetModuleHandle(TEXT("UnityPlayer"));

    bool ok = true;
    ok = iat_hook(target_module, "kernel32.dll", &GetProcAddress, &get_proc_address_detour);

    if (!ok) {
        MessageBoxA(
            nullptr,
            (LPCSTR) "IAT hooking failed.",
            (LPCSTR) "Yooo??",
            MB_ICONERROR | MB_OK
        );
    }
}
#pragma clang diagnostic pop

bool iat_injected = false;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (
        (
            ul_reason_for_call == DLL_PROCESS_ATTACH ||
            ul_reason_for_call == DLL_THREAD_ATTACH
        ) &&
        !iat_injected
    ) {
        iat_injected = true;
        inject_iat();
    }

    return true;
}
