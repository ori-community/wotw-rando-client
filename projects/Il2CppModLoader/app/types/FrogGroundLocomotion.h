#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrogGroundLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrogGroundLocomotion__Class** type_info;
        inline app::FrogGroundLocomotion__Class* get_class() {
            return il2cpp::get_class<app::FrogGroundLocomotion__Class>(type_info, "", "FrogGroundLocomotion");
        }
        inline app::FrogGroundLocomotion* create() {
            return il2cpp::create_object<app::FrogGroundLocomotion>(get_class());
        }
    } // namespace FrogGroundLocomotion
} // namespace app::classes::types
