#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindowsConsoleDriver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WindowsConsoleDriver__Class** type_info;
        inline app::WindowsConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::WindowsConsoleDriver__Class>(type_info, "System", "WindowsConsoleDriver");
        }
        inline app::WindowsConsoleDriver* create() {
            return il2cpp::create_object<app::WindowsConsoleDriver>(get_class());
        }
    } // namespace WindowsConsoleDriver
} // namespace app::classes::types
