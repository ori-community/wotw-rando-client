#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HealthBar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HealthBar__Class** type_info;
        inline app::HealthBar__Class* get_class() {
            return il2cpp::get_class<app::HealthBar__Class>(type_info, "", "HealthBar");
        }
        inline app::HealthBar* create() {
            return il2cpp::create_object<app::HealthBar>(get_class());
        }
    } // namespace HealthBar
} // namespace app::classes::types
