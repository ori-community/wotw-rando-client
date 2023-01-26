#pragma once
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessState__Enum.h>
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationPostprocessState__Enum {
        inline app::MoonAnimator_AnimationPostprocessState__Enum__Class** type_info() {
            static app::MoonAnimator_AnimationPostprocessState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_AnimationPostprocessState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_AnimationPostprocessState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimationPostprocessState__Enum__Class>(type_info(), "Moon", "MoonAnimator", "AnimationPostprocessState");
        }
        inline app::MoonAnimator_AnimationPostprocessState__Enum* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationPostprocessState__Enum>(get_class());
        }
    } // namespace MoonAnimator_AnimationPostprocessState__Enum
} // namespace app::classes::types
