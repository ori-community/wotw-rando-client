#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationPostprocessMetadata {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimator_AnimationPostprocessMetadata__Class** type_info;
        inline app::MoonAnimator_AnimationPostprocessMetadata__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimationPostprocessMetadata__Class>(type_info, "Moon", "MoonAnimator", "AnimationPostprocessMetadata");
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationPostprocessMetadata>(get_class());
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_AnimationPostprocessMetadata__Array>(get_class(), size);
        }
        inline app::MoonAnimator_AnimationPostprocessMetadata__Array* create_array(const std::vector<app::MoonAnimator_AnimationPostprocessMetadata*>& items) {
            return il2cpp::array_new<app::MoonAnimator_AnimationPostprocessMetadata__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_AnimationPostprocessMetadata
} // namespace app::classes::types
