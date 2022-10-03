#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindowsAccountType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WindowsAccountType__Enum__Class** type_info;
        inline app::WindowsAccountType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WindowsAccountType__Enum__Class>(type_info, "System.Security.Principal", "WindowsAccountType");
        }
        inline app::WindowsAccountType__Enum* create() {
            return il2cpp::create_object<app::WindowsAccountType__Enum>(get_class());
        }
    } // namespace WindowsAccountType__Enum
} // namespace app::classes::types
