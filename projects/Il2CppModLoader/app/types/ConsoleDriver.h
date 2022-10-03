#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsoleDriver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsoleDriver__Class** type_info;
        inline app::ConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::ConsoleDriver__Class>(type_info, "System", "ConsoleDriver");
        }
        inline app::ConsoleDriver* create() {
            return il2cpp::create_object<app::ConsoleDriver>(get_class());
        }
    } // namespace ConsoleDriver
} // namespace app::classes::types
