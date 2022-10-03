#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationLimitHinge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RotationLimitHinge__Class** type_info;
        inline app::RotationLimitHinge__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitHinge__Class>(type_info, "RootMotion.FinalIK", "RotationLimitHinge");
        }
        inline app::RotationLimitHinge* create() {
            return il2cpp::create_object<app::RotationLimitHinge>(get_class());
        }
    } // namespace RotationLimitHinge
} // namespace app::classes::types
