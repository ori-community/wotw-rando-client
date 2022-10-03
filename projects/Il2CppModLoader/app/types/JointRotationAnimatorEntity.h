#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointRotationAnimatorEntity {
        namespace {
            app::JointRotationAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::JointRotationAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::JointRotationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::JointRotationAnimatorEntity__Class>(type_info, "Moon.Timeline", "JointRotationAnimatorEntity");
        }
        inline app::JointRotationAnimatorEntity* create() {
            return il2cpp::create_object<app::JointRotationAnimatorEntity>(get_class());
        }
    } // namespace JointRotationAnimatorEntity
} // namespace app::classes::types
