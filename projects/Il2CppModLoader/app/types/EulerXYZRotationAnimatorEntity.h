#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EulerXYZRotationAnimatorEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EulerXYZRotationAnimatorEntity__Class** type_info;
        inline app::EulerXYZRotationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::EulerXYZRotationAnimatorEntity__Class>(type_info, "Moon.Timeline", "EulerXYZRotationAnimatorEntity");
        }
        inline app::EulerXYZRotationAnimatorEntity* create() {
            return il2cpp::create_object<app::EulerXYZRotationAnimatorEntity>(get_class());
        }
    } // namespace EulerXYZRotationAnimatorEntity
} // namespace app::classes::types
