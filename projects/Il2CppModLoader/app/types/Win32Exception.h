#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Win32Exception {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Win32Exception__Class** type_info;
        inline app::Win32Exception__Class* get_class() {
            return il2cpp::get_class<app::Win32Exception__Class>(type_info, "System.ComponentModel", "Win32Exception");
        }
        inline app::Win32Exception* create() {
            return il2cpp::create_object<app::Win32Exception>(get_class());
        }
    } // namespace Win32Exception
} // namespace app::classes::types
