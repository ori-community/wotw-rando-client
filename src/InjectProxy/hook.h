#pragma once

#include <windows.h>

// PE format uses RVAs (Relative Virtual Addresses) to save addresses relative
// to the base of the module More info:
// https://en.wikibooks.org/wiki/X86_Disassembly/Windows_Executable_Files#Relative_Virtual_Addressing_(RVA)
//
// This helper macro converts the saved RVA to a fully valid pointer to the data
// in the PE file
#define RVA2PTR(t, base, rva) ((t)(((PCHAR)(base)) + (rva)))

/**
 * @brief Hooks the given function through the Import Address Table.
 * This is a simplified version that doesn't do lookup directly in the
 * initialized IAT.
 * This is usable to hook system DLLs like kernel32.dll assuming the process
 * wasn't already hooked.
 *
 * @param dll Module to hook
 * @param target_dll Name of the target DLL to search in the IAT
 * @param target_function Address of the target function to hook
 * @param detour_function Address of the detour function
 * @return bool true if successful, otherwise false
 */
static bool iat_hook(void* dll, char const* target_dll, void* target_function, void* detour_function) {
    auto* mz = (PIMAGE_DOS_HEADER)dll;

    IMAGE_NT_HEADERS* nt = RVA2PTR(PIMAGE_NT_HEADERS, mz, mz->e_lfanew);

    IMAGE_IMPORT_DESCRIPTOR* imports =
        RVA2PTR(IMAGE_IMPORT_DESCRIPTOR*, mz, nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);

    for (int i = 0; imports[i].Characteristics; i++) {
        char* name = RVA2PTR(char*, mz, imports[i].Name);

        if (lstrcmpiA(name, target_dll) != 0) {
            continue;
        }

        void** thunk = RVA2PTR(void**, mz, imports[i].FirstThunk);

        for (; *thunk; thunk++) {
            void* import = *thunk;

            if (import != target_function) {
                continue;
            }

            DWORD old_state;
            if (!VirtualProtect(thunk, sizeof(void*), PAGE_READWRITE, &old_state)) {
                return FALSE;
            }

            *thunk = (void*)detour_function;

            VirtualProtect(thunk, sizeof(void*), old_state, &old_state);

            return TRUE;
        }
    }

    return FALSE;
}
