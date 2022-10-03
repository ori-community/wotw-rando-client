#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightPriority {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightPriority__Class** type_info;
        inline app::LightPriority__Class* get_class() {
            return il2cpp::get_class<app::LightPriority__Class>(type_info, "", "LightPriority");
        }
        inline app::LightPriority* create() {
            return il2cpp::create_object<app::LightPriority>(get_class());
        }
    } // namespace LightPriority
} // namespace app::classes::types
