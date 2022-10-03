#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Win32Native_WIN32_FIND_DATA {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Win32Native_WIN32_FIND_DATA__Class** type_info;
        inline app::Win32Native_WIN32_FIND_DATA__Class* get_class() {
            return il2cpp::get_nested_class<app::Win32Native_WIN32_FIND_DATA__Class>(type_info, "Microsoft.Win32", "Win32Native", "WIN32_FIND_DATA");
        }
        inline app::Win32Native_WIN32_FIND_DATA* create() {
            return il2cpp::create_object<app::Win32Native_WIN32_FIND_DATA>(get_class());
        }
    } // namespace Win32Native_WIN32_FIND_DATA
} // namespace app::classes::types
