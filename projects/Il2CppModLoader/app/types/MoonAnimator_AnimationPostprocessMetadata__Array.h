#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationPostprocessMetadata__Array {
        namespace {
            inline app::MoonAnimator_AnimationPostprocessMetadata__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_AnimationPostprocessMetadata__Array__Class>(type_info, "Moon", "MoonAnimator+AnimationPostprocessMetadata[]");
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationPostprocessMetadata__Array>(get_class());
        }
    } // namespace MoonAnimator_AnimationPostprocessMetadata__Array
} // namespace app::classes::types
