#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuaternionRotationAnimatorEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QuaternionRotationAnimatorEntity__Class** type_info;
        inline app::QuaternionRotationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::QuaternionRotationAnimatorEntity__Class>(type_info, "Moon.Timeline", "QuaternionRotationAnimatorEntity");
        }
        inline app::QuaternionRotationAnimatorEntity* create() {
            return il2cpp::create_object<app::QuaternionRotationAnimatorEntity>(get_class());
        }
    } // namespace QuaternionRotationAnimatorEntity
} // namespace app::classes::types
