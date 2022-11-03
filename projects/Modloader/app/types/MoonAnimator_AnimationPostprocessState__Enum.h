#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationPostprocessState__Enum {
        namespace {
            inline app::MoonAnimator_AnimationPostprocessState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_AnimationPostprocessState__Enum__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_AnimationPostprocessState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimationPostprocessState__Enum__Class>(type_info, "Moon", "MoonAnimator", "AnimationPostprocessState");
        }
        inline app::MoonAnimator_AnimationPostprocessState__Enum* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationPostprocessState__Enum>(get_class());
        }
    } // namespace MoonAnimator_AnimationPostprocessState__Enum
} // namespace app::classes::types
