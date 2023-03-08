#pragma once

#include <windows.h>

HANDLE hHeap;

#define memalloc(size) HeapAlloc(hHeap, HEAP_GENERATE_EXCEPTIONS, size)
#define memfree(mem) HeapFree(hHeap, 0, mem)

#define STR_LEN(str) (sizeof(str) / sizeof(str[0]))

inline void *_wmemcpy(wchar_t *dst, const wchar_t *src, size_t n) {
    wchar_t *d = dst;
    const wchar_t *s = src;
    while (n--)
        *d++ = *s++;
    return dst;
}

inline size_t wcslen(wchar_t const *str) {
    size_t result = 0;
    while (*str++)
        result++;
    return result;
}

#include <Shlwapi.h>
#include <crtdbg.h>

#define ALT_POSTFIX L"_alt.dll"
#define DLL_POSTFIX L".dll"

extern void load_proxy_functions(HMODULE dll);

// Load the proxy functions into memory
inline void load_proxy(std::wstring module_name_str) {
    hHeap = GetProcessHeap();

    auto module_name = module_name_str.c_str();
    size_t module_name_len = wcslen(module_name);

    size_t alt_name_len = module_name_len + STR_LEN(ALT_POSTFIX);
    wchar_t *alt_name = (wchar_t *)memalloc(sizeof(wchar_t) * alt_name_len);
    _wmemcpy(alt_name, module_name, module_name_len);
    _wmemcpy(alt_name + module_name_len, ALT_POSTFIX, STR_LEN(ALT_POSTFIX));

    wchar_t *dll_path = NULL; // The final DLL path

    const int alt_full_path_len = GetFullPathNameW(alt_name, 0, NULL, NULL);
    wchar_t *alt_full_path = (wchar_t *)memalloc(sizeof(wchar_t) * alt_full_path_len);
    GetFullPathNameW(alt_name, alt_full_path_len, alt_full_path, NULL);
    memfree(alt_name);

    // Try to look for the alternative first in the same directory.
    HMODULE handle = LoadLibraryW(alt_full_path);

    if (handle == NULL) {
        size_t system_dir_len = GetSystemDirectoryW(NULL, 0);
        dll_path = (wchar_t *)memalloc(sizeof(wchar_t) * (system_dir_len + module_name_len + STR_LEN(DLL_POSTFIX)));
        _ASSERTE(dll_path != nullptr);
        GetSystemDirectoryW(dll_path, system_dir_len);
        dll_path[system_dir_len - 1] = L'\\';
        _wmemcpy(dll_path + system_dir_len, module_name, module_name_len);
        _wmemcpy(dll_path + system_dir_len + module_name_len, DLL_POSTFIX, STR_LEN(DLL_POSTFIX));

        handle = LoadLibraryW(dll_path);
    }

    memfree(alt_full_path);
    memfree(dll_path);

    load_proxy_functions(handle);
}