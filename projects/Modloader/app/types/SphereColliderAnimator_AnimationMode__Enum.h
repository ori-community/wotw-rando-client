#pragma once
#include <Modloader/app/structs/SphereColliderAnimator_AnimationMode__Enum.h>
#include <Modloader/app/structs/SphereColliderAnimator_AnimationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SphereColliderAnimator_AnimationMode__Enum {
        inline app::SphereColliderAnimator_AnimationMode__Enum__Class** type_info() {
            static app::SphereColliderAnimator_AnimationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SphereColliderAnimator_AnimationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SphereColliderAnimator_AnimationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SphereColliderAnimator_AnimationMode__Enum__Class>(type_info(), "", "SphereColliderAnimator", "AnimationMode");
        }
        inline app::SphereColliderAnimator_AnimationMode__Enum* create() {
            return il2cpp::create_object<app::SphereColliderAnimator_AnimationMode__Enum>(get_class());
        }
    } // namespace SphereColliderAnimator_AnimationMode__Enum
} // namespace app::classes::types
