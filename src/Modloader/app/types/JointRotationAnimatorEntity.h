#pragma once
#include <Modloader/app/structs/JointRotationAnimatorEntity.h>
#include <Modloader/app/structs/JointRotationAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointRotationAnimatorEntity {
        inline app::JointRotationAnimatorEntity__Class** type_info() {
            static app::JointRotationAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JointRotationAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JointRotationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::JointRotationAnimatorEntity__Class>(type_info(), "Moon.Timeline", "JointRotationAnimatorEntity");
        }
        inline app::JointRotationAnimatorEntity* create() {
            return il2cpp::create_object<app::JointRotationAnimatorEntity>(get_class());
        }
    } // namespace JointRotationAnimatorEntity
} // namespace app::classes::types
