#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaticEntityLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StaticEntityLocomotion__Class** type_info;
        inline app::StaticEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityLocomotion__Class>(type_info, "Moon", "StaticEntityLocomotion");
        }
        inline app::StaticEntityLocomotion* create() {
            return il2cpp::create_object<app::StaticEntityLocomotion>(get_class());
        }
    } // namespace StaticEntityLocomotion
} // namespace app::classes::types
