#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationLimitAngle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RotationLimitAngle__Class** type_info;
        inline app::RotationLimitAngle__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitAngle__Class>(type_info, "RootMotion.FinalIK", "RotationLimitAngle");
        }
        inline app::RotationLimitAngle* create() {
            return il2cpp::create_object<app::RotationLimitAngle>(get_class());
        }
    } // namespace RotationLimitAngle
} // namespace app::classes::types
