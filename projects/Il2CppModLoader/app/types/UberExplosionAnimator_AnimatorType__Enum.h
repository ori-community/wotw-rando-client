#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberExplosionAnimator_AnimatorType__Enum {
        namespace {
            inline app::UberExplosionAnimator_AnimatorType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberExplosionAnimator_AnimatorType__Enum__Class** type_info = &type_info_ref;
        inline app::UberExplosionAnimator_AnimatorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberExplosionAnimator_AnimatorType__Enum__Class>(type_info, "", "UberExplosionAnimator", "AnimatorType");
        }
        inline app::UberExplosionAnimator_AnimatorType__Enum* create() {
            return il2cpp::create_object<app::UberExplosionAnimator_AnimatorType__Enum>(get_class());
        }
    } // namespace UberExplosionAnimator_AnimatorType__Enum
} // namespace app::classes::types
