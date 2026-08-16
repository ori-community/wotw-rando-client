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
 * @param target_function_name Name of the target function to hook
 * @param detour_function Address of the detour function
 * @param previous_function void** where the current funcion pointer is stored
 * @return bool true if successful, otherwise false
 */
static bool iat_hook(void* dll, const char* target_dll, const char* target_function_name, void* detour_function, void** previous_function) {
    auto* rva_base = (PIMAGE_DOS_HEADER)dll;
    IMAGE_NT_HEADERS* nt = RVA2PTR(PIMAGE_NT_HEADERS, rva_base, rva_base->e_lfanew);
    IMAGE_IMPORT_DESCRIPTOR* imports = RVA2PTR(IMAGE_IMPORT_DESCRIPTOR*, rva_base, nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);

    for (int i = 0; imports[i].Characteristics; i++) {
        char* name = RVA2PTR(char*, rva_base, imports[i].Name);

        if (lstrcmpiA(name, target_dll) != 0) {
            continue;
        }

        auto original_thunk = RVA2PTR(IMAGE_THUNK_DATA*, rva_base, imports[i].OriginalFirstThunk);
        auto bound_thunk = RVA2PTR(IMAGE_THUNK_DATA*, rva_base, imports[i].FirstThunk);

        for (; original_thunk != nullptr; ++original_thunk, ++bound_thunk) {
            if (original_thunk->u1.Ordinal & IMAGE_ORDINAL_FLAG) {
                continue;
            }

            auto image_import_by_name = RVA2PTR(IMAGE_IMPORT_BY_NAME*, rva_base, original_thunk->u1.AddressOfData);
            auto function_name = reinterpret_cast<char*>(image_import_by_name->Name);

            if (lstrcmpiA(function_name, target_function_name) != 0) {
                continue;
            }

            DWORD old_state;
            if (!VirtualProtect(bound_thunk, sizeof(void*), PAGE_READWRITE, &old_state)) {
                return FALSE;
            }

            *previous_function = reinterpret_cast<void*>(bound_thunk->u1.Function);
            bound_thunk->u1.Function = reinterpret_cast<ULONGLONG>(detour_function);

            VirtualProtect(bound_thunk, sizeof(void*), old_state, &old_state);

            return TRUE;
        }
    }

    return FALSE;
}
