#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SandWormLocomotion__Class** type_info;
        inline app::SandWormLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SandWormLocomotion__Class>(type_info, "", "SandWormLocomotion");
        }
        inline app::SandWormLocomotion* create() {
            return il2cpp::create_object<app::SandWormLocomotion>(get_class());
        }
    } // namespace SandWormLocomotion
} // namespace app::classes::types
