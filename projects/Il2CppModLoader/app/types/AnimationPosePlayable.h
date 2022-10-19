#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationPosePlayable {
        inline app::AnimationPosePlayable__Class** type_info = (app::AnimationPosePlayable__Class**)(modloader::win::memory::resolve_rva(0x047246E8));
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
