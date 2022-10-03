#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPosePlayable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationPosePlayable__Class** type_info;
        inline app::AnimationPosePlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationPosePlayable__Class>(type_info, "UnityEngine.Animations", "AnimationPosePlayable");
        }
        inline app::AnimationPosePlayable* create() {
            return il2cpp::create_object<app::AnimationPosePlayable>(get_class());
        }
        inline app::AnimationPosePlayable__Boxed* box(app::AnimationPosePlayable value) {
            return il2cpp::box_value<app::AnimationPosePlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationPosePlayable
} // namespace app::classes::types
