#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HealthDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HealthDebugMenuItem__Class** type_info;
        inline app::HealthDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::HealthDebugMenuItem__Class>(type_info, "", "HealthDebugMenuItem");
        }
        inline app::HealthDebugMenuItem* create() {
            return il2cpp::create_object<app::HealthDebugMenuItem>(get_class());
        }
    } // namespace HealthDebugMenuItem
} // namespace app::classes::types
