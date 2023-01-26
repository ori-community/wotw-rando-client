#pragma once
#include <Modloader/app/structs/AnimationPosePlayable.h>
#include <Modloader/app/structs/AnimationPosePlayable__Boxed.h>
#include <Modloader/app/structs/AnimationPosePlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPosePlayable {
        inline app::AnimationPosePlayable__Class** type_info() {
            static app::AnimationPosePlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationPosePlayable__Class**)(modloader::win::memory::resolve_rva(0x047246E8));
            }
            return cache;
        }
        inline app::AnimationPosePlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationPosePlayable__Class>(type_info(), "UnityEngine.Animations", "AnimationPosePlayable");
        }
        inline app::AnimationPosePlayable* create() {
            return il2cpp::create_object<app::AnimationPosePlayable>(get_class());
        }
        inline app::AnimationPosePlayable__Boxed* box(app::AnimationPosePlayable value) {
            return il2cpp::box_value<app::AnimationPosePlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationPosePlayable
} // namespace app::classes::types
