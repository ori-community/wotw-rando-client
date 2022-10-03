#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AirEntityLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AirEntityLocomotion__Class** type_info;
        inline app::AirEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::AirEntityLocomotion__Class>(type_info, "Moon", "AirEntityLocomotion");
        }
        inline app::AirEntityLocomotion* create() {
            return il2cpp::create_object<app::AirEntityLocomotion>(get_class());
        }
    } // namespace AirEntityLocomotion
} // namespace app::classes::types
