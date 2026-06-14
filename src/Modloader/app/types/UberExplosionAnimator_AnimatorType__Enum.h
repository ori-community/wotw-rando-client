#pragma once
#include <Modloader/app/structs/UberExplosionAnimator_AnimatorType__Enum.h>
#include <Modloader/app/structs/UberExplosionAnimator_AnimatorType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberExplosionAnimator_AnimatorType__Enum {
        inline app::UberExplosionAnimator_AnimatorType__Enum__Class** type_info() {
            static app::UberExplosionAnimator_AnimatorType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberExplosionAnimator_AnimatorType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberExplosionAnimator_AnimatorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberExplosionAnimator_AnimatorType__Enum__Class>(type_info(), "", "UberExplosionAnimator", "AnimatorType");
        }
        inline app::UberExplosionAnimator_AnimatorType__Enum* create() {
            return il2cpp::create_object<app::UberExplosionAnimator_AnimatorType__Enum>(get_class());
        }
    } // namespace UberExplosionAnimator_AnimatorType__Enum
} // namespace app::classes::types
