#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullConsoleDriver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullConsoleDriver__Class** type_info;
        inline app::NullConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::NullConsoleDriver__Class>(type_info, "System", "NullConsoleDriver");
        }
        inline app::NullConsoleDriver* create() {
            return il2cpp::create_object<app::NullConsoleDriver>(get_class());
        }
    } // namespace NullConsoleDriver
} // namespace app::classes::types
