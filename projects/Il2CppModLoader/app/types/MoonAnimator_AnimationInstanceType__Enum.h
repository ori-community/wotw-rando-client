#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationInstanceType__Enum {
        namespace {
            app::MoonAnimator_AnimationInstanceType__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonAnimator_AnimationInstanceType__Enum__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_AnimationInstanceType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimationInstanceType__Enum__Class>(type_info, "Moon", "MoonAnimator", "AnimationInstanceType");
        }
        inline app::MoonAnimator_AnimationInstanceType__Enum* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationInstanceType__Enum>(get_class());
        }
    } // namespace MoonAnimator_AnimationInstanceType__Enum
} // namespace app::classes::types
