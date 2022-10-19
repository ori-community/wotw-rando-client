#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsymGroundEntityLocomotion {
        namespace {
            inline app::AsymGroundEntityLocomotion__Class* type_info_ref = nullptr;
        }
        inline app::AsymGroundEntityLocomotion__Class** type_info = &type_info_ref;
        inline app::AsymGroundEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::AsymGroundEntityLocomotion__Class>(type_info, "Moon", "AsymGroundEntityLocomotion");
        }
        inline app::AsymGroundEntityLocomotion* create() {
            return il2cpp::create_object<app::AsymGroundEntityLocomotion>(get_class());
        }
    } // namespace AsymGroundEntityLocomotion
} // namespace app::classes::types
