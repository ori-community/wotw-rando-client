#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IConsoleDriver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IConsoleDriver__Class** type_info;
        inline app::IConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::IConsoleDriver__Class>(type_info, "System", "IConsoleDriver");
        }
        inline app::IConsoleDriver* create() {
            return il2cpp::create_object<app::IConsoleDriver>(get_class());
        }
    } // namespace IConsoleDriver
} // namespace app::classes::types
