#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoLocomotion__Class** type_info;
        inline app::SkeetoLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLocomotion__Class>(type_info, "Moon", "SkeetoLocomotion");
        }
        inline app::SkeetoLocomotion* create() {
            return il2cpp::create_object<app::SkeetoLocomotion>(get_class());
        }
    } // namespace SkeetoLocomotion
} // namespace app::classes::types
