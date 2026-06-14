#include <Injector/get_process_address.h>
#include <TlHelp32.h>

#undef MODULEENTRY32
#undef Module32First
#undef Module32Next

#include <iostream>
#include <list>
#include <memory>
#include <string>
#include <unordered_map>


namespace injector {
    bool read_memory(HANDLE process, const UINT_PTR address, const SIZE_T size, LPVOID buffer) {
        SIZE_T read_size = {0};
        return ReadProcessMemory(process, reinterpret_cast<LPCVOID>(address), buffer, size, &read_size);
    }

    bool read_name(HANDLE process, UINT_PTR base, DWORD name, std::string& return_value) {
        constexpr SIZE_T buf_size = 32;
        constexpr SIZE_T limit = 16;

        char buf[buf_size];
        return_value.clear();

        for (SIZE_T i = 0; i < limit; ++i) {
            if (!read_memory(process, base + static_cast<UINT_PTR>(name), buf_size, buf)) {
                return false;
            }

            for (SIZE_T j = 0; j < buf_size; ++j) {
                if (buf[j] == '\0') {
                    return true;
                }

                return_value.push_back(buf[j]);
            }
        }

        return false;
    }

    static bool parse_forward(const std::string& forward, std::string& module, std::string& name) {
        const size_t find_period = forward.find('.');

        if (find_period == std::string::npos) {
            return false;
        }

        module = forward.substr(0, find_period) + ".dll";
        name = forward.substr(find_period + 1);

        return true;
    }

    static HMODULE find_module(HANDLE process, const std::string& module) {
        HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, GetProcessId(process));

        if (snapshot == INVALID_HANDLE_VALUE) {
            return nullptr;
        }

        MODULEENTRY32 entry = {};
        entry.dwSize = sizeof(entry);

        for (BOOL status = Module32First(snapshot, &entry); status == TRUE; status = Module32Next(snapshot, &entry)) {
            if (!_strcmpi(module.c_str(), entry.szModule)) {
                CloseHandle(snapshot);
                return entry.hModule;
            }
        }

        CloseHandle(snapshot);
        return nullptr;
    }

    FARPROC get_function_address_in_process(HANDLE process, HMODULE module, LPCSTR function_name) {
        const auto base = reinterpret_cast<UINT_PTR>(module);

        IMAGE_DOS_HEADER dos_header = {0};

        if (!read_memory(process, base, sizeof(dos_header), &dos_header)) {
            return nullptr;
        }

        if (dos_header.e_magic != IMAGE_DOS_SIGNATURE) {
            return nullptr;
        }

        DWORD nt_signature = {0};
        if (!read_memory(process, base + dos_header.e_lfanew, sizeof(nt_signature), &nt_signature)) {
            return nullptr;
        }

        if (nt_signature != IMAGE_NT_SIGNATURE) {
            return nullptr;
        }

        IMAGE_FILE_HEADER file_header = {0};
        if (!read_memory(process, base + dos_header.e_lfanew + sizeof(DWORD), sizeof(file_header), &file_header)) {
            return nullptr;
        }

        UINT_PTR export_directory_offset = {0};
        SIZE_T export_directory_size = {0};
        if (file_header.Machine & IMAGE_FILE_32BIT_MACHINE) {
            IMAGE_OPTIONAL_HEADER32 optional_header = {0};
            if (!read_memory(process, base + dos_header.e_lfanew + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER), sizeof(optional_header), &optional_header)) {
                return nullptr;
            }

            export_directory_offset = static_cast<UINT_PTR>(optional_header.DataDirectory[0].VirtualAddress);
            export_directory_size = static_cast<SIZE_T>(optional_header.DataDirectory[0].Size);
        } else {
            IMAGE_OPTIONAL_HEADER64 optional_header = {0};
            if (!read_memory(process, base + dos_header.e_lfanew + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER), sizeof(optional_header), &optional_header)) {
                return nullptr;
            }

            export_directory_offset = static_cast<UINT_PTR>(optional_header.DataDirectory[0].VirtualAddress);
            export_directory_size = static_cast<SIZE_T>(optional_header.DataDirectory[0].Size);
        }

        IMAGE_EXPORT_DIRECTORY export_directory = {0};
        if (!read_memory(process, base + export_directory_offset, sizeof(export_directory), &export_directory)) {
            return nullptr;
        }

        const std::unique_ptr<DWORD[]> name_alloc(new DWORD[export_directory.NumberOfNames]);
        if (!read_memory(process, base + export_directory.AddressOfNames, export_directory.NumberOfNames * sizeof(DWORD), name_alloc.get())) {
            return nullptr;
        }

        const std::unique_ptr<USHORT[]> ordinal_alloc(new USHORT[export_directory.NumberOfNames]);
        if (!read_memory(process, base + export_directory.AddressOfNameOrdinals, export_directory.NumberOfNames * sizeof(USHORT), ordinal_alloc.get())) {
            return nullptr;
        }

        const std::unique_ptr<DWORD[]> function_alloc(new DWORD[export_directory.NumberOfFunctions]);
        if (!read_memory(process, base + export_directory.AddressOfFunctions, export_directory.NumberOfFunctions * sizeof(DWORD), function_alloc.get())) {
            return nullptr;
        }

        std::string cur_name;
        for (DWORD i = 0; i < export_directory.NumberOfNames; ++i) {
            const DWORD name = name_alloc[i];

            if (read_name(process, base, name, cur_name) && cur_name == function_name) {

                const USHORT ordinal = ordinal_alloc[i];
                const DWORD function = function_alloc[ordinal];

                if (function > export_directory_offset && function < export_directory_offset + export_directory_size) {
                    std::string forward_str;

                    if (!read_name(process, base, function, forward_str)) {
                        return nullptr;
                    }

                    std::string forward_module, forward_name;
                    if (!parse_forward(forward_str, forward_module, forward_name)) {
                        return nullptr;
                    }

                    HMODULE module_handle = find_module(process, forward_module);
                    if (!module_handle) {
                        return nullptr;
                    }

                    return get_function_address_in_process(process, module_handle, forward_name.c_str());
                }

                return reinterpret_cast<FARPROC>(base + static_cast<UINT_PTR>(function));
            }
        }

        return nullptr;
    }

    FARPROC get_function_address_in_process(HANDLE process, LPCSTR module_name, LPCSTR function_name) {
        HMODULE module_handle = find_module(process, module_name);

        if (!module_handle) {
            return nullptr;
        }

        return get_function_address_in_process(process, module_handle, function_name);
    }
} // namespace injector
