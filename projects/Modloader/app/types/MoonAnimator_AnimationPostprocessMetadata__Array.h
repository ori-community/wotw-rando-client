#pragma once
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessMetadata__Array.h>
#include <Modloader/app/structs/MoonAnimator_AnimationPostprocessMetadata__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationPostprocessMetadata__Array {
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array__Class** type_info() {
            static app::MoonAnimator_AnimationPostprocessMetadata__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_AnimationPostprocessMetadata__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_AnimationPostprocessMetadata__Array__Class>(type_info(), "Moon", "MoonAnimator+AnimationPostprocessMetadata[]");
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationPostprocessMetadata__Array>(get_class());
        }
    } // namespace MoonAnimator_AnimationPostprocessMetadata__Array
} // namespace app::classes::types
